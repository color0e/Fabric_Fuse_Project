// This file was generated based on HelloUno.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}
namespace g{struct HelloUno;}

namespace g{

// public sealed class HelloUno :22
// {
::g::Fuse::Scripting::NativeModule_type* HelloUno_typeof();
void HelloUno__ctor_2_fn(HelloUno* __this);
void HelloUno__Invokechaincode_fn(HelloUno* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void HelloUno__InvokechaincodeImpl_fn(uArray* args, int32_t* len);
void HelloUno__Login_fn(HelloUno* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void HelloUno__LoginImpl_fn(uArray* args);
void HelloUno__New2_fn(HelloUno** __retval);
void HelloUno__Querychaincode_fn(HelloUno* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void HelloUno__QuerychaincodeImpl_fn(uArray* args, int32_t* len);
void HelloUno__Register_fn(HelloUno* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void HelloUno__RegisterImpl_fn(uArray* args);
void HelloUno__UnoInvokechaincode_fn(uString* message, uString* fcn);
void HelloUno__UnoLogin_fn(uString* message);
void HelloUno__UnoQuerychaincode_fn(uString* message, uString* fcn);
void HelloUno__UnoRegister_fn(uString* message);

struct HelloUno : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<HelloUno*> _instance_;
    static uSStrong<HelloUno*>& _instance() { return _instance_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _messageFromLoginEvt_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _messageFromLoginEvt() { return _messageFromLoginEvt_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _messageFromRegisterEvt_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _messageFromRegisterEvt() { return _messageFromRegisterEvt_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _messageFromInvokechaincodeEvt_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _messageFromInvokechaincodeEvt() { return _messageFromInvokechaincodeEvt_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _messageFromQuerychaincodeEvt_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _messageFromQuerychaincodeEvt() { return _messageFromQuerychaincodeEvt_; }

    void ctor_2();
    uObject* Invokechaincode(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* Login(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* Querychaincode(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* Register(::g::Fuse::Scripting::Context* c, uArray* args);
    static void InvokechaincodeImpl(uArray* args, int32_t len);
    static void LoginImpl(uArray* args);
    static HelloUno* New2();
    static void QuerychaincodeImpl(uArray* args, int32_t len);
    static void RegisterImpl(uArray* args);
    static void UnoInvokechaincode(uString* message, uString* fcn);
    static void UnoLogin(uString* message);
    static void UnoQuerychaincode(uString* message, uString* fcn);
    static void UnoRegister(uString* message);
};
// }

} // ::g
