#pragma once

#ifndef ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_STROKEDESCRIPTION
#define ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_STROKEDESCRIPTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Path;
}

namespace __jni_impl::android::accessibilityservice
{
	class GestureDescription_StrokeDescription : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::Path arg0, jlong arg1, jlong arg2);
		void __constructor(__jni_impl::android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3);
		
		// Methods
		QAndroidJniObject continueStroke(__jni_impl::android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3);
		jlong getDuration();
		QAndroidJniObject getPath();
		jlong getStartTime();
		jboolean willContinue();
	};
} // namespace __jni_impl::android::accessibilityservice

#include "../graphics/Path.hpp"

namespace __jni_impl::android::accessibilityservice
{
	// Fields
	
	// Constructors
	void GestureDescription_StrokeDescription::__constructor(__jni_impl::android::graphics::Path arg0, jlong arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.GestureDescription$StrokeDescription",
			"(Landroid/graphics/Path;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void GestureDescription_StrokeDescription::__constructor(__jni_impl::android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3)
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
	QAndroidJniObject GestureDescription_StrokeDescription::continueStroke(__jni_impl::android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3)
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
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class GestureDescription_StrokeDescription : public __jni_impl::android::accessibilityservice::GestureDescription_StrokeDescription
	{
	public:
		GestureDescription_StrokeDescription(QAndroidJniObject obj) { __thiz = obj; }
		GestureDescription_StrokeDescription(__jni_impl::android::graphics::Path arg0, jlong arg1, jlong arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		GestureDescription_StrokeDescription(__jni_impl::android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::accessibilityservice

#endif // ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_STROKEDESCRIPTION

