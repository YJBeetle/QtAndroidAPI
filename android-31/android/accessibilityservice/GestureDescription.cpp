#include "./GestureDescription_StrokeDescription.hpp"
#include "./GestureDescription.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// Constructors
	
	// Methods
	jlong GestureDescription::getMaxGestureDuration()
	{
		return callStaticMethod<jlong>(
			"android.accessibilityservice.GestureDescription",
			"getMaxGestureDuration",
			"()J"
		);
	}
	jint GestureDescription::getMaxStrokeCount()
	{
		return callStaticMethod<jint>(
			"android.accessibilityservice.GestureDescription",
			"getMaxStrokeCount",
			"()I"
		);
	}
	jint GestureDescription::getDisplayId() const
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	android::accessibilityservice::GestureDescription_StrokeDescription GestureDescription::getStroke(jint arg0) const
	{
		return callObjectMethod(
			"getStroke",
			"(I)Landroid/accessibilityservice/GestureDescription$StrokeDescription;",
			arg0
		);
	}
	jint GestureDescription::getStrokeCount() const
	{
		return callMethod<jint>(
			"getStrokeCount",
			"()I"
		);
	}
} // namespace android::accessibilityservice

