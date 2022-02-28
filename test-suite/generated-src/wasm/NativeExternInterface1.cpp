// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from yaml-test.djinni

#include "NativeExternInterface1.hpp"  // my header
#include "NativeClientInterface.hpp"
#include "NativeClientReturnedRecord.hpp"
#include "NativeColor.hpp"

namespace djinni_generated {

em::val NativeExternInterface1::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "foo",
        "bar",
    });
    return methods;
}

em::val NativeExternInterface1::foo(const CppType& self, const em::val& w_i) {
    try {
        auto r = self->foo(::djinni_generated::NativeClientInterface::toCpp(w_i));
        return ::djinni_generated::NativeClientReturnedRecord::fromCpp(r);
    }
    catch(const std::exception& e) {
        djinni::djinni_throw_native_exception(e.what());
        throw;
    }
}
int32_t NativeExternInterface1::bar(const CppType& self, int32_t w_e) {
    try {
        auto r = self->bar(::djinni_generated::NativeColor::toCpp(w_e));
        return ::djinni_generated::NativeColor::fromCpp(r);
    }
    catch(const std::exception& e) {
        djinni::djinni_throw_native_exception(e.what());
        throw;
    }
}

EMSCRIPTEN_BINDINGS(_extern_interface_1) {
    ::djinni::DjinniClass_<::ExternInterface1>("testsuite_ExternInterface1", "testsuite.ExternInterface1")
        .smart_ptr<std::shared_ptr<::ExternInterface1>>("testsuite_ExternInterface1")
        .function("nativeDestroy", &NativeExternInterface1::nativeDestroy)
        .function("foo", NativeExternInterface1::foo)
        .function("bar", NativeExternInterface1::bar)
        ;
}

}  // namespace djinni_generated
