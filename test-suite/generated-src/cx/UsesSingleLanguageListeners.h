// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from single_language_interfaces.djinni

#pragma once

#include "CxOnlyListenerProxy.h"
#include "JavaOnlyListener.h"
#include "ObjcOnlyListener.h"
#include "uses_single_language_listeners.hpp"
#include <memory>

namespace testsuite {

public ref class UsesSingleLanguageListeners sealed : public Platform::Object
{
public:
    void CallForObjC (IObjcOnlyListener^ L);
    IObjcOnlyListener^ ReturnForObjC ();
    void CallForJava (IJavaOnlyListener^ L);
    IJavaOnlyListener^ ReturnForJava ();
    void CallForCx (ICxOnlyListener^ L);
    ICxOnlyListener^ ReturnForCx ();
internal:
    UsesSingleLanguageListeners(std::shared_ptr<::testsuite::UsesSingleLanguageListeners> cppRef) : _cppRef(cppRef) {}
    std::shared_ptr<::testsuite::UsesSingleLanguageListeners> cppRef() {return _cppRef;}
private:
    std::shared_ptr<::testsuite::UsesSingleLanguageListeners> _cppRef;
};

}  // namespace testsuite
