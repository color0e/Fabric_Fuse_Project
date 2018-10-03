// This file was generated based on '.uno/ux15/Fabric.Login.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fabric{struct Login;}}
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fabric{

// public partial sealed class Login :4
// {
::g::Fuse::Controls::Panel_type* Login_typeof();
void Login__ctor_7_fn(Login* __this);
void Login__InitializeUX_fn(Login* __this);
void Login__New4_fn(Login** __retval);

struct Login : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::Property1*> ID_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> PASS_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Fuse::Controls::TextInput*> ID;
    uStrong< ::g::Fuse::Controls::TextInput*> PASS;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Login_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Login_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Login_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Login_typeof()->Init(), __selector2_; }

    void ctor_7();
    void InitializeUX();
    static Login* New4();
};
// }

}} // ::g::Fabric
