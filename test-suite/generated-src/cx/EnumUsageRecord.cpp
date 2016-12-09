// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#include "EnumUsageRecord.h"  // my header
#include "translation.h"

namespace testsuite {


::testsuite::EnumUsageRecord EnumUsageRecord::toCpp() {
    return ::testsuite::EnumUsageRecord(
        transform<::testsuite::color, Color>()(E),
        transform<std::experimental::optional<::testsuite::color>, Platform::IBox<Color>^>()(O),
        transform<std::vector<::testsuite::color>, Windows::Foundation::Collections::IVector<Color>^>()(L),
        transform<std::unordered_set<::testsuite::color>, Windows::Foundation::Collections::IIterable<Color>^>()(S),
        transform<std::unordered_map<::testsuite::color, ::testsuite::color>, Windows::Foundation::Collections::IMap<Color, Color>^>()(M));
}

EnumUsageRecord^ EnumUsageRecord::fromCpp(const ::testsuite::EnumUsageRecord& value) {
    EnumUsageRecord^ ret = ref new EnumUsageRecord();
    ret->E = transform<::testsuite::color, Color>()(value.e);
    ret->O = transform<std::experimental::optional<::testsuite::color>, Platform::IBox<Color>^>()(value.o);
    ret->L = transform<std::vector<::testsuite::color>, Windows::Foundation::Collections::IVector<Color>^>()(value.l);
    ret->S = transform<std::unordered_set<::testsuite::color>, Windows::Foundation::Collections::IIterable<Color>^>()(value.s);
    ret->M = transform<std::unordered_map<::testsuite::color, ::testsuite::color>, Windows::Foundation::Collections::IMap<Color, Color>^>()(value.m);
    return ret;
}

}  // namespace testsuite
