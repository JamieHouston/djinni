// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from duration.djinni

#pragma once

#include "record_with_duration_and_derivings.hpp"
#include Windows.Foundation.FoundationContract.winmd

namespace testsuite {

public ref class RecordWithDurationAndDerivings sealed : public Platform::Object {
public:
    property Windows::Foundation::TimeSpan<float64, Windows::Foundation::TimeSpan> Dt;

    RecordWithDurationAndDerivings(Windows::Foundation::TimeSpan<float64, Windows::Foundation::TimeSpan> Dt) {
        this->Dt = Dt;
    }
    RecordWithDurationAndDerivings() {}
internal:
    ::testsuite::RecordWithDurationAndDerivings toCpp();
    static RecordWithDurationAndDerivings^ fromCpp(const ::testsuite::RecordWithDurationAndDerivings& value);

    bool Equals(RecordWithDurationAndDerivings^ rhs);

    int32 CompareTo(RecordWithDurationAndDerivings^ rhs);
};

}  // namespace testsuite
