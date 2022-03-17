#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Rect.def.hpp"

namespace android::graphics
{
	// Fields
	inline JObject Rect::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.Rect",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Rect::bottom()
	{
		return getField<jint>(
			"bottom"
		);
	}
	inline jint Rect::left()
	{
		return getField<jint>(
			"left"
		);
	}
	inline jint Rect::right()
	{
		return getField<jint>(
			"right"
		);
	}
	inline jint Rect::top()
	{
		return getField<jint>(
			"top"
		);
	}
	
	// Constructors
	inline Rect::Rect()
		: JObject(
			"android.graphics.Rect",
			"()V"
		) {}
	inline Rect::Rect(android::graphics::Rect &arg0)
		: JObject(
			"android.graphics.Rect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		) {}
	inline Rect::Rect(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.graphics.Rect",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jboolean Rect::intersects(android::graphics::Rect arg0, android::graphics::Rect arg1)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.Rect",
			"intersects",
			"(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::Rect Rect::unflattenFromString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Rect",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/graphics/Rect;",
			arg0.object<jstring>()
		);
	}
	inline jint Rect::centerX() const
	{
		return callMethod<jint>(
			"centerX",
			"()I"
		);
	}
	inline jint Rect::centerY() const
	{
		return callMethod<jint>(
			"centerY",
			"()I"
		);
	}
	inline jboolean Rect::contains(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean Rect::contains(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"contains",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Rect::contains(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"contains",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Rect::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Rect::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Rect::exactCenterX() const
	{
		return callMethod<jfloat>(
			"exactCenterX",
			"()F"
		);
	}
	inline jfloat Rect::exactCenterY() const
	{
		return callMethod<jfloat>(
			"exactCenterY",
			"()F"
		);
	}
	inline JString Rect::flattenToString() const
	{
		return callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		);
	}
	inline jint Rect::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint Rect::height() const
	{
		return callMethod<jint>(
			"height",
			"()I"
		);
	}
	inline void Rect::inset(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"inset",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jboolean Rect::intersect(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"intersect",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline jboolean Rect::intersect(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"intersect",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean Rect::intersects(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"intersects",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean Rect::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline void Rect::offset(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"offset",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Rect::offsetTo(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"offsetTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Rect::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void Rect::set(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void Rect::set(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"set",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Rect::setEmpty() const
	{
		callMethod<void>(
			"setEmpty",
			"()V"
		);
	}
	inline jboolean Rect::setIntersect(android::graphics::Rect arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jboolean>(
			"setIntersect",
			"(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Rect::sort() const
	{
		callMethod<void>(
			"sort",
			"()V"
		);
	}
	inline JString Rect::toShortString() const
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		);
	}
	inline JString Rect::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Rect::union_(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"union",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void Rect::union_(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"union",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Rect::union_(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"union",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Rect::width() const
	{
		return callMethod<jint>(
			"width",
			"()I"
		);
	}
	inline void Rect::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
