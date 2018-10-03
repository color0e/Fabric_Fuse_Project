// This file was generated based on HelloUno.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HelloUno.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[9];
static uType* TYPES[4];

namespace g{

// public sealed class HelloUno :22
// {
static void HelloUno_build(uType* type)
{
    ::STRINGS[0] = uString::Const("HelloUno");
    ::STRINGS[1] = uString::Const("Login");
    ::STRINGS[2] = uString::Const("onMessageFromLogin");
    ::STRINGS[3] = uString::Const("Register");
    ::STRINGS[4] = uString::Const("onMessageFromRegister");
    ::STRINGS[5] = uString::Const("Invokechaincode");
    ::STRINGS[6] = uString::Const("onMessageFromInvokechaincode");
    ::STRINGS[7] = uString::Const("Querychaincode");
    ::STRINGS[8] = uString::Const("onMessageFromQuerychaincode");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&HelloUno::_instance_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&HelloUno::_messageFromLoginEvt_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&HelloUno::_messageFromRegisterEvt_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&HelloUno::_messageFromInvokechaincodeEvt_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&HelloUno::_messageFromQuerychaincodeEvt_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* HelloUno_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HelloUno);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("HelloUno", options);
    type->fp_build_ = HelloUno_build;
    type->fp_ctor_ = (void*)HelloUno__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public HelloUno() :32
void HelloUno__ctor_2_fn(HelloUno* __this)
{
    __this->ctor_2();
}

// private object Invokechaincode(Fuse.Scripting.Context c, object[] args) :170
void HelloUno__Invokechaincode_fn(HelloUno* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Invokechaincode(c, args);
}

// public static extern void InvokechaincodeImpl(string[] args, int len) :186
void HelloUno__InvokechaincodeImpl_fn(uArray* args, int32_t* len)
{
    HelloUno::InvokechaincodeImpl(args, *len);
}

// private object Login(Fuse.Scripting.Context c, object[] args) :66
void HelloUno__Login_fn(HelloUno* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Login(c, args);
}

// public static extern void LoginImpl(string[] args) :81
void HelloUno__LoginImpl_fn(uArray* args)
{
    HelloUno::LoginImpl(args);
}

// public HelloUno New() :32
void HelloUno__New2_fn(HelloUno** __retval)
{
    *__retval = HelloUno::New2();
}

// private object Querychaincode(Fuse.Scripting.Context c, object[] args) :227
void HelloUno__Querychaincode_fn(HelloUno* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Querychaincode(c, args);
}

// public static extern void QuerychaincodeImpl(string[] args, int len) :243
void HelloUno__QuerychaincodeImpl_fn(uArray* args, int32_t* len)
{
    HelloUno::QuerychaincodeImpl(args, *len);
}

// private object Register(Fuse.Scripting.Context c, object[] args) :116
void HelloUno__Register_fn(HelloUno* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Register(c, args);
}

// public static extern void RegisterImpl(string[] args) :131
void HelloUno__RegisterImpl_fn(uArray* args)
{
    HelloUno::RegisterImpl(args);
}

// private static void UnoInvokechaincode(string message, string fcn) :180
void HelloUno__UnoInvokechaincode_fn(uString* message, uString* fcn)
{
    HelloUno::UnoInvokechaincode(message, fcn);
}

// private static void UnoLogin(string message) :75
void HelloUno__UnoLogin_fn(uString* message)
{
    HelloUno::UnoLogin(message);
}

// private static void UnoQuerychaincode(string message, string fcn) :237
void HelloUno__UnoQuerychaincode_fn(uString* message, uString* fcn)
{
    HelloUno::UnoQuerychaincode(message, fcn);
}

// private static void UnoRegister(string message) :125
void HelloUno__UnoRegister_fn(uString* message)
{
    HelloUno::UnoRegister(message);
}

uSStrong<HelloUno*> HelloUno::_instance_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> HelloUno::_messageFromLoginEvt_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> HelloUno::_messageFromRegisterEvt_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> HelloUno::_messageFromInvokechaincodeEvt_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> HelloUno::_messageFromQuerychaincodeEvt_;

// public HelloUno() [instance] :32
void HelloUno::ctor_2()
{
    ctor_1();

    if (HelloUno::_instance_ != NULL)
        return;

    HelloUno::_instance_ = this;
    ::g::Uno::UX::Resource::SetGlobalKey(HelloUno::_instance_, ::STRINGS[0/*"HelloUno"*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"Login"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)HelloUno__Login_fn, this)));
    HelloUno::_messageFromLoginEvt_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[2/*"onMessageFr...*/], true);
    AddMember(HelloUno::_messageFromLoginEvt_);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"Register"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)HelloUno__Register_fn, this)));
    HelloUno::_messageFromRegisterEvt_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[4/*"onMessageFr...*/], true);
    AddMember(HelloUno::_messageFromRegisterEvt_);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[5/*"Invokechain...*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)HelloUno__Invokechaincode_fn, this)));
    HelloUno::_messageFromInvokechaincodeEvt_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[6/*"onMessageFr...*/], true);
    AddMember(HelloUno::_messageFromInvokechaincodeEvt_);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[7/*"Querychainc...*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)HelloUno__Querychaincode_fn, this)));
    HelloUno::_messageFromQuerychaincodeEvt_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[8/*"onMessageFr...*/], true);
    AddMember(HelloUno::_messageFromQuerychaincodeEvt_);
}

// private object Invokechaincode(Fuse.Scripting.Context c, object[] args) [instance] :170
uObject* HelloUno::Invokechaincode(::g::Fuse::Scripting::Context* c, uArray* args)
{
    int32_t len = uPtr(args)->Length();
    uArray* str = uArray::New(::TYPES[1/*string[]*/], len);

    for (int32_t i = 0; i < len; i++)
        uPtr(str)->Strong<uString*>(i) = uCast<uString*>(uPtr(args)->Strong<uObject*>(i), ::TYPES[2/*string*/]);

    HelloUno::InvokechaincodeImpl(str, len);
    return NULL;
}

// private object Login(Fuse.Scripting.Context c, object[] args) [instance] :66
uObject* HelloUno::Login(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uArray* str = uArray::New(::TYPES[1/*string[]*/], 2);

    for (int32_t i = 0; i < 2; i++)
        uPtr(str)->Strong<uString*>(i) = uCast<uString*>(uPtr(args)->Strong<uObject*>(i), ::TYPES[2/*string*/]);

    HelloUno::LoginImpl(str);
    return NULL;
}

// private object Querychaincode(Fuse.Scripting.Context c, object[] args) [instance] :227
uObject* HelloUno::Querychaincode(::g::Fuse::Scripting::Context* c, uArray* args)
{
    int32_t len = uPtr(args)->Length();
    uArray* str = uArray::New(::TYPES[1/*string[]*/], len);

    for (int32_t i = 0; i < len; i++)
        uPtr(str)->Strong<uString*>(i) = uCast<uString*>(uPtr(args)->Strong<uObject*>(i), ::TYPES[2/*string*/]);

    HelloUno::QuerychaincodeImpl(str, len);
    return NULL;
}

// private object Register(Fuse.Scripting.Context c, object[] args) [instance] :116
uObject* HelloUno::Register(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uArray* str = uArray::New(::TYPES[1/*string[]*/], 1);

    for (int32_t i = 0; i < 1; i++)
        uPtr(str)->Strong<uString*>(i) = uCast<uString*>(uPtr(args)->Strong<uObject*>(i), ::TYPES[2/*string*/]);

    HelloUno::RegisterImpl(str);
    return NULL;
}

// public static extern void InvokechaincodeImpl(string[] args, int len) [static] :186
void HelloUno::InvokechaincodeImpl(uArray* args, int32_t len)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InvokechaincodeImpl381", "(Lcom/uno/StringArray;I)V");
        uArray* _uargs=args;
        jobject _args = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box10(_uargs);
        int32_t _ulen=len;
        jint _len = (jint)_ulen;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_args,_len);
        
        if (_args!=NULL) { U_JNIVAR->DeleteLocalRef(_args); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void LoginImpl(string[] args) [static] :81
void HelloUno::LoginImpl(uArray* args)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoginImpl383", "(Lcom/uno/StringArray;)V");
        uArray* _uargs=args;
        jobject _args = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box10(_uargs);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_args);
        
        if (_args!=NULL) { U_JNIVAR->DeleteLocalRef(_args); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public HelloUno New() [static] :32
HelloUno* HelloUno::New2()
{
    HelloUno* obj1 = (HelloUno*)uNew(HelloUno_typeof());
    obj1->ctor_2();
    return obj1;
}

// public static extern void QuerychaincodeImpl(string[] args, int len) [static] :243
void HelloUno::QuerychaincodeImpl(uArray* args, int32_t len)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "QuerychaincodeImpl385", "(Lcom/uno/StringArray;I)V");
        uArray* _uargs=args;
        jobject _args = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box10(_uargs);
        int32_t _ulen=len;
        jint _len = (jint)_ulen;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_args,_len);
        
        if (_args!=NULL) { U_JNIVAR->DeleteLocalRef(_args); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void RegisterImpl(string[] args) [static] :131
void HelloUno::RegisterImpl(uArray* args)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RegisterImpl387", "(Lcom/uno/StringArray;)V");
        uArray* _uargs=args;
        jobject _args = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box10(_uargs);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_args);
        
        if (_args!=NULL) { U_JNIVAR->DeleteLocalRef(_args); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void UnoInvokechaincode(string message, string fcn) [static] :180
void HelloUno::UnoInvokechaincode(uString* message, uString* fcn)
{
    uPtr(HelloUno::_messageFromInvokechaincodeEvt_)->RaiseAsync1(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, message, fcn));
}

// private static void UnoLogin(string message) [static] :75
void HelloUno::UnoLogin(uString* message)
{
    uPtr(HelloUno::_messageFromLoginEvt_)->RaiseAsync1(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, message));
}

// private static void UnoQuerychaincode(string message, string fcn) [static] :237
void HelloUno::UnoQuerychaincode(uString* message, uString* fcn)
{
    uPtr(HelloUno::_messageFromQuerychaincodeEvt_)->RaiseAsync1(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, message, fcn));
}

// private static void UnoRegister(string message) [static] :125
void HelloUno::UnoRegister(uString* message)
{
    uPtr(HelloUno::_messageFromRegisterEvt_)->RaiseAsync1(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, message));
}
// }

} // ::g
