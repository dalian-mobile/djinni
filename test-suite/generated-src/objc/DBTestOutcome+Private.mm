// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from outcome.djinni

#import "DBTestOutcome+Private.h"
#import "DBTestOutcome.h"
#import "DBNestedOutcome+Private.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface DBTestOutcome ()

- (id)initWithCpp:(const std::shared_ptr<::testsuite::TestOutcome>&)cppRef;

@end

@implementation DBTestOutcome {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::testsuite::TestOutcome>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::testsuite::TestOutcome>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nonnull DJOutcome<NSString *, NSNumber *> *)getSuccessOutcome {
    try {
        auto objcpp_result_ = ::testsuite::TestOutcome::getSuccessOutcome();
        return ::djinni::Outcome<::djinni::String, ::djinni::I32>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull DJOutcome<NSString *, NSNumber *> *)getErrorOutcome {
    try {
        auto objcpp_result_ = ::testsuite::TestOutcome::getErrorOutcome();
        return ::djinni::Outcome<::djinni::String, ::djinni::I32>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull NSString *)putSuccessOutcome:(nonnull DJOutcome<NSString *, NSNumber *> *)x {
    try {
        auto objcpp_result_ = ::testsuite::TestOutcome::putSuccessOutcome(::djinni::Outcome<::djinni::String, ::djinni::I32>::toCpp(x));
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int32_t)putErrorOutcome:(nonnull DJOutcome<NSString *, NSNumber *> *)x {
    try {
        auto objcpp_result_ = ::testsuite::TestOutcome::putErrorOutcome(::djinni::Outcome<::djinni::String, ::djinni::I32>::toCpp(x));
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull DBNestedOutcome *)getNestedSuccessOutcome {
    try {
        auto objcpp_result_ = ::testsuite::TestOutcome::getNestedSuccessOutcome();
        return ::djinni_generated::NestedOutcome::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull DBNestedOutcome *)getNestedErrorOutcome {
    try {
        auto objcpp_result_ = ::testsuite::TestOutcome::getNestedErrorOutcome();
        return ::djinni_generated::NestedOutcome::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int32_t)putNestedSuccessOutcome:(nonnull DBNestedOutcome *)x {
    try {
        auto objcpp_result_ = ::testsuite::TestOutcome::putNestedSuccessOutcome(::djinni_generated::NestedOutcome::toCpp(x));
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nonnull NSString *)putNestedErrorOutcome:(nonnull DBNestedOutcome *)x {
    try {
        auto objcpp_result_ = ::testsuite::TestOutcome::putNestedErrorOutcome(::djinni_generated::NestedOutcome::toCpp(x));
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto TestOutcome::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto TestOutcome::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<DBTestOutcome>(cpp);
}

}  // namespace djinni_generated

@end
