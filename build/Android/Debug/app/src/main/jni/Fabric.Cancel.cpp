// This file was generated based on '.uno/ux15/Fabric.Cancel.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Fabric_FuseCont-2f4dee74.h>
#include <_root.Fabric_FuseCont-3dfa98e2.h>
#include <Fabric.Cancel.h>
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
static uString* STRINGS[11];
static uType* TYPES[6];

namespace g{
namespace Fabric{

// public partial sealed class Cancel :4
// {
// static Cancel() :15
static void Cancel__cctor_4_fn(uType* __type)
{
    Cancel::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"Key"*/], ::STRINGS[1/*"temp_eb0"*/]);
    Cancel::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Value"*/]);
    Cancel::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Key"*/]);
}

static void Cancel_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Key");
    ::STRINGS[1] = uString::Const("temp_eb0");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("cancel_key");
    ::STRINGS[4] = uString::Const("Cancelcargo");
    ::STRINGS[5] = uString::Const("cancelresult");
    ::STRINGS[6] = uString::Const("Cancel.ux");
    ::STRINGS[7] = uString::Const("\n"
        "\tvar fabric = require(\"js/fabric.js\");\n"
        "\tmodule.exports={\n"
        "\t\tcancel_key:fabric.cancel_key,\n"
        "\t\tCancelcargo:fabric.Cancelcargo,\n"
        "\t\tcancelresult:fabric.cancelresult\n"
        "\t\t};\n"
        "\t");
    ::STRINGS[8] = uString::Const("Fabric CancelContract Test");
    ::STRINGS[9] = uString::Const("Key(ex:20180909_1)");
    ::STRINGS[10] = uString::Const("Cancel");
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
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Cancel, Key_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Cancel, temp_Value_inst), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(Cancel, Key), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Cancel, temp_eb0), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(Cancel, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&Cancel::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Cancel::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Cancel::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Cancel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 123;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Cancel);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fabric.Cancel", options);
    type->fp_build_ = Cancel_build;
    type->fp_ctor_ = (void*)Cancel__New4_fn;
    type->fp_cctor_ = Cancel__cctor_4_fn;
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

// public Cancel() :19
void Cancel__ctor_7_fn(Cancel* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :23
void Cancel__InitializeUX_fn(Cancel* __this)
{
    __this->InitializeUX();
}

// public Cancel New() :19
void Cancel__New4_fn(Cancel** __retval)
{
    *__retval = Cancel::New4();
}

uSStrong<uArray*> Cancel::__g_static_nametable1_;
::g::Uno::UX::Selector Cancel::__selector0_;
::g::Uno::UX::Selector Cancel::__selector1_;

// public Cancel() [instance] :19
void Cancel::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :23
void Cancel::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Cancel::__g_static_nametable1_);
    Key = ::g::Fuse::Controls::TextInput::New3();
    Key_Value_inst = ::g::Fabric_FuseControlsTextInputControl_Value_Property::New1(Key, Cancel::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"cancel_key"*/]);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"Cancelcargo"*/]);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::Fabric_FuseControlsTextControl_Value_Property::New1(temp, Cancel::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"cancelresult"*/]);
    ::g::Fuse::Reactive::JavaScript* temp4 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp5 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp7 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp8 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp9 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(Key_Value_inst, (uObject*)temp1, 3);
    ::g::Fuse::Controls::Button* temp11 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp13 = ::g::Fuse::Gestures::Clicked::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ::g::Fuse::Controls::ScrollView* temp14 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, 3);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    temp4->Code(::STRINGS[7/*"\n\tvar fab...*/]);
    temp4->LineNumber(2);
    temp4->FileName(::STRINGS[6/*"Cancel.ux"*/]);
    temp4->SourceLineNumber(2);
    temp4->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    temp5->SourceLineNumber(11);
    temp5->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Key);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp6->Value(::STRINGS[8/*"Fabric Canc...*/]);
    temp6->Alignment(10);
    temp6->SourceLineNumber(12);
    temp6->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    uPtr(Key)->PlaceholderText(::STRINGS[9/*"Key(ex:2018...*/]);
    uPtr(Key)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(Key)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(Key)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    uPtr(Key)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(Key)->Name(Cancel::__selector1_);
    uPtr(Key)->SourceLineNumber(14);
    uPtr(Key)->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Key)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Key)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp7->Layer(1);
    temp7->SourceLineNumber(15);
    temp7->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp8);
    temp8->Width(2.0f);
    temp8->Brush(temp9);
    temp1->SourceLineNumber(14);
    temp1->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    temp11->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp11->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp11->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp11->SourceLineNumber(20);
    temp11->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp12->Value(::STRINGS[10/*"Cancel"*/]);
    temp12->TextColor(::g::Fuse::Drawing::Colors::White());
    temp12->Alignment(10);
    temp12->SourceLineNumber(20);
    temp12->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    temp13->SourceLineNumber(21);
    temp13->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    temp13->add_Handler(uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp2->SourceLineNumber(21);
    temp2->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    temp14->SourceLineNumber(23);
    temp14->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->TextWrapping(1);
    temp->SourceLineNumber(24);
    temp->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp3->SourceLineNumber(24);
    temp3->SourceFileName(::STRINGS[6/*"Cancel.ux"*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), Key);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
}

// public Cancel New() [static] :19
Cancel* Cancel::New4()
{
    Cancel* obj1 = (Cancel*)uNew(Cancel_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}} // ::g::Fabric
