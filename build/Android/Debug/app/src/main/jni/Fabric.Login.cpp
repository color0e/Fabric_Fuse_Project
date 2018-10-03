// This file was generated based on '.uno/ux15/Fabric.Login.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Fabric_FuseCont-2f4dee74.h>
#include <_root.Fabric_FuseCont-3dfa98e2.h>
#include <Fabric.Login.h>
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
static uString* STRINGS[14];
static uType* TYPES[6];

namespace g{
namespace Fabric{

// public partial sealed class Login :4
// {
// static Login() :20
static void Login__cctor_4_fn(uType* __type)
{
    Login::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"ID"*/], ::STRINGS[1/*"PASS"*/], ::STRINGS[2/*"temp_eb3"*/], ::STRINGS[3/*"temp_eb4"*/]);
    Login::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"Value"*/]);
    Login::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"ID"*/]);
    Login::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"PASS"*/]);
}

static void Login_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ID");
    ::STRINGS[1] = uString::Const("PASS");
    ::STRINGS[2] = uString::Const("temp_eb3");
    ::STRINGS[3] = uString::Const("temp_eb4");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("id");
    ::STRINGS[6] = uString::Const("pass");
    ::STRINGS[7] = uString::Const("Login");
    ::STRINGS[8] = uString::Const("Register");
    ::STRINGS[9] = uString::Const("result");
    ::STRINGS[10] = uString::Const("Login.ux");
    ::STRINGS[11] = uString::Const("\n"
        "\tvar fabric = require(\"js/fabric.js\");\n"
        "\tmodule.exports={\n"
        "\t\tid:fabric.iid,\n"
        "\t\tpass:fabric.pass,\n"
        "\t\tLogin:fabric.Login,\n"
        "        Register:fabric.Register,\n"
        "\t\tresult:fabric.result\n"
        "\t};\n"
        "\t");
    ::STRINGS[12] = uString::Const("Fabric CA Register,Enroll Test");
    ::STRINGS[13] = uString::Const("PASSWORD");
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
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Login, ID_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Login, PASS_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Login, temp_Value_inst), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Login, ID), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Login, PASS), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Login, temp_eb3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Login, temp_eb4), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(Login, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&Login::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Login::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Login::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Login::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Login_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 127;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Login);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fabric.Login", options);
    type->fp_build_ = Login_build;
    type->fp_ctor_ = (void*)Login__New4_fn;
    type->fp_cctor_ = Login__cctor_4_fn;
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

// public Login() :24
void Login__ctor_7_fn(Login* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :28
void Login__InitializeUX_fn(Login* __this)
{
    __this->InitializeUX();
}

// public Login New() :24
void Login__New4_fn(Login** __retval)
{
    *__retval = Login::New4();
}

uSStrong<uArray*> Login::__g_static_nametable1_;
::g::Uno::UX::Selector Login::__selector0_;
::g::Uno::UX::Selector Login::__selector1_;
::g::Uno::UX::Selector Login::__selector2_;

// public Login() [instance] :24
void Login::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :28
void Login::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Login::__g_static_nametable1_);
    ID = ::g::Fuse::Controls::TextInput::New3();
    ID_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(ID, Login::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"id"*/]);
    PASS = ::g::Fuse::Controls::TextInput::New3();
    PASS_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(PASS, Login::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"pass"*/]);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"Login"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"Register"*/]);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::Fabric_FuseControlsTextControl_Value_Property::New1(temp, Login::__selector0_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"result"*/]);
    ::g::Fuse::Reactive::JavaScript* temp6 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp7 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp9 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp10 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp11 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(ID_Value_inst, (uObject*)temp1, 3);
    ::g::Fuse::Controls::Rectangle* temp13 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp14 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp15 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(PASS_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Controls::Button* temp17 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp18 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp19 = ::g::Fuse::Gestures::Clicked::New2();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Controls::Button* temp20 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp22 = ::g::Fuse::Gestures::Clicked::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Controls::ScrollView* temp23 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp5, 3);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    temp6->Code(::STRINGS[11/*"\n\tvar fab...*/]);
    temp6->LineNumber(2);
    temp6->FileName(::STRINGS[10/*"Login.ux"*/]);
    temp6->SourceLineNumber(2);
    temp6->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    temp7->SourceLineNumber(13);
    temp7->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), ID);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), PASS);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp8->Value(::STRINGS[12/*"Fabric CA R...*/]);
    temp8->Alignment(10);
    temp8->SourceLineNumber(14);
    temp8->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    uPtr(ID)->PlaceholderText(::STRINGS[0/*"ID"*/]);
    uPtr(ID)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(ID)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(ID)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    uPtr(ID)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(ID)->Name(Login::__selector1_);
    uPtr(ID)->SourceLineNumber(16);
    uPtr(ID)->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ID)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ID)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp9->Layer(1);
    temp9->SourceLineNumber(17);
    temp9->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp10);
    temp10->Width(2.0f);
    temp10->Brush(temp11);
    temp1->SourceLineNumber(16);
    temp1->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    uPtr(PASS)->PlaceholderText(::STRINGS[13/*"PASSWORD"*/]);
    uPtr(PASS)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(PASS)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(PASS)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(PASS)->Name(Login::__selector2_);
    uPtr(PASS)->SourceLineNumber(23);
    uPtr(PASS)->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(PASS)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(PASS)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp13->Layer(1);
    temp13->SourceLineNumber(24);
    temp13->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp14);
    temp14->Width(2.0f);
    temp14->Brush(temp15);
    temp2->SourceLineNumber(23);
    temp2->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    temp17->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp17->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp17->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp17->SourceLineNumber(29);
    temp17->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp18->Value(::STRINGS[7/*"Login"*/]);
    temp18->TextColor(::g::Fuse::Drawing::Colors::White());
    temp18->Alignment(10);
    temp18->SourceLineNumber(29);
    temp18->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    temp19->SourceLineNumber(30);
    temp19->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    temp19->add_Handler(uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp3->SourceLineNumber(30);
    temp3->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    temp20->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp20->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp20->Margin(::g::Uno::Float4__New2(10.0f, 5.0f, 10.0f, 10.0f));
    temp20->SourceLineNumber(32);
    temp20->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp21->Value(::STRINGS[8/*"Register"*/]);
    temp21->TextColor(::g::Fuse::Drawing::Colors::White());
    temp21->Alignment(10);
    temp21->SourceLineNumber(32);
    temp21->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    temp22->SourceLineNumber(33);
    temp22->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    temp22->add_Handler(uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp4->SourceLineNumber(33);
    temp4->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    temp23->SourceLineNumber(35);
    temp23->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->TextWrapping(1);
    temp->SourceLineNumber(36);
    temp->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    temp5->SourceLineNumber(36);
    temp5->SourceFileName(::STRINGS[10/*"Login.ux"*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), ID);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), PASS);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
}

// public Login New() [static] :24
Login* Login::New4()
{
    Login* obj1 = (Login*)uNew(Login_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}} // ::g::Fabric
