// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from yaml-test.djinni

#pragma once

#include "Color.h"
#include "RecordWithDerivings.h"
#include "extern_record_with_derivings.hpp"

namespace testsuite {

/** This file tests YAML dumped by Djinni can be parsed back in */
public ref class ExternRecordWithDerivings sealed : public Platform::Object {
public:
    property ::testsuite::RecordWithDerivings^ Member;
    property ::testsuite::Color^ E;

    ExternRecordWithDerivings(::testsuite::RecordWithDerivings^ member,
                              ::testsuite::Color^ e) {
        this->Member = member;
        this->E = e;
    }
    ExternRecordWithDerivings() {}
internal:
    ::ExternRecordWithDerivings toCpp();
    static ExternRecordWithDerivings^ fromCpp(const ::ExternRecordWithDerivings& value);

    bool Equals(ExternRecordWithDerivings^ rhs);

    int32 CompareTo(ExternRecordWithDerivings^ rhs);
};

}  // namespace testsuite
