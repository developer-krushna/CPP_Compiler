#include "native_jvm.hpp"
#include "native_jvm_output.hpp"

#include "output/com_mt_dex2jar_MainActivity.hpp"


namespace native_jvm {

    typedef void (* reg_method)(JNIEnv *);

    reg_method reg_methods[1];

    void register_for_class(JNIEnv *env, jclass, jint id) {
        reg_methods[id](env);
    }

    void prepare_lib(JNIEnv *env) {
        utils::init_utils(env);

        reg_methods[0] = &(native_jvm::classes::__ngen_com_mt_dex2jar_MainActivity::__ngen_register_methods);


        char method_name[] = "registerNativesForClass";
        char method_desc[] = "(I)V";
        JNINativeMethod loader_methods[] = {
            { (char *) method_name, (char *) method_desc, (void *)&register_for_class }
        };
        env->RegisterNatives(env->FindClass("arm/Loader"), loader_methods, 1);
    }
}

extern "C" JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env = nullptr;
    vm->GetEnv((void **)&env, JNI_VERSION_1_6);
    native_jvm::prepare_lib(env);
    return JNI_VERSION_1_6;
}
