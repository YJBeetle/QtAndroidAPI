#pragma once

#include "./Rect.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RectF.def.hpp"

namespace android::graphics
{
	// Fields
	inline JObject RectF::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.RectF",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jfloat RectF::bottom()
	{
		return getField<jfloat>(
			"bottom"
		);
	}
	inline jfloat RectF::left()
	{
		return getField<jfloat>(
			"left"
		);
	}
	inline jfloat RectF::right()
	{
		return getField<jfloat>(
			"right"
		);
	}
	inline jfloat RectF::top()
	{
		return getField<jfloat>(
			"top"
		);
	}
	
	// Constructors
	inline RectF::RectF()
		: JObject(
			"android.graphics.RectF",
			"()V"
		) {}
	inline RectF::RectF(android::graphics::Rect arg0)
		: JObject(
			"android.graphics.RectF",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		) {}
	inline RectF::RectF(android::graphics::RectF &arg0)
		: JObject(
			"android.graphics.RectF",
			"(Landroid/graphics/RectF;)V",
			arg0.object()
		) {}
	inline RectF::RectF(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: JObject(
			"android.graphics.RectF",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jboolean RectF::intersects(android::graphics::RectF arg0, android::graphics::RectF arg1)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.RectF",
			"intersects",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jfloat RectF::centerX() const
	{
		return callMethod<jfloat>(
			"centerX",
			"()F"
		);
	}
	inline jfloat RectF::centerY() const
	{
		return callMethod<jfloat>(
			"centerY",
			"()F"
		);
	}
	inline jboolean RectF::contains(android::graphics::RectF arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	inline jboolean RectF::contains(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"contains",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jboolean RectF::contains(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"contains",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jint RectF::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RectF::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint RectF::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jfloat RectF::height() const
	{
		return callMethod<jfloat>(
			"height",
			"()F"
		);
	}
	inline void RectF::inset(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"inset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline jboolean RectF::intersect(android::graphics::RectF arg0) const
	{
		return callMethod<jboolean>(
			"intersect",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	inline jboolean RectF::intersect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"intersect",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean RectF::intersects(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"intersects",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean RectF::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline void RectF::offset(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void RectF::offsetTo(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"offsetTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void RectF::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void RectF::round(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"round",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void RectF::roundOut(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"roundOut",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void RectF::set(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void RectF::set(android::graphics::RectF arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/RectF;)V",
			arg0.object()
		);
	}
	inline void RectF::set(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"set",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void RectF::setEmpty() const
	{
		callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	inline jboolean RectF::setIntersect(android::graphics::RectF arg0, android::graphics::RectF arg1) const
	{
		return callMethod<jboolean>(
			"setIntersect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RectF::sort() const
	{
		callMethod<void>(
			"sort",
			"()V"
		);
	}
	inline JString RectF::toShortString() const
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		);
	}
	inline JString RectF::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RectF::union_(android::graphics::RectF arg0) const
	{
		callMethod<void>(
			"union",
			"(Landroid/graphics/RectF;)V",
			arg0.object()
		);
	}
	inline void RectF::union_(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"union",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void RectF::union_(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"union",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jfloat RectF::width() const
	{
		return callMethod<jfloat>(
			"width",
			"()F"
		);
	}
	inline void RectF::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
