#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./AccessibilityGestureEvent.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	inline JObject AccessibilityGestureEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.accessibilityservice.AccessibilityGestureEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString AccessibilityGestureEvent::gestureIdToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.accessibilityservice.AccessibilityGestureEvent",
			"gestureIdToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint AccessibilityGestureEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint AccessibilityGestureEvent::getDisplayId() const
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	inline jint AccessibilityGestureEvent::getGestureId() const
	{
		return callMethod<jint>(
			"getGestureId",
			"()I"
		);
	}
	inline JObject AccessibilityGestureEvent::getMotionEvents() const
	{
		return callObjectMethod(
			"getMotionEvents",
			"()Ljava/util/List;"
		);
	}
	inline JString AccessibilityGestureEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AccessibilityGestureEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accessibilityservice

// Base class headers

