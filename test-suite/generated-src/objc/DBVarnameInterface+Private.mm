// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from varnames.djinni

#import "DBVarnameInterface+Private.h"
#import "DBVarnameInterface.h"
#import "DBVarnameRecord+Private.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface DBVarnameInterface ()

- (id)initWithCpp:(const std::shared_ptr<::testsuite::VarnameInterface>&)cppRef;

@end

@implementation DBVarnameInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::testsuite::VarnameInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::testsuite::VarnameInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nonnull DBVarnameRecord *)Rmethod:(nonnull DBVarnameRecord *)r {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->_rmethod_(::djinni_generated::VarnameRecord::toCpp(r));
        return ::djinni_generated::VarnameRecord::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable DBVarnameInterface *)Imethod:(nullable DBVarnameInterface *)i {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->_imethod_(::djinni_generated::VarnameInterface::toCpp(i));
        return ::djinni_generated::VarnameInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto VarnameInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto VarnameInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<DBVarnameInterface>(cpp);
}

}  // namespace djinni_generated

@end