// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#include "MapDateRecord.h"  // my header
#include "translation.h"

namespace testsuite {


::testsuite::MapDateRecord MapDateRecord::toCpp() {
    return ::testsuite::MapDateRecord(
        transform<std::unordered_map<std::string, std::chrono::system_clock::time_point>, Windows::Foundation::Collections::IMap<Platform::String^, Windows::Foundation::DateTime>^>()(DatesById));
}

MapDateRecord^ MapDateRecord::fromCpp(const ::testsuite::MapDateRecord& value) {
    MapDateRecord^ ret = ref new MapDateRecord();
    ret->DatesById = transform<std::unordered_map<std::string, std::chrono::system_clock::time_point>, Windows::Foundation::Collections::IMap<Platform::String^, Windows::Foundation::DateTime>^>()(value.dates_by_id);
    return ret;
}

}  // namespace testsuite
