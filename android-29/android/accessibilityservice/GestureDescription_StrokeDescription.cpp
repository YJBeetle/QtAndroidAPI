#include "../graphics/Path.hpp"
#include "./GestureDescription_StrokeDescription.hpp"

namespace android::accessibilityservice
{
	// Fields
	
	GestureDescription_StrokeDescription::GestureDescription_StrokeDescription(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GestureDescription_StrokeDescription::GestureDescription_StrokeDescription(android::graphics::Path arg0, jlong arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.GestureDescription$StrokeDescription",
			"(Landroid/graphics/Path;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	GestureDescription_StrokeDescription::GestureDescription_StrokeDescription(android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.GestureDescription$StrokeDescription",
			"(Landroid/graphics/Path;JJZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject GestureDescription_StrokeDescription::continueStroke(android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"continueStroke",
			"(Landroid/graphics/Path;JJZ)Landroid/accessibilityservice/GestureDescription$StrokeDescription;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jlong GestureDescription_StrokeDescription::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	QAndroidJniObject GestureDescription_StrokeDescription::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Landroid/graphics/Path;"
		);
	}
	jlong GestureDescription_StrokeDescription::getStartTime()
	{
		return __thiz.callMethod<jlong>(
			"getStartTime",
			"()J"
		);
	}
	jboolean GestureDescription_StrokeDescription::willContinue()
	{
		return __thiz.callMethod<jboolean>(
			"willContinue",
			"()Z"
		);
	}
} // namespace android::accessibilityservice

