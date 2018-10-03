// This file was generated based on '.uno/ux15/Fabric.Create.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Fabric_FuseCont-2f4dee74.h>
#include <_root.Fabric_FuseCont-3dfa98e2.h>
#include <Fabric.Create.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[34];
static uType* TYPES[6];

namespace g{
namespace Fabric{

// public partial sealed class Create :4
// {
// static Create() :39
static void Create__cctor_4_fn(uType* __type)
{
    Create::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[0/*"Date"*/], ::STRINGS[1/*"Weight"*/], ::STRINGS[2/*"Distance"*/], ::STRINGS[3/*"money"*/], ::STRINGS[4/*"Date2"*/], ::STRINGS[5/*"Registerid"*/], ::STRINGS[6/*"Driverid"*/], ::STRINGS[7/*"Recipientid"*/], ::STRINGS[8/*"Status"*/], ::STRINGS[9/*"temp_eb2"*/]);
    Create::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"Value"*/]);
    Create::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Date"*/]);
    Create::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Weight"*/]);
    Create::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Distance"*/]);
    Create::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"money"*/]);
    Create::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"Date2"*/]);
    Create::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"Registerid"*/]);
    Create::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"Driverid"*/]);
    Create::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"Recipientid"*/]);
    Create::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"Status"*/]);
}

static void Create_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Date");
    ::STRINGS[1] = uString::Const("Weight");
    ::STRINGS[2] = uString::Const("Distance");
    ::STRINGS[3] = uString::Const("money");
    ::STRINGS[4] = uString::Const("Date2");
    ::STRINGS[5] = uString::Const("Registerid");
    ::STRINGS[6] = uString::Const("Driverid");
    ::STRINGS[7] = uString::Const("Recipientid");
    ::STRINGS[8] = uString::Const("Status");
    ::STRINGS[9] = uString::Const("temp_eb2");
    ::STRINGS[10] = uString::Const("Value");
    ::STRINGS[11] = uString::Const("create_date");
    ::STRINGS[12] = uString::Const("create_weight");
    ::STRINGS[13] = uString::Const("create_distance");
    ::STRINGS[14] = uString::Const("create_money");
    ::STRINGS[15] = uString::Const("create_date2");
    ::STRINGS[16] = uString::Const("create_rgid");
    ::STRINGS[17] = uString::Const("create_did");
    ::STRINGS[18] = uString::Const("create_rcid");
    ::STRINGS[19] = uString::Const("create_status");
    ::STRINGS[20] = uString::Const("Createcargo");
    ::STRINGS[21] = uString::Const("createresult");
    ::STRINGS[22] = uString::Const("Create.ux");
    ::STRINGS[23] = uString::Const("\n"
        "\tvar fabric = require(\"js/fabric.js\");\n"
        "\tmodule.exports={\n"
        "\t\tcreate_date:fabric.create_date,\n"
        "\t\tcreate_weight:fabric.create_weight,\n"
        "\t\tcreate_distance:fabric.create_distance,\n"
        "        create_money:fabric.create_money,\n"
        "\t\tcreate_date2:fabric.create_date2,\n"
        "\t\tcreate_rgid:fabric.create_rgid,\n"
        "\t\tcreate_did:fabric.create_did,\n"
        "\t\tcreate_rcid:fabric.create_rcid,\n"
        "\t\tcreate_status:fabric.create_status,\n"
        "\t\tCreatecargo:fabric.Createcargo,\n"
        "\t\tcreateresult:fabric.createresult\n"
        "\t};\n"
        "\t");
    ::STRINGS[24] = uString::Const("Fabric CreateCargo Test");
    ::STRINGS[25] = uString::Const("Date(ex:20180909)");
    ::STRINGS[26] = uString::Const("t");
    ::STRINGS[27] = uString::Const("km");
    ::STRINGS[28] = uString::Const("won");
    ::STRINGS[29] = uString::Const("Date(yyyy-mm-dd)");
    ::STRINGS[30] = uString::Const("Register id");
    ::STRINGS[31] = uString::Const("Driver id");
    ::STRINGS[32] = uString::Const("Recipient id");
    ::STRINGS[33] = uString::Const("Register");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(115,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Create, Date_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Create, Weight_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Create, Distance_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Create, money_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Create, Date2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Create, Registerid_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Create, Driverid_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Create, Recipientid_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Create, Status_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Create, temp_Value_inst), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Create, Date), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Create, Weight), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Create, Distance), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Create, money), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Create, Date2), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Create, Registerid), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Create, Driverid), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Create, Recipientid), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Create, Status), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Create, temp_eb2), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(Create, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&Create::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Create::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Create::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Create::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Create::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Create::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Create::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Create::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Create::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Create::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Create::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Create_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 147;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Create);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fabric.Create", options);
    type->fp_build_ = Create_build;
    type->fp_ctor_ = (void*)Create__New4_fn;
    type->fp_cctor_ = Create__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Create() :43
void Create__ctor_7_fn(Create* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :47
void Create__InitializeUX_fn(Create* __this)
{
    __this->InitializeUX();
}

// public Create New() :43
void Create__New4_fn(Create** __retval)
{
    *__retval = Create::New4();
}

uSStrong<uArray*> Create::__g_static_nametable1_;
::g::Uno::UX::Selector Create::__selector0_;
::g::Uno::UX::Selector Create::__selector1_;
::g::Uno::UX::Selector Create::__selector2_;
::g::Uno::UX::Selector Create::__selector3_;
::g::Uno::UX::Selector Create::__selector4_;
::g::Uno::UX::Selector Create::__selector5_;
::g::Uno::UX::Selector Create::__selector6_;
::g::Uno::UX::Selector Create::__selector7_;
::g::Uno::UX::Selector Create::__selector8_;
::g::Uno::UX::Selector Create::__selector9_;

// public Create() [instance] :43
void Create::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :47
void Create::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Create::__g_static_nametable1_);
    Date = ::g::Fuse::Controls::TextInput::New3();
    Date_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(Date, Create::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"create_date"*/]);
    Weight = ::g::Fuse::Controls::TextInput::New3();
    Weight_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(Weight, Create::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"create_weight"*/]);
    Distance = ::g::Fuse::Controls::TextInput::New3();
    Distance_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(Distance, Create::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"create_dist...*/]);
    money = ::g::Fuse::Controls::TextInput::New3();
    money_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(money, Create::__selector0_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"create_money"*/]);
    Date2 = ::g::Fuse::Controls::TextInput::New3();
    Date2_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(Date2, Create::__selector0_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"create_date2"*/]);
    Registerid = ::g::Fuse::Controls::TextInput::New3();
    Registerid_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(Registerid, Create::__selector0_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[16/*"create_rgid"*/]);
    Driverid = ::g::Fuse::Controls::TextInput::New3();
    Driverid_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(Driverid, Create::__selector0_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"create_did"*/]);
    Recipientid = ::g::Fuse::Controls::TextInput::New3();
    Recipientid_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(Recipientid, Create::__selector0_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"create_rcid"*/]);
    Status = ::g::Fuse::Controls::TextInput::New3();
    Status_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(Status, Create::__selector0_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"create_status"*/]);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"Createcargo"*/]);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::Fabric_FuseControlsTextControl_Value_Property::New1(temp, Create::__selector0_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"createresult"*/]);
    ::g::Fuse::Reactive::JavaScript* temp12 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp13 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp14 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp15 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp16 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp17 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(Date_Value_inst, (uObject*)temp1, 3);
    ::g::Fuse::Controls::Rectangle* temp19 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp20 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp21 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(Weight_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Controls::Rectangle* temp23 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp24 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp25 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(Distance_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::Rectangle* temp27 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp28 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp29 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp30 = ::g::Fuse::Reactive::DataBinding::New1(money_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Controls::Rectangle* temp31 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp32 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp33 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(Date2_Value_inst, (uObject*)temp5, 3);
    ::g::Fuse::Controls::Rectangle* temp35 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp36 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp37 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(Registerid_Value_inst, (uObject*)temp6, 3);
    ::g::Fuse::Controls::Rectangle* temp39 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp40 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp41 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp42 = ::g::Fuse::Reactive::DataBinding::New1(Driverid_Value_inst, (uObject*)temp7, 3);
    ::g::Fuse::Controls::Rectangle* temp43 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp44 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp45 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp46 = ::g::Fuse::Reactive::DataBinding::New1(Recipientid_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Controls::Rectangle* temp47 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp48 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp49 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp50 = ::g::Fuse::Reactive::DataBinding::New1(Status_Value_inst, (uObject*)temp9, 3);
    ::g::Fuse::Controls::Button* temp51 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp52 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp53 = ::g::Fuse::Gestures::Clicked::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10);
    ::g::Fuse::Controls::ScrollView* temp54 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp11, 3);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    temp12->Code(::STRINGS[23/*"\n\tvar fab...*/]);
    temp12->LineNumber(2);
    temp12->FileName(::STRINGS[22/*"Create.ux"*/]);
    temp12->SourceLineNumber(2);
    temp12->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    temp13->SourceLineNumber(18);
    temp13->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Date);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Weight);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Distance);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), money);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Date2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Registerid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Driverid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Recipientid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Status);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    temp14->Value(::STRINGS[24/*"Fabric Crea...*/]);
    temp14->Alignment(10);
    temp14->SourceLineNumber(19);
    temp14->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    uPtr(Date)->PlaceholderText(::STRINGS[25/*"Date(ex:201...*/]);
    uPtr(Date)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(Date)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(Date)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    uPtr(Date)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(Date)->Name(Create::__selector1_);
    uPtr(Date)->SourceLineNumber(21);
    uPtr(Date)->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Date)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Date)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    temp15->Layer(1);
    temp15->SourceLineNumber(22);
    temp15->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp16);
    temp16->Width(2.0f);
    temp16->Brush(temp17);
    temp1->SourceLineNumber(21);
    temp1->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    uPtr(Weight)->PlaceholderText(::STRINGS[26/*"t"*/]);
    uPtr(Weight)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(Weight)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(Weight)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(Weight)->Name(Create::__selector2_);
    uPtr(Weight)->SourceLineNumber(27);
    uPtr(Weight)->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Weight)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Weight)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp19->Layer(1);
    temp19->SourceLineNumber(28);
    temp19->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp20);
    temp20->Width(2.0f);
    temp20->Brush(temp21);
    temp2->SourceLineNumber(27);
    temp2->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    uPtr(Distance)->PlaceholderText(::STRINGS[27/*"km"*/]);
    uPtr(Distance)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(Distance)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(Distance)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(Distance)->Name(Create::__selector3_);
    uPtr(Distance)->SourceLineNumber(33);
    uPtr(Distance)->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Distance)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Distance)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp23->Layer(1);
    temp23->SourceLineNumber(34);
    temp23->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp24);
    temp24->Width(2.0f);
    temp24->Brush(temp25);
    temp3->SourceLineNumber(33);
    temp3->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    uPtr(money)->PlaceholderText(::STRINGS[28/*"won"*/]);
    uPtr(money)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(money)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(money)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(money)->Name(Create::__selector4_);
    uPtr(money)->SourceLineNumber(39);
    uPtr(money)->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(money)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(money)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    temp27->Layer(1);
    temp27->SourceLineNumber(40);
    temp27->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp28);
    temp28->Width(2.0f);
    temp28->Brush(temp29);
    temp4->SourceLineNumber(39);
    temp4->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    uPtr(Date2)->PlaceholderText(::STRINGS[29/*"Date(yyyy-m...*/]);
    uPtr(Date2)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(Date2)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(Date2)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(Date2)->Name(Create::__selector5_);
    uPtr(Date2)->SourceLineNumber(45);
    uPtr(Date2)->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Date2)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Date2)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    temp31->Layer(1);
    temp31->SourceLineNumber(46);
    temp31->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp32);
    temp32->Width(2.0f);
    temp32->Brush(temp33);
    temp5->SourceLineNumber(45);
    temp5->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    uPtr(Registerid)->PlaceholderText(::STRINGS[30/*"Register id"*/]);
    uPtr(Registerid)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(Registerid)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(Registerid)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(Registerid)->Name(Create::__selector6_);
    uPtr(Registerid)->SourceLineNumber(51);
    uPtr(Registerid)->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Registerid)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Registerid)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    temp35->Layer(1);
    temp35->SourceLineNumber(52);
    temp35->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp36);
    temp36->Width(2.0f);
    temp36->Brush(temp37);
    temp6->SourceLineNumber(51);
    temp6->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    uPtr(Driverid)->PlaceholderText(::STRINGS[31/*"Driver id"*/]);
    uPtr(Driverid)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(Driverid)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(Driverid)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(Driverid)->Name(Create::__selector7_);
    uPtr(Driverid)->SourceLineNumber(57);
    uPtr(Driverid)->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Driverid)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Driverid)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp42);
    temp39->Layer(1);
    temp39->SourceLineNumber(58);
    temp39->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp40);
    temp40->Width(2.0f);
    temp40->Brush(temp41);
    temp7->SourceLineNumber(57);
    temp7->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    uPtr(Recipientid)->PlaceholderText(::STRINGS[32/*"Recipient id"*/]);
    uPtr(Recipientid)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(Recipientid)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(Recipientid)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(Recipientid)->Name(Create::__selector8_);
    uPtr(Recipientid)->SourceLineNumber(63);
    uPtr(Recipientid)->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Recipientid)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Recipientid)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp46);
    temp43->Layer(1);
    temp43->SourceLineNumber(64);
    temp43->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp44);
    temp44->Width(2.0f);
    temp44->Brush(temp45);
    temp8->SourceLineNumber(63);
    temp8->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    uPtr(Status)->PlaceholderText(::STRINGS[8/*"Status"*/]);
    uPtr(Status)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(Status)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(Status)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(Status)->Name(Create::__selector9_);
    uPtr(Status)->SourceLineNumber(69);
    uPtr(Status)->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Status)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Status)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp50);
    temp47->Layer(1);
    temp47->SourceLineNumber(70);
    temp47->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp48);
    temp48->Width(2.0f);
    temp48->Brush(temp49);
    temp9->SourceLineNumber(69);
    temp9->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    temp51->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp51->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp51->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp51->SourceLineNumber(75);
    temp51->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    temp52->Value(::STRINGS[33/*"Register"*/]);
    temp52->TextColor(::g::Fuse::Drawing::Colors::White());
    temp52->Alignment(10);
    temp52->SourceLineNumber(75);
    temp52->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    temp53->SourceLineNumber(76);
    temp53->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    temp53->add_Handler(uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp10->SourceLineNumber(76);
    temp10->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    temp54->SourceLineNumber(78);
    temp54->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->TextWrapping(1);
    temp->SourceLineNumber(79);
    temp->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    temp11->SourceLineNumber(79);
    temp11->SourceFileName(::STRINGS[22/*"Create.ux"*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), Date);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), Weight);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), Distance);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), money);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), Date2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), Registerid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), Driverid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), Recipientid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), Status);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
}

// public Create New() [static] :43
Create* Create::New4()
{
    Create* obj1 = (Create*)uNew(Create_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}} // ::g::Fabric
