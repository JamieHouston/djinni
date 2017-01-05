// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#pragma once

#include "map_record.hpp"

namespace testsuite {

public ref class MapRecord sealed : public Platform::Object {
public:
    property Windows::Foundation::Collections::IMap<Platform::String^, int64>^ Map;
    property Windows::Foundation::Collections::IMap<int32, int32>^ Imap;

    MapRecord(::testsuite::Windows::Foundation::Collections::IMap<Platform::String^, int64>^ map,
              Windows::Foundation::Collections::IMap<int32, int32>^ imap) {
        this->Map = map;
        this->Imap = imap;
    }
    MapRecord() {}
internal:
    ::testsuite::MapRecord toCpp();
    static MapRecord^ fromCpp(const ::testsuite::MapRecord& value);
};

}  // namespace testsuite
