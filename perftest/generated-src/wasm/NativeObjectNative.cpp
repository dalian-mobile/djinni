// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from djinni_perf_benchmark.djinni

#include "NativeObjectNative.hpp"  // my header

namespace djinni_generated {

em::val NativeObjectNative::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "baseline",
    });
    return methods;
}

void NativeObjectNative::baseline(const CppType& self) {
    try {
        self->baseline();
    }
    catch(const std::exception& e) {
        djinni::djinni_throw_native_exception(e.what());
        throw;
    }
}

EMSCRIPTEN_BINDINGS(snapchat_djinni_benchmark_ObjectNative) {
    em::class_<::snapchat::djinni::benchmark::ObjectNative>("benchmark_ObjectNative")
        .smart_ptr<std::shared_ptr<::snapchat::djinni::benchmark::ObjectNative>>("benchmark_ObjectNative")
        .function("nativeDestroy", &NativeObjectNative::nativeDestroy)
        .function("baseline", NativeObjectNative::baseline)
        ;
}

}  // namespace djinni_generated
