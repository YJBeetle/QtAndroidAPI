#pragma once

#include "./Path.def.hpp"
#include "./Rect.def.hpp"
#include "./Region_Op.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Region.def.hpp"

namespace android::graphics
{
	// Fields
	inline JObject Region::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.Region",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline Region::Region()
		: JObject(
			"android.graphics.Region",
			"()V"
		) {}
	inline Region::Region(android::graphics::Rect arg0)
		: JObject(
			"android.graphics.Region",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		) {}
	inline Region::Region(android::graphics::Region &arg0)
		: JObject(
			"android.graphics.Region",
			"(Landroid/graphics/Region;)V",
			arg0.object()
		) {}
	inline Region::Region(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.graphics.Region",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jboolean Region::contains(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jint Region::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Region::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::Path Region::getBoundaryPath() const
	{
		return callObjectMethod(
			"getBoundaryPath",
			"()Landroid/graphics/Path;"
		);
	}
	inline jboolean Region::getBoundaryPath(android::graphics::Path arg0) const
	{
		return callMethod<jboolean>(
			"getBoundaryPath",
			"(Landroid/graphics/Path;)Z",
			arg0.object()
		);
	}
	inline android::graphics::Rect Region::getBounds() const
	{
		return callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	inline jboolean Region::getBounds(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getBounds",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean Region::isComplex() const
	{
		return callMethod<jboolean>(
			"isComplex",
			"()Z"
		);
	}
	inline jboolean Region::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline jboolean Region::isRect() const
	{
		return callMethod<jboolean>(
			"isRect",
			"()Z"
		);
	}
	inline jboolean Region::op(android::graphics::Rect arg0, android::graphics::Region_Op arg1) const
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Rect;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Region::op(android::graphics::Region arg0, android::graphics::Region_Op arg1) const
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Region::op(android::graphics::Rect arg0, android::graphics::Region arg1, android::graphics::Region_Op arg2) const
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Rect;Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean Region::op(android::graphics::Region arg0, android::graphics::Region arg1, android::graphics::Region_Op arg2) const
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Region;Landroid/graphics/Region;Landroid/graphics/Region$Op;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean Region::op(jint arg0, jint arg1, jint arg2, jint arg3, android::graphics::Region_Op arg4) const
	{
		return callMethod<jboolean>(
			"op",
			"(IIIILandroid/graphics/Region$Op;)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline jboolean Region::quickContains(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"quickContains",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean Region::quickContains(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"quickContains",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean Region::quickReject(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean Region::quickReject(android::graphics::Region arg0) const
	{
		return callMethod<jboolean>(
			"quickReject",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	inline jboolean Region::quickReject(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"quickReject",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean Region::set(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"set",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean Region::set(android::graphics::Region arg0) const
	{
		return callMethod<jboolean>(
			"set",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	inline jboolean Region::set(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"set",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Region::setEmpty() const
	{
		callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	inline jboolean Region::setPath(android::graphics::Path arg0, android::graphics::Region arg1) const
	{
		return callMethod<jboolean>(
			"setPath",
			"(Landroid/graphics/Path;Landroid/graphics/Region;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString Region::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Region::translate(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"translate",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Region::translate(jint arg0, jint arg1, android::graphics::Region arg2) const
	{
		callMethod<void>(
			"translate",
			"(IILandroid/graphics/Region;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean Region::union_(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"union",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline void Region::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
