#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "com_mt_dex2jar_MainActivity.hpp"

// com/mt/dex2jar/MainActivity
namespace native_jvm::classes::__ngen_com_mt_dex2jar_MainActivity {

   signed char *string_pool;
   
    jstring cstrings[5];
    std::mutex cclasses_mtx[18];
    jclass cclasses[18];
    jmethodID cmethods[31];
    jfieldID cfields[5];

    // access$0(Lcom/mt/dex2jar/MainActivity;)Landroid/widget/EditText;
    jobject JNICALL __ngen_native_access3601(JNIEnv *env, jclass clazz, jobject arg0) {
        utils::jvm_stack<1> cstack;
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, arg0); refs.insert(clocals.getref(0));
    
        L22649182: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 40:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[0]) { cfields[0] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 94LL)), ((char *)(string_pool + 99LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 156LL)), 40); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[0]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        return (jobject) cstack.popref();
        return (jobject) 0;
    }
    
    // initialize(Landroid/os/Bundle;)V
    void JNICALL __ngen_native_initialize2(JNIEnv *env, jobject obj, jobject arg0) {
        utils::jvm_stack<4> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.setref(1, arg0); refs.insert(clocals.getref(1));
    
        L211099967: if (env->ExceptionCheck()) { return (void) 0; }
        // L 70:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.push(2130903041);
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 210LL)), ((char *)(string_pool + 223LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 70); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[0]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 271LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[1]))) { utils::throw_re(env, ((char *)(string_pool + 295LL)), (std::string(((char *)(string_pool + 324LL))) + std::string(((char *)(string_pool + 340LL)))).c_str(), 70); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 94LL)), ((char *)(string_pool + 99LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 364LL)), 70); else env->SetObjectField(cstack.fetchref(1), (cfields[0]), (jobject) cstack.fetchref(0)); cstack.popcnt(2); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L22710796: if (env->ExceptionCheck()) { return (void) 0; }
        // L 71:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.push(2130903042);
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 210LL)), ((char *)(string_pool + 223LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 71); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[0]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 384LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[2]))) { utils::throw_re(env, ((char *)(string_pool + 295LL)), (std::string(((char *)(string_pool + 324LL))) + std::string(((char *)(string_pool + 406LL)))).c_str(), 71); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 428LL)), ((char *)(string_pool + 436LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 364LL)), 71); else env->SetObjectField(cstack.fetchref(1), (cfields[1]), (jobject) cstack.fetchref(0)); cstack.popcnt(2); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L182755157: if (env->ExceptionCheck()) { return (void) 0; }
        // L 73:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 428LL)), ((char *)(string_pool + 436LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 156LL)), 73); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[1]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 460LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[3]))) { cstack.pushref(obj); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(2); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 460LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 490LL)), ((char *)(string_pool + 497LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 530LL)), 73); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[3]), (cmethods[1]), (jobject) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 384LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[2]) { cmethods[2] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 553LL)), ((char *)(string_pool + 572LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 611LL)), 73); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[2]), (jobject) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L211938666: if (env->ExceptionCheck()) { return (void) 0; }
        // L 84:
        return;
        return (void) 0;
    }
    
    // initializeLogic()V
    void JNICALL __ngen_native_initializeLogic3(JNIEnv *env, jobject obj) {
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L21271131: if (env->ExceptionCheck()) { return (void) 0; }
        // L 87:
        return;
        return (void) 0;
    }
    
    // _extra()V
    void JNICALL __ngen_native__extra4(JNIEnv *env, jobject obj) {
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L204225272: if (env->ExceptionCheck()) { return (void) 0; }
        // L 90:
        return;
        return (void) 0;
    }
    
    // getCheckedItemPositionsToArray(Landroid/widget/ListView;)Ljava/util/ArrayList;
    jobject JNICALL __ngen_native_getCheckedItemPositionsToArray5(JNIEnv *env, jobject obj, jobject arg0) {
        utils::jvm_stack<3> cstack;
        utils::local_vars<4> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.setref(1, arg0); refs.insert(clocals.getref(1));
    
        L241792566: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 129:
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 741LL)))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[4]))) { cstack.pushref(obj); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.popcnt(1); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 741LL)))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[3]) { cmethods[3] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 490LL)), ((char *)(string_pool + 650LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 530LL)), 129); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[4]), (cmethods[3])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // Error V14
        L145750327: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 130:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 761LL)))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 785LL)), ((char *)(string_pool + 809LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 130); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[4]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // Error V14
        L140906148: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 131:
        cstack.push(0);
        // Error V10
        L46294029: if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.push(clocals.get(2));
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 845LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[5]) { cmethods[5] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 877LL)), ((char *)(string_pool + 882LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 886LL)), 131); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[5]))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (cstack.pop() > cstack.pop()) goto L105824194;
        L61907: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 135:
        cstack.pushref(clocals.getref(3)); refs.insert(cstack.fetchref(0));
        return (jobject) cstack.popref();
        L105824194: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 132:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.push(clocals.get(2));
        cstack.popcnt(2); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 845LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 908LL)), ((char *)(string_pool + 916LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 921LL)), 132); else cstack.push(env->CallBooleanMethod(cstack.fetchref(-1), (cmethods[6]), (jint) cstack.fetch(-2))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (cstack.pop() == 0) goto L105345296;
        L54408201: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 133:
        cstack.pushref(clocals.getref(3)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.push(clocals.get(2));
        cstack.popcnt(2); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 845LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 947LL)), ((char *)(string_pool + 953LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 886LL)), 133); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[7]), (jint) cstack.fetch(-2))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.push2(utils::cdl((jdouble) cstack.pop()));
        cstack.popcnt(2); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 958LL)))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetStaticMethodID((cclasses[7]), ((char *)(string_pool + 975LL)), ((char *)(string_pool + 983LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack.pushref(env->CallStaticObjectMethod((cclasses[7]), (cmethods[8]), (jdouble) utils::cld(cstack.fetch2raw(-1)))); refs.insert(cstack.fetchref(0)); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.popcnt(2); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 741LL)))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 1005LL)), ((char *)(string_pool + 1009LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 921LL)), 133); else cstack.push(env->CallBooleanMethod(cstack.fetchref(-1), (cmethods[9]), (jobject) cstack.fetchref(-2))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.pop();
        L105345296: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 131:
        clocals.set(2, clocals.get(2) + 1);
        goto L46294029;
        return (jobject) 0;
    }
    
    // getDip(I)F
    jfloat JNICALL __ngen_native_getDip6(JNIEnv *env, jobject obj, jint arg0) {
        utils::jvm_stack<3> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.set(1, arg0);
    
        L223155726: if (env->ExceptionCheck()) { return (jfloat) 0; }
        // L 140:
        // Error T_BOOLEAN
        cstack.push(clocals.get(1));
        cstack.push(utils::cfi((jfloat) cstack.pop()));
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jfloat) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1043LL)), ((char *)(string_pool + 1056LL))); if (env->ExceptionCheck()) { return (jfloat) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 140); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jfloat) 0; }
        cstack.popcnt(1); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1090LL)))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jfloat) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 1120LL)), ((char *)(string_pool + 1138LL))); if (env->ExceptionCheck()) { return (jfloat) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 140); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[11]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jfloat) 0; }
        cstack.popcnt(3); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1170LL)))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jfloat) 0; } } if (!cmethods[12]) { cmethods[12] = env->GetStaticMethodID((cclasses[9]), ((char *)(string_pool + 1194LL)), ((char *)(string_pool + 1209LL))); if (env->ExceptionCheck()) { return (jfloat) 0; }  } cstack.push(utils::cfi(env->CallStaticFloatMethod((cclasses[9]), (cmethods[12]), (jint) cstack.fetch(-1), (jfloat) utils::cif(cstack.fetch(-2)), (jobject) cstack.fetchref(-3)))); 
        if (env->ExceptionCheck()) { return (jfloat) 0; }
        return (jfloat) utils::cif(cstack.pop());
        return (jfloat) 0;
    }
    
    // getDisplayHeightPixels()I
    jint JNICALL __ngen_native_getDisplayHeightPixels7(JNIEnv *env, jobject obj) {
        utils::jvm_stack<1> cstack;
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L56547375: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 150:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1043LL)), ((char *)(string_pool + 1056LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 150); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jint) 0; }
        cstack.popcnt(1); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1090LL)))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 1120LL)), ((char *)(string_pool + 1138LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 150); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[11]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jint) 0; }
        if (!cclasses[10]  || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1267LL)))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[10]), ((char *)(string_pool + 1295LL)), ((char *)(string_pool + 1308LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 1310LL)), 150); else cstack.push(env->GetIntField(cstack.popref(), (cfields[2]))); 
        if (env->ExceptionCheck()) { return (jint) 0; }
        return (jint) cstack.pop();
        return (jint) 0;
    }
    
    // getDisplayWidthPixels()I
    jint JNICALL __ngen_native_getDisplayWidthPixels8(JNIEnv *env, jobject obj) {
        utils::jvm_stack<1> cstack;
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L144346684: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 145:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1043LL)), ((char *)(string_pool + 1056LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 145); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jint) 0; }
        cstack.popcnt(1); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1090LL)))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 1120LL)), ((char *)(string_pool + 1138LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 145); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[11]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jint) 0; }
        if (!cclasses[10]  || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1267LL)))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cfields[3]) { cfields[3] = env->GetFieldID((cclasses[10]), ((char *)(string_pool + 1349LL)), ((char *)(string_pool + 1308LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 1310LL)), 145); else cstack.push(env->GetIntField(cstack.popref(), (cfields[3]))); 
        if (env->ExceptionCheck()) { return (jint) 0; }
        return (jint) cstack.pop();
        return (jint) 0;
    }
    
    // getLocationX(Landroid/view/View;)I
    jint JNICALL __ngen_native_getLocationX9(JNIEnv *env, jobject obj, jobject arg0) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<3> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.setref(1, arg0); refs.insert(clocals.getref(1));
    
        L260900805: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 109:
        // Error T_CHAR
        if (cstack.fetch(0) < 0) utils::throw_re(env, ((char *)(string_pool + 1397LL)), ((char *)(string_pool + 1434LL)), 109); else { cstack.pushref(env->NewIntArray(cstack.pop())); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jint) 0; }
        // Error V14
        L248022298: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 110:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(2)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(2); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1462LL)))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cmethods[13]) { cmethods[13] = env->GetMethodID((cclasses[11]), ((char *)(string_pool + 1480LL)), ((char *)(string_pool + 1500LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 611LL)), 110); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[13]), (jarray) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (jint) 0; }
        L706635: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 111:
        cstack.pushref(clocals.getref(2)); refs.insert(cstack.fetchref(0));
        cstack.push(0);
        // Error V1_2
        return (jint) cstack.pop();
        return (jint) 0;
    }
    
    // getLocationY(Landroid/view/View;)I
    jint JNICALL __ngen_native_getLocationY10(JNIEnv *env, jobject obj, jobject arg0) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<3> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.setref(1, arg0); refs.insert(clocals.getref(1));
    
        L44061224: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 116:
        // Error T_CHAR
        if (cstack.fetch(0) < 0) utils::throw_re(env, ((char *)(string_pool + 1397LL)), ((char *)(string_pool + 1434LL)), 116); else { cstack.pushref(env->NewIntArray(cstack.pop())); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jint) 0; }
        // Error V14
        L171662145: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 117:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(2)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(2); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1462LL)))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cmethods[13]) { cmethods[13] = env->GetMethodID((cclasses[11]), ((char *)(string_pool + 1480LL)), ((char *)(string_pool + 1500LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 611LL)), 117); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[13]), (jarray) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (jint) 0; }
        L106551526: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 118:
        cstack.pushref(clocals.getref(2)); refs.insert(cstack.fetchref(0));
        // Error T_BOOLEAN
        // Error V1_2
        return (jint) cstack.pop();
        return (jint) 0;
    }
    
    // getRandom(II)I
    jint JNICALL __ngen_native_getRandom11(JNIEnv *env, jobject obj, jint arg0, jint arg1) {
        utils::jvm_stack<3> cstack;
        utils::local_vars<4> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.set(1, arg0);
        clocals.set(2, arg1);
    
        L205233703: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 123:
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1535LL)))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (jobject obj = env->AllocObject((cclasses[12]))) { cstack.pushref(obj); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jint) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.popcnt(1); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1535LL)))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cmethods[14]) { cmethods[14] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 490LL)), ((char *)(string_pool + 650LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 530LL)), 123); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[12]), (cmethods[14])); 
        if (env->ExceptionCheck()) { return (jint) 0; }
        // Error V14
        L146565332: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 124:
        cstack.pushref(clocals.getref(3)); refs.insert(cstack.fetchref(0));
        cstack.push(clocals.get(2));
        cstack.push(clocals.get(1));
        cstack.set(1, cstack.fetch(1) - cstack.fetch(0)); cstack.popcnt(1);
        // Error T_BOOLEAN
        cstack.set(1, cstack.fetch(1) + cstack.fetch(0)); cstack.popcnt(1);
        cstack.popcnt(2); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1535LL)))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 1552LL)), ((char *)(string_pool + 953LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 886LL)), 124); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[15]), (jint) cstack.fetch(-2))); 
        if (env->ExceptionCheck()) { return (jint) 0; }
        cstack.push(clocals.get(1));
        cstack.set(1, cstack.fetch(1) + cstack.fetch(0)); cstack.popcnt(1);
        return (jint) cstack.pop();
        return (jint) 0;
    }
    
    // onCreate(Landroid/os/Bundle;)V
    void JNICALL __ngen_native_onCreate12(JNIEnv *env, jobject obj, jobject arg0) {
        utils::jvm_stack<5> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.setref(1, arg0); refs.insert(clocals.getref(1));
    
        L136407677: if (env->ExceptionCheck()) { return (void) 0; }
        // L 45:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(2); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1569LL)))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetMethodID((cclasses[13]), ((char *)(string_pool + 1560LL)), ((char *)(string_pool + 187LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 530LL)), 45); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[13]), (cmethods[16]), (jobject) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L240819570: if (env->ExceptionCheck()) { return (void) 0; }
        // L 46:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.push(2130968576);
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[17]) { cmethods[17] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1590LL)), ((char *)(string_pool + 1605LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 611LL)), 46); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[17]), (jint) cstack.fetch(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L12187075: if (env->ExceptionCheck()) { return (void) 0; }
        // L 47:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 176LL)), ((char *)(string_pool + 187LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 530LL)), 47); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[18]), (jobject) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L266419776: if (env->ExceptionCheck()) { return (void) 0; }
        // L 49:
        if (!cclasses[14]  || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1610LL)))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetStaticFieldID((cclasses[14]), ((char *)(string_pool + 1635LL)), ((char *)(string_pool + 1308LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.push(env->GetStaticIntField((cclasses[14]), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(23);
        if (cstack.pop() > cstack.pop()) goto L157233529;
        L187768510: if (env->ExceptionCheck()) { return (void) 0; }
        // L 50:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.pushref((cstrings[0]));
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1643LL)), ((char *)(string_pool + 1663LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 886LL)), 50); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[19]), (jobject) cstack.fetchref(-2))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(-1);
        if (cstack.pop() == cstack.pop()) goto L3943199;
        L129760876: if (env->ExceptionCheck()) { return (void) 0; }
        // L 51:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.pushref((cstrings[1]));
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1643LL)), ((char *)(string_pool + 1663LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 886LL)), 51); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[19]), (jobject) cstack.fetchref(-2))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(-1);
        if (cstack.pop() != cstack.pop()) goto L102263861;
        L3943199: if (env->ExceptionCheck()) { return (void) 0; }
        // L 52:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        // Error T_CHAR
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1685LL)))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetch(0) < 0) utils::throw_re(env, ((char *)(string_pool + 1397LL)), ((char *)(string_pool + 1702LL)), 52); else { cstack.pushref(env->NewObjectArray(cstack.pop(), (cclasses[15]), nullptr)); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.push(0);
        cstack.pushref((cstrings[0]));
        if (cstack.fetchref(2) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 1727LL)), 52); else { env->SetObjectArrayElement((jobjectArray) cstack.fetchref(2), cstack.fetch(1), cstack.fetchref(0)); cstack.popcnt(3); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        // Error T_BOOLEAN
        cstack.pushref((cstrings[1]));
        if (cstack.fetchref(2) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 1727LL)), 52); else { env->SetObjectArrayElement((jobjectArray) cstack.fetchref(2), cstack.fetch(1), cstack.fetchref(0)); cstack.popcnt(3); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1000);
        cstack.popcnt(3); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[20]) { cmethods[20] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1739LL)), ((char *)(string_pool + 1758LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 611LL)), 52); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[20]), (jarray) cstack.fetchref(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L257714378: if (env->ExceptionCheck()) { return (void) 0; }
        // L 59:
        return;
        L102263861: if (env->ExceptionCheck()) { return (void) 0; }
        // L 54:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[21]) { cmethods[21] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 634LL)), ((char *)(string_pool + 650LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 530LL)), 54); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[21])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        goto L257714378;
        L157233529: if (env->ExceptionCheck()) { return (void) 0; }
        // L 57:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[21]) { cmethods[21] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 634LL)), ((char *)(string_pool + 650LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 530LL)), 57); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[21])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        goto L257714378;
        return (void) 0;
    }
    
    // onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    void JNICALL __ngen_native_onRequestPermissionsResult13(JNIEnv *env, jobject obj, jint arg0, jarray arg1, jarray arg2) {
        utils::jvm_stack<4> cstack;
        utils::local_vars<4> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.set(1, arg0);
        clocals.setref(2, arg1); refs.insert(clocals.getref(2));
        clocals.setref(3, arg2); refs.insert(clocals.getref(3));
    
        L142760507: if (env->ExceptionCheck()) { return (void) 0; }
        // L 63:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.push(clocals.get(1));
        cstack.pushref(clocals.getref(2)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(3)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(4); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1569LL)))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[22]) { cmethods[22] = env->GetMethodID((cclasses[13]), ((char *)(string_pool + 1782LL)), ((char *)(string_pool + 1809LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 530LL)), 63); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[13]), (cmethods[22]), (jint) cstack.fetch(-2), (jarray) cstack.fetchref(-3), (jarray) cstack.fetchref(-4)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L195073368: if (env->ExceptionCheck()) { return (void) 0; }
        // L 64:
        cstack.push(clocals.get(1));
        cstack.push(1000);
        if (cstack.pop() != cstack.pop()) goto L183539377;
        L71321494: if (env->ExceptionCheck()) { return (void) 0; }
        // L 65:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[21]) { cmethods[21] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 634LL)), ((char *)(string_pool + 650LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 530LL)), 65); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[21])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L183539377: if (env->ExceptionCheck()) { return (void) 0; }
        // L 67:
        return;
        return (void) 0;
    }
    
    // onTaskCompleted(ZLjava/lang/String;)V
    void JNICALL __ngen_native_onTaskCompleted14(JNIEnv *env, jobject obj, jboolean arg0, jobject arg1) {
        utils::jvm_stack<3> cstack;
        utils::local_vars<5> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.set(1, arg0);
        clocals.setref(2, arg1); refs.insert(clocals.getref(2));
    
        L154296087: if (env->ExceptionCheck()) { return (void) 0; }
        // L 93:
        if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { cclasses_mtx[16].lock(); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1874LL)))) { cclasses[16] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[16].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[16]))) { cstack.pushref(obj); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(2); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { cclasses_mtx[16].lock(); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1874LL)))) { cclasses[16] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[16].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[23]) { cmethods[23] = env->GetMethodID((cclasses[16]), ((char *)(string_pool + 490LL)), ((char *)(string_pool + 1906LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 530LL)), 93); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[16]), (cmethods[23]), (jobject) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // Error V14
        L104181508: if (env->ExceptionCheck()) { return (void) 0; }
        // L 94:
        cstack.push(clocals.get(1));
        if (cstack.pop() == 0) goto L21425389;
        cstack.pushref((cstrings[2]));
        // Error V14
        L61949730: if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(4)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(3)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(2); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { cclasses_mtx[16].lock(); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1874LL)))) { cclasses[16] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[16].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[16]), ((char *)(string_pool + 1935LL)), ((char *)(string_pool + 1944LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 94); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[24]), (jobject) cstack.fetchref(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // Error V14
        L208917939: if (env->ExceptionCheck()) { return (void) 0; }
        // L 95:
        cstack.pushref(clocals.getref(3)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(2)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(2); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { cclasses_mtx[16].lock(); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1874LL)))) { cclasses[16] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[16].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[25]) { cmethods[25] = env->GetMethodID((cclasses[16]), ((char *)(string_pool + 2004LL)), ((char *)(string_pool + 1944LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 95); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[25]), (jobject) cstack.fetchref(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // Error V14
        L65058672: if (env->ExceptionCheck()) { return (void) 0; }
        // L 96:
        cstack.pushref(clocals.getref(2)); refs.insert(cstack.fetchref(0));
        cstack.pushref((cstrings[3]));
        // Error INTEGER
        cstack.popcnt(3); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { cclasses_mtx[16].lock(); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1874LL)))) { cclasses[16] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[16].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[26]) { cmethods[26] = env->GetMethodID((cclasses[16]), ((char *)(string_pool + 2015LL)), ((char *)(string_pool + 2033LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 96); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[26]), (jobject) cstack.fetchref(-2), (jobject) cstack.fetchref(-3))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // Error V14
        L254962409: if (env->ExceptionCheck()) { return (void) 0; }
        // L 97:
        cstack.pushref(clocals.getref(2)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { cclasses_mtx[16].lock(); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1874LL)))) { cclasses[16] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[16].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[27]) { cmethods[27] = env->GetMethodID((cclasses[16]), ((char *)(string_pool + 2142LL)), ((char *)(string_pool + 2147LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 97); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[27]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pop();
        L239121262: if (env->ExceptionCheck()) { return (void) 0; }
        // L 99:
        return;
        L21425389: if (env->ExceptionCheck()) { return (void) 0; }
        // L 94:
        cstack.pushref((cstrings[4]));
        // Error V14
        goto L61949730;
        return (void) 0;
    }
    
    // showMessage(Ljava/lang/String;)V
    void JNICALL __ngen_native_showMessage15(JNIEnv *env, jobject obj, jobject arg0) {
        utils::jvm_stack<3> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.setref(1, arg0); refs.insert(clocals.getref(1));
    
        L223091215: if (env->ExceptionCheck()) { return (void) 0; }
        // L 104:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[28]) { cmethods[28] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 2209LL)), ((char *)(string_pool + 2231LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 246LL)), 104); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[28]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.push(0);
        cstack.popcnt(3); if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { cclasses_mtx[17].lock(); if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 2259LL)))) { cclasses[17] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[17].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[29]) { cmethods[29] = env->GetStaticMethodID((cclasses[17]), ((char *)(string_pool + 2280LL)), ((char *)(string_pool + 2289LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.pushref(env->CallStaticObjectMethod((cclasses[17]), (cmethods[29]), (jobject) cstack.fetchref(-1), (jobject) cstack.fetchref(-2), (jint) cstack.fetch(-3))); refs.insert(cstack.fetchref(0)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(1); if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { cclasses_mtx[17].lock(); if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 2259LL)))) { cclasses[17] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[17].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[30]) { cmethods[30] = env->GetMethodID((cclasses[17]), ((char *)(string_pool + 2142LL)), ((char *)(string_pool + 650LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 125LL)), ((char *)(string_pool + 611LL)), 104); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[30])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L267508380: if (env->ExceptionCheck()) { return (void) 0; }
        // L 105:
        return;
        return (void) 0;
    }
    
    // <clinit>()V
    void JNICALL __ngen_native_special_clinit16(JNIEnv *env, jclass clazz) {
        std::unordered_set<jobject> refs;
    
    
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env) {
        string_pool = string_pool::get_pool();

        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2388LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[4] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2394LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[0] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2435LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[3] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2438LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[1] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2480LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[2] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }

        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 0LL)), (char *)((char *)(string_pool + 9LL)), (void *)&__ngen_native_access3601 },
            { (char *)((char *)(string_pool + 176LL)), (char *)((char *)(string_pool + 187LL)), (void *)&__ngen_native_initialize2 },
            { (char *)((char *)(string_pool + 634LL)), (char *)((char *)(string_pool + 650LL)), (void *)&__ngen_native_initializeLogic3 },
            { (char *)((char *)(string_pool + 654LL)), (char *)((char *)(string_pool + 650LL)), (void *)&__ngen_native__extra4 },
            { (char *)((char *)(string_pool + 661LL)), (char *)((char *)(string_pool + 692LL)), (void *)&__ngen_native_getCheckedItemPositionsToArray5 },
            { (char *)((char *)(string_pool + 1031LL)), (char *)((char *)(string_pool + 1038LL)), (void *)&__ngen_native_getDip6 },
            { (char *)((char *)(string_pool + 1244LL)), (char *)((char *)(string_pool + 882LL)), (void *)&__ngen_native_getDisplayHeightPixels7 },
            { (char *)((char *)(string_pool + 1327LL)), (char *)((char *)(string_pool + 882LL)), (void *)&__ngen_native_getDisplayWidthPixels8 },
            { (char *)((char *)(string_pool + 1361LL)), (char *)((char *)(string_pool + 1374LL)), (void *)&__ngen_native_getLocationX9 },
            { (char *)((char *)(string_pool + 1506LL)), (char *)((char *)(string_pool + 1374LL)), (void *)&__ngen_native_getLocationY10 },
            { (char *)((char *)(string_pool + 1519LL)), (char *)((char *)(string_pool + 1529LL)), (void *)&__ngen_native_getRandom11 },
            { (char *)((char *)(string_pool + 1560LL)), (char *)((char *)(string_pool + 187LL)), (void *)&__ngen_native_onCreate12 },
            { (char *)((char *)(string_pool + 1782LL)), (char *)((char *)(string_pool + 1809LL)), (void *)&__ngen_native_onRequestPermissionsResult13 },
            { (char *)((char *)(string_pool + 1835LL)), (char *)((char *)(string_pool + 1851LL)), (void *)&__ngen_native_onTaskCompleted14 },
            { (char *)((char *)(string_pool + 2175LL)), (char *)((char *)(string_pool + 2187LL)), (void *)&__ngen_native_showMessage15 },
            { (char *)((char *)(string_pool + 2364LL)), (char *)((char *)(string_pool + 650LL)), (void *)&__ngen_native_special_clinit16 },
        };

        jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 66LL)));
        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 66LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}