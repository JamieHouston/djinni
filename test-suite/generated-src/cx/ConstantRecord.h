// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#pragma once

#include "constant_record.hpp"

namespace testsuite {

/** Record for use in constants */
public ref class ConstantRecord sealed : public Platform::Object {
public:
    property int32 SomeInteger;
    property Platform::String^ SomeString;

    ConstantRecord(int32 SomeInteger,
                   Platform::String^ SomeString) {
        this->SomeInteger = SomeInteger;
        this->SomeString = SomeString;
    }
    ConstantRecord() {}
internal:
    ::testsuite::ConstantRecord toCpp();
    static ConstantRecord^ fromCpp(const ::testsuite::ConstantRecord& value);
};

}  // namespace testsuite
