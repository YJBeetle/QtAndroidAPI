#pragma once

#include "./GestureDescription_StrokeDescription.def.hpp"
#include "./GestureDescription.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jlong GestureDescription::getMaxGestureDuration()
	{
		return callStaticMethod<jlong>(
			"android.accessibilityservice.GestureDescription",
			"getMaxGestureDuration",
			"()J"
		);
	}
	inline jint GestureDescription::getMaxStrokeCount()
	{
		return callStaticMethod<jint>(
			"android.accessibilityservice.GestureDescription",
			"getMaxStrokeCount",
			"()I"
		);
	}
	inline android::accessibilityservice::GestureDescription_StrokeDescription GestureDescription::getStroke(jint arg0) const
	{
		return callObjectMethod(
			"getStroke",
			"(I)Landroid/accessibilityservice/GestureDescription$StrokeDescription;",
			arg0
		);
	}
	inline jint GestureDescription::getStrokeCount() const
	{
		return callMethod<jint>(
			"getStrokeCount",
			"()I"
		);
	}
} // namespace android::accessibilityservice

// Base class headers

