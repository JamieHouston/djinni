// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#include "ReturnOne.h"  // my header
#include "translation.h"

namespace testsuite {

ReturnOne^ ReturnOne::GetInstance ()
{
    try {
        auto cppRet = ::testsuite::ReturnOne::get_instance();
        return transform<std::shared_ptr<::testsuite::ReturnOne>, ::testsuite::ReturnOne^>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}
int8 ReturnOne::ReturnOne ()
{
    try {
        auto cppRet = _cppRef->return_one();
        return transform<int8_t, int8>()(cppRet);
    }
    catch(const std::exception& e) {
        throw ref new Platform::Exception(-1, transform<std::string, Platform::String^>()((std::string)e.what()));
    }
}

}  // namespace testsuite
