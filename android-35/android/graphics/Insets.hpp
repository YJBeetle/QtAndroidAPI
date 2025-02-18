#pragma once

#include "./Rect.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Insets.def.hpp"

namespace android::graphics
{
	// Fields
	inline JObject Insets::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.Insets",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::graphics::Insets Insets::NONE()
	{
		return getStaticObjectField(
			"android.graphics.Insets",
			"NONE",
			"Landroid/graphics/Insets;"
		);
	}
	inline jint Insets::bottom()
	{
		return getField<jint>(
			"bottom"
		);
	}
	inline jint Insets::left()
	{
		return getField<jint>(
			"left"
		);
	}
	inline jint Insets::right()
	{
		return getField<jint>(
			"right"
		);
	}
	inline jint Insets::top()
	{
		return getField<jint>(
			"top"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::graphics::Insets Insets::add(android::graphics::Insets arg0, android::graphics::Insets arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Insets",
			"add",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::Insets Insets::max(android::graphics::Insets arg0, android::graphics::Insets arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Insets",
			"max",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::Insets Insets::min(android::graphics::Insets arg0, android::graphics::Insets arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Insets",
			"min",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::graphics::Insets Insets::of(android::graphics::Rect arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Insets",
			"of",
			"(Landroid/graphics/Rect;)Landroid/graphics/Insets;",
			arg0.object()
		);
	}
	inline android::graphics::Insets Insets::of(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.Insets",
			"of",
			"(IIII)Landroid/graphics/Insets;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline android::graphics::Insets Insets::subtract(android::graphics::Insets arg0, android::graphics::Insets arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.Insets",
			"subtract",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint Insets::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Insets::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Insets::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Insets::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Insets::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
