#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_SAVECALLBACK
#define ANDROID_SERVICE_AUTOFILL_SAVECALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class IntentSender;
}

namespace __jni_impl::android::service::autofill
{
	class SaveCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onSuccess(__jni_impl::android::content::IntentSender arg0);
		void onSuccess();
		void onFailure(jstring arg0);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../content/IntentSender.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void SaveCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.SaveCallback",
			"(V)V");
	}
	
	// Methods
	void SaveCallback::onSuccess(__jni_impl::android::content::IntentSender arg0)
	{
		__thiz.callMethod<void>(
			"onSuccess",
			"(Landroid/content/IntentSender;)V",
			arg0.__jniObject().object()
		);
	}
	void SaveCallback::onSuccess()
	{
		__thiz.callMethod<void>(
			"onSuccess",
			"()V"
		);
	}
	void SaveCallback::onFailure(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class SaveCallback : public __jni_impl::android::service::autofill::SaveCallback
	{
	public:
		SaveCallback(QAndroidJniObject obj) { __thiz = obj; }
		SaveCallback()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_SAVECALLBACK

