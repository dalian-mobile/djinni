// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from interface_and_abstract_class.djinni

#pragma once

#include "djinni_support.hpp"
#include "test_java_abstract_class_only.hpp"

namespace djinni_generated {

class NativeTestJavaAbstractClassOnly final : ::djinni::JniInterface<::testsuite::TestJavaAbstractClassOnly, NativeTestJavaAbstractClassOnly> {
public:
    using CppType = std::shared_ptr<::testsuite::TestJavaAbstractClassOnly>;
    using CppOptType = std::shared_ptr<::testsuite::TestJavaAbstractClassOnly>;
    using JniType = jobject;

    using Boxed = NativeTestJavaAbstractClassOnly;

    ~NativeTestJavaAbstractClassOnly();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTestJavaAbstractClassOnly>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTestJavaAbstractClassOnly>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTestJavaAbstractClassOnly();
    friend ::djinni::JniClass<NativeTestJavaAbstractClassOnly>;
    friend ::djinni::JniInterface<::testsuite::TestJavaAbstractClassOnly, NativeTestJavaAbstractClassOnly>;

};

}  // namespace djinni_generated
