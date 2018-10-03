// This file was generated based on '.uno/ux15/Fabric.Money.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Fabric_FuseCont-2f4dee74.h>
#include <_root.Fabric_FuseCont-3dfa98e2.h>
#include <Fabric.Money.h>
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
static uString* STRINGS[20];
static uType* TYPES[6];

namespace g{
namespace Fabric{

// public partial sealed class Money :4
// {
// static Money() :22
static void Money__cctor_4_fn(uType* __type)
{
    Money::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[0/*"Userid"*/], ::STRINGS[1/*"Point"*/], ::STRINGS[2/*"temp_eb5"*/], ::STRINGS[3/*"temp_eb6"*/], ::STRINGS[4/*"temp_eb7"*/]);
    Money::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"Value"*/]);
    Money::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Userid"*/]);
    Money::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Point"*/]);
}

static void Money_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Userid");
    ::STRINGS[1] = uString::Const("Point");
    ::STRINGS[2] = uString::Const("temp_eb5");
    ::STRINGS[3] = uString::Const("temp_eb6");
    ::STRINGS[4] = uString::Const("temp_eb7");
    ::STRINGS[5] = uString::Const("Value");
    ::STRINGS[6] = uString::Const("money_uid");
    ::STRINGS[7] = uString::Const("money_point");
    ::STRINGS[8] = uString::Const("Querypoint");
    ::STRINGS[9] = uString::Const("Addpoint");
    ::STRINGS[10] = uString::Const("Subpoint");
    ::STRINGS[11] = uString::Const("moneyresult");
    ::STRINGS[12] = uString::Const("Money.ux");
    ::STRINGS[13] = uString::Const("\n"
        "\tvar fabric = require(\"js/fabric.js\");\n"
        "\tmodule.exports={\n"
        "\t\tmoney_uid:fabric.money_uid,\n"
        "\t\tmoney_point:fabric.money_point,\n"
        "\t\tQuerypoint:fabric.Querypoint,\n"
        "        Addpoint:fabric.Addpoint,\n"
        "\t\tSubpoint:fabric.Subpoint,\n"
        "\t\tmoneyresult:fabric.moneyresult\n"
        "\t};\n"
        "\t");
    ::STRINGS[14] = uString::Const("Fabric Point Test");
    ::STRINGS[15] = uString::Const("User id");
    ::STRINGS[16] = uString::Const("Point Value");
    ::STRINGS[17] = uString::Const("Query Point");
    ::STRINGS[18] = uString::Const("Add Point");
    ::STRINGS[19] = uString::Const("Sub Point");
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
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Money, Userid_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Money, Point_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Money, temp_Value_inst), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Money, Userid), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Money, Point), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Money, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Money, temp_eb6), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Money, temp_eb7), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(Money, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&Money::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Money::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Money::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Money::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Money_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 128;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Money);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fabric.Money", options);
    type->fp_build_ = Money_build;
    type->fp_ctor_ = (void*)Money__New4_fn;
    type->fp_cctor_ = Money__cctor_4_fn;
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

// public Money() :26
void Money__ctor_7_fn(Money* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :30
void Money__InitializeUX_fn(Money* __this)
{
    __this->InitializeUX();
}

// public Money New() :26
void Money__New4_fn(Money** __retval)
{
    *__retval = Money::New4();
}

uSStrong<uArray*> Money::__g_static_nametable1_;
::g::Uno::UX::Selector Money::__selector0_;
::g::Uno::UX::Selector Money::__selector1_;
::g::Uno::UX::Selector Money::__selector2_;

// public Money() [instance] :26
void Money::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :30
void Money::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Money::__g_static_nametable1_);
    Userid = ::g::Fuse::Controls::TextInput::New3();
    Userid_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(Userid, Money::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"money_uid"*/]);
    Point = ::g::Fuse::Controls::TextInput::New3();
    Point_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(Point, Money::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"money_point"*/]);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"Querypoint"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"Addpoint"*/]);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"Subpoint"*/]);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::Fabric_FuseControlsTextControl_Value_Property::New1(temp, Money::__selector0_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"moneyresult"*/]);
    ::g::Fuse::Reactive::JavaScript* temp7 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp8 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp10 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp11 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp12 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(Userid_Value_inst, (uObject*)temp1, 3);
    ::g::Fuse::Controls::Rectangle* temp14 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp15 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp16 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(Point_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Controls::Button* temp18 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp19 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp20 = ::g::Fuse::Gestures::Clicked::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Controls::Button* temp21 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp22 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp23 = ::g::Fuse::Gestures::Clicked::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Controls::Button* temp24 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp25 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp26 = ::g::Fuse::Gestures::Clicked::New2();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    ::g::Fuse::Controls::ScrollView* temp27 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp6, 3);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp7->Code(::STRINGS[13/*"\n\tvar fab...*/]);
    temp7->LineNumber(2);
    temp7->FileName(::STRINGS[12/*"Money.ux"*/]);
    temp7->SourceLineNumber(2);
    temp7->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp8->SourceLineNumber(13);
    temp8->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Userid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Point);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp9->Value(::STRINGS[14/*"Fabric Poin...*/]);
    temp9->Alignment(10);
    temp9->SourceLineNumber(14);
    temp9->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    uPtr(Userid)->PlaceholderText(::STRINGS[15/*"User id"*/]);
    uPtr(Userid)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(Userid)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(Userid)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    uPtr(Userid)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(Userid)->Name(Money::__selector1_);
    uPtr(Userid)->SourceLineNumber(16);
    uPtr(Userid)->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Userid)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Userid)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    temp10->Layer(1);
    temp10->SourceLineNumber(17);
    temp10->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp11);
    temp11->Width(2.0f);
    temp11->Brush(temp12);
    temp1->SourceLineNumber(16);
    temp1->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    uPtr(Point)->PlaceholderText(::STRINGS[16/*"Point Value"*/]);
    uPtr(Point)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(Point)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(Point)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(Point)->Name(Money::__selector2_);
    uPtr(Point)->SourceLineNumber(22);
    uPtr(Point)->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Point)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Point)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp14->Layer(1);
    temp14->SourceLineNumber(23);
    temp14->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp15);
    temp15->Width(2.0f);
    temp15->Brush(temp16);
    temp2->SourceLineNumber(22);
    temp2->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp18->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp18->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp18->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp18->SourceLineNumber(28);
    temp18->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp19->Value(::STRINGS[17/*"Query Point"*/]);
    temp19->TextColor(::g::Fuse::Drawing::Colors::White());
    temp19->Alignment(10);
    temp19->SourceLineNumber(28);
    temp19->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp20->SourceLineNumber(29);
    temp20->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp20->add_Handler(uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp3->SourceLineNumber(29);
    temp3->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp21->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp21->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp21->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 10.0f));
    temp21->SourceLineNumber(32);
    temp21->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp22->Value(::STRINGS[18/*"Add Point"*/]);
    temp22->TextColor(::g::Fuse::Drawing::Colors::White());
    temp22->Alignment(10);
    temp22->SourceLineNumber(32);
    temp22->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp23->SourceLineNumber(33);
    temp23->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp23->add_Handler(uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    temp4->SourceLineNumber(33);
    temp4->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp24->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp24->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp24->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 10.0f));
    temp24->SourceLineNumber(36);
    temp24->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp25->Value(::STRINGS[19/*"Sub Point"*/]);
    temp25->TextColor(::g::Fuse::Drawing::Colors::White());
    temp25->Alignment(10);
    temp25->SourceLineNumber(36);
    temp25->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp26->SourceLineNumber(37);
    temp26->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp26->add_Handler(uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp5->SourceLineNumber(37);
    temp5->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    temp27->SourceLineNumber(39);
    temp27->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->TextWrapping(1);
    temp->SourceLineNumber(40);
    temp->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp6->SourceLineNumber(40);
    temp6->SourceFileName(::STRINGS[12/*"Money.ux"*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), Userid);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), Point);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
}

// public Money New() [static] :26
Money* Money::New4()
{
    Money* obj1 = (Money*)uNew(Money_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}} // ::g::Fabric
