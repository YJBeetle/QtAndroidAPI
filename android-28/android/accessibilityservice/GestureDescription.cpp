#include "./GestureDescription_StrokeDescription.hpp"
#include "./GestureDescription.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	// QJniObject forward
	GestureDescription::GestureDescription(QJniObject obj) : JObject(obj) {}
	
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
	android::accessibilityservice::GestureDescription_StrokeDescription GestureDescription::getStroke(jint arg0)
	{
		return callObjectMethod(
			"getStroke",
			"(I)Landroid/accessibilityservice/GestureDescription$StrokeDescription;",
			arg0
		);
	}
	jint GestureDescription::getStrokeCount()
	{
		return callMethod<jint>(
			"getStrokeCount",
			"()I"
		);
	}
} // namespace android::accessibilityservice

