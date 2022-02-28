// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from example.djinni

#include "NativeSortItems.hpp"  // my header
#include "NativeItemList.hpp"
#include "NativeSortOrder.hpp"
#include "NativeTextboxListener.hpp"

namespace djinni_generated {

em::val NativeSortItems::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "sort",
    });
    return methods;
}

void NativeSortItems::sort(const CppType& self, int32_t w_order,const em::val& w_items) {
    try {
        self->sort(::djinni_generated::NativeSortOrder::toCpp(w_order),
             ::djinni_generated::NativeItemList::toCpp(w_items));
    }
    catch(const std::exception& e) {
        djinni::djinni_throw_native_exception(e.what());
        throw;
    }
}
em::val NativeSortItems::create_with_listener(const em::val& w_listener) {
    try {
        auto r = ::textsort::SortItems::create_with_listener(::djinni_generated::NativeTextboxListener::toCpp(w_listener));
        return ::djinni_generated::NativeSortItems::fromCpp(r);
    }
    catch(const std::exception& e) {
        djinni::djinni_throw_native_exception(e.what());
        throw;
    }
}
em::val NativeSortItems::run_sort(const em::val& w_items) {
    try {
        auto r = ::textsort::SortItems::run_sort(::djinni_generated::NativeItemList::toCpp(w_items));
        return ::djinni_generated::NativeItemList::fromCpp(r);
    }
    catch(const std::exception& e) {
        djinni::djinni_throw_native_exception(e.what());
        throw;
    }
}

EMSCRIPTEN_BINDINGS(textsort_sort_items) {
    em::class_<::textsort::SortItems>("SortItems")
        .smart_ptr<std::shared_ptr<::textsort::SortItems>>("SortItems")
        .function("nativeDestroy", &NativeSortItems::nativeDestroy)
        .function("sort", NativeSortItems::sort)
        .class_function("createWithListener", NativeSortItems::create_with_listener)
        .class_function("runSort", NativeSortItems::run_sort)
        ;
}

}  // namespace djinni_generated
