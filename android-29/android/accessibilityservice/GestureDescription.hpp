#pragma once

#ifndef ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION
#define ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::accessibilityservice
{
	class GestureDescription_StrokeDescription;
}

namespace __jni_impl::android::accessibilityservice
{
	class GestureDescription : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jlong getMaxGestureDuration();
		static jint getMaxStrokeCount();
		QAndroidJniObject getStroke(jint arg0);
		jint getStrokeCount();
	};
} // namespace __jni_impl::android::accessibilityservice

#include "GestureDescription_StrokeDescription.hpp"

namespace __jni_impl::android::accessibilityservice
{
	// Fields
	
	// Constructors
	void GestureDescription::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accessibilityservice.GestureDescription",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::accessibilityservice

namespace android::accessibilityservice
{
	class GestureDescription : public __jni_impl::android::accessibilityservice::GestureDescription
	{
	public:
		GestureDescription(QAndroidJniObject obj) { __thiz = obj; }
		GestureDescription()
		{
			__constructor();
		}
	};
} // namespace android::accessibilityservice

#endif // ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION

