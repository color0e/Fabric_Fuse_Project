// This file was generated based on '.uno/ux15/Fabric.Create.g.uno'.
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
namespace g{namespace Fabric{struct Create;}}
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fabric{

// public partial sealed class Create :4
// {
::g::Fuse::Controls::Panel_type* Create_typeof();
void Create__ctor_7_fn(Create* __this);
void Create__InitializeUX_fn(Create* __this);
void Create__New4_fn(Create** __retval);

struct Create : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::Property1*> Date_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> Weight_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> Distance_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> money_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> Date2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> Registerid_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> Driverid_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> Recipientid_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> Status_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Fuse::Controls::TextInput*> Date;
    uStrong< ::g::Fuse::Controls::TextInput*> Weight;
    uStrong< ::g::Fuse::Controls::TextInput*> Distance;
    uStrong< ::g::Fuse::Controls::TextInput*> money;
    uStrong< ::g::Fuse::Controls::TextInput*> Date2;
    uStrong< ::g::Fuse::Controls::TextInput*> Registerid;
    uStrong< ::g::Fuse::Controls::TextInput*> Driverid;
    uStrong< ::g::Fuse::Controls::TextInput*> Recipientid;
    uStrong< ::g::Fuse::Controls::TextInput*> Status;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Create_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Create_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Create_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Create_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Create_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Create_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return Create_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return Create_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return Create_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return Create_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return Create_typeof()->Init(), __selector9_; }

    void ctor_7();
    void InitializeUX();
    static Create* New4();
};
// }

}} // ::g::Fabric
