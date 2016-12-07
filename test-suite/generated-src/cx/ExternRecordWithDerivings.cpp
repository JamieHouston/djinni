// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from yaml-test.djinni

#include "ExternRecordWithDerivings.h"  // my header
#include "translation.h"

namespace testsuite {


::ExternRecordWithDerivings ExternRecordWithDerivings::toCpp() {
    return ::ExternRecordWithDerivings(
        transform<::testsuite::RecordWithDerivings, ::testsuite::RecordWithDerivings>()(Member),
        transform<::testsuite::color, ::testsuite::Color>()(E));
}

ExternRecordWithDerivings^ ExternRecordWithDerivings::fromCpp(const ::ExternRecordWithDerivings& value) {
    ExternRecordWithDerivings^ ret = ref new ExternRecordWithDerivings();
    ret->Member = transform<::testsuite::RecordWithDerivings, ::testsuite::RecordWithDerivings>()(value.member);
    ret->E = transform<::testsuite::color, ::testsuite::Color>()(value.e);
    return ret;
}

bool ExternRecordWithDerivings::Equals(ExternRecordWithDerivings^ rhs) {
    return this->Member == rhs->Member &&
           this->E == rhs->E;
}

int32 ExternRecordWithDerivings::CompareTo(ExternRecordWithDerivings^ rhs) {
    if (rhs == nullptr) return 1;
    int32 tempResult = 0;
    if (this->Member < rhs->Member) {
        return -1;
    } else if (rhs->Member < this->Member) {
        tempResult = 1;
    } else {
        tempResult = 0;
    }
    if(tempResult) return tempResult;
    if (this->E < rhs->E) {
        return -1;
    } else if (rhs->E < this->E) {
        tempResult = 1;
    } else {
        tempResult = 0;
    }
    if(tempResult) return tempResult;
    return 0;
}

}  // namespace testsuite
