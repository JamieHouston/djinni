// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from extended_record.djinni

#pragma once

#include "extended_record.hpp"

namespace testsuite {

/** Extended record */
public ref class ExtendedRecord sealed : public Platform::Object {
public:
    property static ExtendedRecord^ ExtendedRecord::ExtendedRecordConst {ExtendedRecord^ get() {return ref new ExtendedRecord(
        true /* Foo */ );} } 
    property bool Foo;

    ExtendedRecord(bool foo) {
        this->Foo = foo;
    }
    ExtendedRecord() {}
internal:
    ::testsuite::ExtendedRecord toCpp();
    static ExtendedRecord^ fromCpp(const ::testsuite::ExtendedRecord& value);
};

}  // namespace testsuite
