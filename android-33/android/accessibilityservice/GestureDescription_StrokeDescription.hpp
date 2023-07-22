#pragma once

#include "../graphics/Path.def.hpp"
#include "./GestureDescription_StrokeDescription.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	inline GestureDescription_StrokeDescription::GestureDescription_StrokeDescription(android::graphics::Path arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.accessibilityservice.GestureDescription$StrokeDescription",
			"(Landroid/graphics/Path;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline GestureDescription_StrokeDescription::GestureDescription_StrokeDescription(android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3)
		: JObject(
			"android.accessibilityservice.GestureDescription$StrokeDescription",
			"(Landroid/graphics/Path;JJZ)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::accessibilityservice::GestureDescription_StrokeDescription GestureDescription_StrokeDescription::continueStroke(android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3) const
	{
		return callObjectMethod(
			"continueStroke",
			"(Landroid/graphics/Path;JJZ)Landroid/accessibilityservice/GestureDescription$StrokeDescription;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jlong GestureDescription_StrokeDescription::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	inline android::graphics::Path GestureDescription_StrokeDescription::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Landroid/graphics/Path;"
		);
	}
	inline jlong GestureDescription_StrokeDescription::getStartTime() const
	{
		return callMethod<jlong>(
			"getStartTime",
			"()J"
		);
	}
	inline jboolean GestureDescription_StrokeDescription::willContinue() const
	{
		return callMethod<jboolean>(
			"willContinue",
			"()Z"
		);
	}
} // namespace android::accessibilityservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accessibilityservice;
#endif
