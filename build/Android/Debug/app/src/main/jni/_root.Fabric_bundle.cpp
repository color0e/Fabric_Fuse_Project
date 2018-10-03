// This file was generated based on Fabric.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Fabric_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class Fabric_bundle :0
// {
// static Fabric_bundle() :0
static void Fabric_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    Fabric_bundle::fabricf6122971_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Fabric"*/]))->GetFile(::STRINGS[1/*"fabric-bfe6...*/]);
}

static void Fabric_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Fabric");
    ::STRINGS[1] = uString::Const("fabric-bfe65a58.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Fabric_bundle::fabricf6122971_, uFieldFlagsStatic);
}

uClassType* Fabric_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fabric_bundle", options);
    type->fp_build_ = Fabric_bundle_build;
    type->fp_cctor_ = Fabric_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> Fabric_bundle::fabricf6122971_;
// }

} // ::g
