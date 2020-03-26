#pragma once

#ifndef ANDROID_APP_INSTRUMENTATION_ACTIVITYRESULT
#define ANDROID_APP_INSTRUMENTATION_ACTIVITYRESULT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::app
{
	class Instrumentation_ActivityResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::android::content::Intent arg1);
		
		// Methods
		jint getResultCode();
		QAndroidJniObject getResultData();
	};
} // namespace __jni_impl::android::app

#include "../content/Intent.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Instrumentation_ActivityResult::__constructor(jint arg0, __jni_impl::android::content::Intent arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.Instrumentation$ActivityResult",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	jint Instrumentation_ActivityResult::getResultCode()
	{
		return __thiz.callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	QAndroidJniObject Instrumentation_ActivityResult::getResultData()
	{
		return __thiz.callObjectMethod(
			"getResultData",
			"()Landroid/content/Intent;"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Instrumentation_ActivityResult : public __jni_impl::android::app::Instrumentation_ActivityResult
	{
	public:
		Instrumentation_ActivityResult(QAndroidJniObject obj) { __thiz = obj; }
		Instrumentation_ActivityResult(jint arg0, __jni_impl::android::content::Intent arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_INSTRUMENTATION_ACTIVITYRESULT

