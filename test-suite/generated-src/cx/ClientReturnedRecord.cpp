// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#include "ClientReturnedRecord.h"  // my header
#include "translation.h"

namespace testsuite {


::testsuite::ClientReturnedRecord ClientReturnedRecord::toCpp() {
    return ::testsuite::ClientReturnedRecord(
        transform<int64_t, int64>()(RecordId),
        transform<std::string, Platform::String^>()(Content),
        transform<std::experimental::optional<std::string>, Platform::String^>()(Misc));
}

ClientReturnedRecord^ ClientReturnedRecord::fromCpp(const ::testsuite::ClientReturnedRecord& value) {
    ClientReturnedRecord^ ret = ref new ClientReturnedRecord();
    ret->RecordId = transform<int64_t, int64>()(value.record_id);
    ret->Content = transform<std::string, Platform::String^>()(value.content);
    ret->Misc = transform<std::experimental::optional<std::string>, Platform::String^>()(value.misc);
    return ret;
}

}  // namespace testsuite
