// This file was generated based on Fabric.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{struct Fabric_bundle;}

namespace g{

// public static generated class Fabric_bundle :0
// {
uClassType* Fabric_bundle_typeof();

struct Fabric_bundle : uObject
{
    static uSStrong< ::g::Uno::IO::BundleFile*> fabricf6122971_;
    static uSStrong< ::g::Uno::IO::BundleFile*>& fabricf6122971() { return Fabric_bundle_typeof()->Init(), fabricf6122971_; }
};
// }

} // ::g
