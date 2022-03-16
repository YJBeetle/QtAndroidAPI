#include "../graphics/Path.hpp"
#include "./GestureDescription_StrokeDescription.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	GestureDescription_StrokeDescription::GestureDescription_StrokeDescription(android::graphics::Path arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.accessibilityservice.GestureDescription$StrokeDescription",
			"(Landroid/graphics/Path;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	GestureDescription_StrokeDescription::GestureDescription_StrokeDescription(android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3)
		: JObject(
			"android.accessibilityservice.GestureDescription$StrokeDescription",
			"(Landroid/graphics/Path;JJZ)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	android::accessibilityservice::GestureDescription_StrokeDescription GestureDescription_StrokeDescription::continueStroke(android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3) const
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
	jlong GestureDescription_StrokeDescription::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	android::graphics::Path GestureDescription_StrokeDescription::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Landroid/graphics/Path;"
		);
	}
	jlong GestureDescription_StrokeDescription::getStartTime() const
	{
		return callMethod<jlong>(
			"getStartTime",
			"()J"
		);
	}
	jboolean GestureDescription_StrokeDescription::willContinue() const
	{
		return callMethod<jboolean>(
			"willContinue",
			"()Z"
		);
	}
} // namespace android::accessibilityservice

