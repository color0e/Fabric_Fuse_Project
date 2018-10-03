// This file was generated based on '.uno/ux15/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HelloUno.h>
#include <_root.MainView.h>
#include <Fabric.Cancel.h>
#include <Fabric.Complete.h>
#include <Fabric.Create.h>
#include <Fabric.Login.h>
#include <Fabric.Money.h>
#include <Fabric.QueryC.h>
#include <Fabric.QueryM.h>
#include <Fabric.Sign.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.Font.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DeviceCaps.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[89];
static uType* TYPES[1];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :22
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Reactive::DeviceCaps_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Reactive::DeviceCaps::Device(), ::STRINGS[0/*"Device"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[1/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[2/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[3/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[4/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[5/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[6/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[7/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[8/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[9/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[10/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[11/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[12/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[13/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[14/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[15/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[16/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[17/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[18/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[19/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[20/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[21/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[22/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[23/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[24/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[25/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[26/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[27/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[28/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[29/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[30/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[31/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[32/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[32/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[33/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[33/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[34/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[34/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[35/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[35/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[36/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[36/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[37/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[37/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[38/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[38/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[39/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[39/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[40/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[40/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[41/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[41/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[42/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[42/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[43/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[43/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[44/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[44/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[45/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[45/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[46/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[46/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[47/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[47/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[48/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[48/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[49/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[50/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[51/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[52/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[53/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[54/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[55/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[56/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[57/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[57/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[58/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[59/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[59/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[60/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[61/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[62/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[62/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[63/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[64/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[65/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[66/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[67/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[68/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[69/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), ::STRINGS[70/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[71/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), ::STRINGS[72/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), ::STRINGS[73/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), ::STRINGS[74/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), ::STRINGS[75/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), ::STRINGS[76/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), ::STRINGS[77/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), ::STRINGS[78/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), ::STRINGS[79/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), ::STRINGS[80/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), ::STRINGS[81/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[82/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[83/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[84/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[85/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[86/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[87/*"Height"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Device");
    ::STRINGS[1] = uString::Const("Linear");
    ::STRINGS[2] = uString::Const("QuadraticIn");
    ::STRINGS[3] = uString::Const("QuadraticOut");
    ::STRINGS[4] = uString::Const("QuadraticInOut");
    ::STRINGS[5] = uString::Const("CubicIn");
    ::STRINGS[6] = uString::Const("CubicOut");
    ::STRINGS[7] = uString::Const("CubicInOut");
    ::STRINGS[8] = uString::Const("QuarticIn");
    ::STRINGS[9] = uString::Const("QuarticOut");
    ::STRINGS[10] = uString::Const("QuarticInOut");
    ::STRINGS[11] = uString::Const("QuinticIn");
    ::STRINGS[12] = uString::Const("QuinticOut");
    ::STRINGS[13] = uString::Const("QuinticInOut");
    ::STRINGS[14] = uString::Const("SinusoidalIn");
    ::STRINGS[15] = uString::Const("SinusoidalOut");
    ::STRINGS[16] = uString::Const("SinusoidalInOut");
    ::STRINGS[17] = uString::Const("ExponentialIn");
    ::STRINGS[18] = uString::Const("ExponentialOut");
    ::STRINGS[19] = uString::Const("ExponentialInOut");
    ::STRINGS[20] = uString::Const("CircularIn");
    ::STRINGS[21] = uString::Const("CircularOut");
    ::STRINGS[22] = uString::Const("CircularInOut");
    ::STRINGS[23] = uString::Const("ElasticIn");
    ::STRINGS[24] = uString::Const("ElasticOut");
    ::STRINGS[25] = uString::Const("ElasticInOut");
    ::STRINGS[26] = uString::Const("BackIn");
    ::STRINGS[27] = uString::Const("BackOut");
    ::STRINGS[28] = uString::Const("BackInOut");
    ::STRINGS[29] = uString::Const("BounceIn");
    ::STRINGS[30] = uString::Const("BounceOut");
    ::STRINGS[31] = uString::Const("BounceInOut");
    ::STRINGS[32] = uString::Const("Transparent");
    ::STRINGS[33] = uString::Const("Black");
    ::STRINGS[34] = uString::Const("Silver");
    ::STRINGS[35] = uString::Const("Gray");
    ::STRINGS[36] = uString::Const("White");
    ::STRINGS[37] = uString::Const("Maroon");
    ::STRINGS[38] = uString::Const("Red");
    ::STRINGS[39] = uString::Const("Purple");
    ::STRINGS[40] = uString::Const("Fuchsia");
    ::STRINGS[41] = uString::Const("Green");
    ::STRINGS[42] = uString::Const("Lime");
    ::STRINGS[43] = uString::Const("Olive");
    ::STRINGS[44] = uString::Const("Yellow");
    ::STRINGS[45] = uString::Const("Navy");
    ::STRINGS[46] = uString::Const("Blue");
    ::STRINGS[47] = uString::Const("Teal");
    ::STRINGS[48] = uString::Const("Aqua");
    ::STRINGS[49] = uString::Const("TopLeft");
    ::STRINGS[50] = uString::Const("Center");
    ::STRINGS[51] = uString::Const("Anchor");
    ::STRINGS[52] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[53] = uString::Const("VerticalBoxCenter");
    ::STRINGS[54] = uString::Const("TransformOriginOffset");
    ::STRINGS[55] = uString::Const("PositionOffset");
    ::STRINGS[56] = uString::Const("SizeFactor");
    ::STRINGS[57] = uString::Const("Size");
    ::STRINGS[58] = uString::Const("GiveFocus");
    ::STRINGS[59] = uString::Const("LayoutChange");
    ::STRINGS[60] = uString::Const("WorldPositionChange");
    ::STRINGS[61] = uString::Const("PositionChange");
    ::STRINGS[62] = uString::Const("SizeChange");
    ::STRINGS[63] = uString::Const("Keyboard");
    ::STRINGS[64] = uString::Const("Points");
    ::STRINGS[65] = uString::Const("Pixels");
    ::STRINGS[66] = uString::Const("ContentSize");
    ::STRINGS[67] = uString::Const("ScrollViewSize");
    ::STRINGS[68] = uString::Const("PreloadRetain");
    ::STRINGS[69] = uString::Const("UnloadUnused");
    ::STRINGS[70] = uString::Const("QuickUnload");
    ::STRINGS[71] = uString::Const("UnloadInBackground");
    ::STRINGS[72] = uString::Const("Thin");
    ::STRINGS[73] = uString::Const("Light");
    ::STRINGS[74] = uString::Const("Regular");
    ::STRINGS[75] = uString::Const("Medium");
    ::STRINGS[76] = uString::Const("Bold");
    ::STRINGS[77] = uString::Const("ThinItalic");
    ::STRINGS[78] = uString::Const("LightItalic");
    ::STRINGS[79] = uString::Const("Italic");
    ::STRINGS[80] = uString::Const("MediumItalic");
    ::STRINGS[81] = uString::Const("BoldItalic");
    ::STRINGS[82] = uString::Const("PlatformDefault");
    ::STRINGS[83] = uString::Const("Identity");
    ::STRINGS[84] = uString::Const("Local");
    ::STRINGS[85] = uString::Const("ParentSize");
    ::STRINGS[86] = uString::Const("Width");
    ::STRINGS[87] = uString::Const("Height");
    ::STRINGS[88] = uString::Const("MainView.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(7,
        ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule_typeof(), offsetof(MainView, FuseReactiveFuseJSDiagnosticsImplModule), 0,
        ::g::Fuse::Reactive::FuseJS::Http_typeof(), offsetof(MainView, FuseReactiveFuseJSHttp), 0,
        ::g::Fuse::Reactive::FuseJS::TimerModule_typeof(), offsetof(MainView, FuseReactiveFuseJSTimerModule), 0,
        ::g::Fuse::Drawing::BrushConverter_typeof(), offsetof(MainView, FuseDrawingBrushConverter), 0,
        ::g::Fuse::Triggers::BusyTaskModule_typeof(), offsetof(MainView, FuseTriggersBusyTaskModule), 0,
        ::g::Fuse::Testing::UnoTestingHelper_typeof(), offsetof(MainView, FuseTestingUnoTestingHelper), 0,
        ::g::Fuse::FileSystem::FileSystemModule_typeof(), offsetof(MainView, FuseFileSystemFileSystemModule), 0,
        ::g::Fuse::Storage::StorageModule_typeof(), offsetof(MainView, FuseStorageStorageModule), 0,
        ::g::Fuse::WebSocket::WebSocketClientModule_typeof(), offsetof(MainView, FuseWebSocketWebSocketClientModule), 0,
        ::g::Polyfills::Window::WindowModule_typeof(), offsetof(MainView, PolyfillsWindowWindowModule), 0,
        ::g::FuseJS::Globals_typeof(), offsetof(MainView, FuseJSGlobals), 0,
        ::g::FuseJS::Lifecycle_typeof(), offsetof(MainView, FuseJSLifecycle), 0,
        ::g::FuseJS::Environment_typeof(), offsetof(MainView, FuseJSEnvironment), 0,
        ::g::FuseJS::Base64_typeof(), offsetof(MainView, FuseJSBase64), 0,
        ::g::FuseJS::Bundle_typeof(), offsetof(MainView, FuseJSBundle), 0,
        ::g::FuseJS::FileReaderImpl_typeof(), offsetof(MainView, FuseJSFileReaderImpl), 0,
        ::g::FuseJS::UserEvents_typeof(), offsetof(MainView, FuseJSUserEvents), 0,
        ::g::HelloUno_typeof(), offsetof(MainView, HelloUno), 0);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :134
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :138
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :134
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

// public MainView() [instance] :134
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :138
void MainView::InitializeUX()
{
    FuseReactiveFuseJSDiagnosticsImplModule = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    FuseReactiveFuseJSHttp = ::g::Fuse::Reactive::FuseJS::Http::New2();
    FuseReactiveFuseJSTimerModule = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    FuseDrawingBrushConverter = ::g::Fuse::Drawing::BrushConverter::New1();
    FuseTriggersBusyTaskModule = ::g::Fuse::Triggers::BusyTaskModule::New2();
    FuseTestingUnoTestingHelper = ::g::Fuse::Testing::UnoTestingHelper::New2();
    FuseFileSystemFileSystemModule = ::g::Fuse::FileSystem::FileSystemModule::New2();
    FuseStorageStorageModule = ::g::Fuse::Storage::StorageModule::New2();
    FuseWebSocketWebSocketClientModule = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    PolyfillsWindowWindowModule = ::g::Polyfills::Window::WindowModule::New3();
    FuseJSGlobals = ::g::FuseJS::Globals::New2();
    FuseJSLifecycle = ::g::FuseJS::Lifecycle::New3();
    FuseJSEnvironment = ::g::FuseJS::Environment::New2();
    FuseJSBase64 = ::g::FuseJS::Base64::New2();
    FuseJSBundle = ::g::FuseJS::Bundle::New2();
    FuseJSFileReaderImpl = ::g::FuseJS::FileReaderImpl::New2();
    FuseJSUserEvents = ::g::FuseJS::UserEvents::New2();
    HelloUno = ::g::HelloUno::New2();
    ::g::Fuse::Controls::ClientPanel* temp = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::PageControl* temp1 = ::g::Fuse::Controls::PageControl::New4();
    ::g::Fabric::Login* temp2 = ::g::Fabric::Login::New4();
    ::g::Fabric::Create* temp3 = ::g::Fabric::Create::New4();
    ::g::Fabric::QueryC* temp4 = ::g::Fabric::QueryC::New4();
    ::g::Fabric::Cancel* temp5 = ::g::Fabric::Cancel::New4();
    ::g::Fabric::Sign* temp6 = ::g::Fabric::Sign::New4();
    ::g::Fabric::Complete* temp7 = ::g::Fabric::Complete::New4();
    ::g::Fabric::QueryM* temp8 = ::g::Fabric::QueryM::New4();
    ::g::Fabric::Money* temp9 = ::g::Fabric::Money::New4();
    temp->SourceLineNumber(2);
    temp->SourceFileName(::STRINGS[88/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->SourceLineNumber(4);
    temp1->SourceFileName(::STRINGS[88/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp2->SourceLineNumber(5);
    temp2->SourceFileName(::STRINGS[88/*"MainView.ux"*/]);
    temp3->SourceLineNumber(6);
    temp3->SourceFileName(::STRINGS[88/*"MainView.ux"*/]);
    temp4->SourceLineNumber(7);
    temp4->SourceFileName(::STRINGS[88/*"MainView.ux"*/]);
    temp5->SourceLineNumber(8);
    temp5->SourceFileName(::STRINGS[88/*"MainView.ux"*/]);
    temp6->SourceLineNumber(9);
    temp6->SourceFileName(::STRINGS[88/*"MainView.ux"*/]);
    temp7->SourceLineNumber(10);
    temp7->SourceFileName(::STRINGS[88/*"MainView.ux"*/]);
    temp8->SourceLineNumber(11);
    temp8->SourceFileName(::STRINGS[88/*"MainView.ux"*/]);
    temp9->SourceLineNumber(12);
    temp9->SourceFileName(::STRINGS[88/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
}

// public MainView New() [static] :134
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
