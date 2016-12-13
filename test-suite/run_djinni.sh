#! /usr/bin/env bash
set -eu
shopt -s nullglob

# Locate the script file.  Cross symlinks if necessary.
loc="$0"
while [ -h "$loc" ]; do
    ls=`ls -ld "$loc"`
    link=`expr "$ls" : '.*-> \(.*\)$'`
    if expr "$link" : '/.*' > /dev/null; then
        loc="$link"  # Absolute link
    else
        loc="`dirname "$loc"`/$link"  # Relative link
    fi
done
base_dir=$(cd "`dirname "$loc"`" && pwd)

temp_out="$base_dir/djinni-output-temp"
in="$base_dir/djinni/all.djinni"
wchar_in="$base_dir/djinni/wchar_test.djinni"

# Relative version of in and temp_out are used for Djinni call below so that
# generated lists of infiles/outfiles are not machine-dependent.  This
# is an artifact of the test suite, where we want the genereated files
# to be in git for examination.
in_relative="djinni/all.djinni"
wchar_in_relative="djinni/wchar_test.djinni"
temp_out_relative="djinni-output-temp"

cpp_out="$base_dir/generated-src/cpp"
cx_out="$base_dir/generated-src/cx"
jni_out="$base_dir/generated-src/jni"
objc_out="$base_dir/generated-src/objc"
java_out="$base_dir/generated-src/java/com/dropbox/djinni/test"
yaml_out="$base_dir/generated-src/yaml"

java_package="com.dropbox.djinni.test"

gen_stamp="$temp_out/gen.stamp"

if [ $# -eq 0 ]; then
    # Normal build.
    true
elif [ $# -eq 1 ]; then
    command="$1"; shift
    if [ "$command" != "clean" ]; then
        echo "Unexpected arguemnt: \"$command\"." 1>&2
        exit 1
    fi
    for dir in "$temp_out" "$cpp_out" "$jni_out" "$java_out"; do
        if [ -e "$dir" ]; then
            echo "Deleting \"$dir\"..."
            rm -r "$dir"
        fi
    done
    rm "$base_dir/generated-src/inFileList.txt"
    rm "$base_dir/generated-src/outFileList.txt"
    exit
fi

# Build Djinni
"$base_dir/../src/build"

# Run Djinni generation
# Make sure we can parse back our own generated YAML file
cp "$base_dir/djinni/yaml-test.djinni" "$temp_out/yaml"
(cd "$base_dir" && \
"$base_dir/../src/run-assume-built" \
    --java-out "$temp_out_relative/java" \
    --java-package $java_package \
    --ident-java-field mFooBar \
    \
    --cpp-out "$temp_out_relative/cpp" \
    --ident-cpp-enum-type foo_bar \
    --cpp-optional-template "std::experimental::optional" \
    --cpp-optional-header "\"../../handwritten-src/cpp/optional.hpp\"" \
    \
    --jni-out "$temp_out_relative/jni" \
    --ident-jni-class NativeFooBar \
    --ident-jni-file NativeFooBar \
    \
    --objc-out "$temp_out_relative/objc" \
    --objcpp-out "$temp_out_relative/objc" \
    --objc-type-prefix DB \
    \
    --cx-out "$temp_out_relative/cx" \
    --cx-namespace testsuite \
    \
    --idl "$temp_out_relative/yaml/yaml-test.djinni" \
)

# Copy changes from "$temp_out" to final dir.

mirror() {
    local prefix="$1" ; shift
    local src="$1" ; shift
    local dest="$1" ; shift
    mkdir -p "$dest"
    rsync -a --delete --checksum --itemize-changes "$src"/ "$dest" | grep -v '^\.' | sed "s/^/[$prefix]/"
}

echo "Copying generated code to final directories..."
mirror "cpp" "$temp_out/cpp" "$cpp_out"
mirror "java" "$temp_out/java" "$java_out"
mirror "jni" "$temp_out/jni" "$jni_out"
mirror "objc" "$temp_out/objc" "$objc_out"
mirror "cx" "$temp_out/cx" "$cx_out"

date > "$gen_stamp"

echo "Djinni completed."
