// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from varnames.djinni

#pragma once

#include "_varname_record_.hpp"

namespace testsuite {

/**
 * Underscore is used as a separator in Djinni names, so we don't really
 * anticipate it to be used as a prefix/suffix.  Some name styles behave
 * badly when it is.  However this test case ensures we at least don't crash.
 */
public ref class VarnameRecord sealed : public Platform::Object {
public:
    property int8 Field;

    VarnameRecord(int8 Field) {
        this->Field = Field;
    }
    VarnameRecord() {}
internal:
    ::testsuite::VarnameRecord toCpp();
    static VarnameRecord^ fromCpp(const ::testsuite::VarnameRecord& value);
};

}  // namespace testsuite
