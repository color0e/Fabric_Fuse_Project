// This file was generated based on '../../AppData/Local/Fusetools/Packages/Fuse.Controls.ScrollView/1.9.0/Triggers/ScrollRegion.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public static class IScrolledLengths :13
// {
uClassType* IScrolledLengths_typeof();

struct IScrolledLengths : uObject
{
    static uSStrong<uObject*> Points_;
    static uSStrong<uObject*>& Points() { return IScrolledLengths_typeof()->Init(), Points_; }
    static uSStrong<uObject*> Pixels_;
    static uSStrong<uObject*>& Pixels() { return IScrolledLengths_typeof()->Init(), Pixels_; }
    static uSStrong<uObject*> ContentSize_;
    static uSStrong<uObject*>& ContentSize() { return IScrolledLengths_typeof()->Init(), ContentSize_; }
    static uSStrong<uObject*> ScrollViewSize_;
    static uSStrong<uObject*>& ScrollViewSize() { return IScrolledLengths_typeof()->Init(), ScrollViewSize_; }
};
// }

}}} // ::g::Fuse::Triggers
