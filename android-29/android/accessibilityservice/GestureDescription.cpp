#include "./GestureDescription_StrokeDescription.hpp"
#include "./GestureDescription.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	GestureDescription::GestureDescription(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jlong GestureDescription::getMaxGestureDuration()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.accessibilityservice.GestureDescription",
			"getMaxGestureDuration",
			"()J"
		);
	}
	jint GestureDescription::getMaxStrokeCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.accessibilityservice.GestureDescription",
			"getMaxStrokeCount",
			"()I"
		);
	}
	QAndroidJniObject GestureDescription::getStroke(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getStroke",
			"(I)Landroid/accessibilityservice/GestureDescription$StrokeDescription;",
			arg0
		);
	}
	jint GestureDescription::getStrokeCount()
	{
		return __thiz.callMethod<jint>(
			"getStrokeCount",
			"()I"
		);
	}
} // namespace android::accessibilityservice

