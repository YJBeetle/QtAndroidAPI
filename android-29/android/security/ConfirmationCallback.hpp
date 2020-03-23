#pragma once

#ifndef ANDROID_SECURITY_CONFIRMATIONCALLBACK
#define ANDROID_SECURITY_CONFIRMATIONCALLBACK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::security
{
	class ConfirmationCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onError(jthrowable arg0);
		void onConfirmed(jbyteArray arg0);
		void onDismissed();
		void onCanceled();
	};
} // namespace __jni_impl::android::security


namespace __jni_impl::android::security
{
	// Fields
	
	// Constructors
	void ConfirmationCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.ConfirmationCallback",
			"()V");
	}
	
	// Methods
	void ConfirmationCallback::onError(jthrowable arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void ConfirmationCallback::onConfirmed(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"onConfirmed",
			"([B)V",
			arg0);
	}
	void ConfirmationCallback::onDismissed()
	{
		__thiz.callMethod<void>(
			"onDismissed",
			"()V");
	}
	void ConfirmationCallback::onCanceled()
	{
		__thiz.callMethod<void>(
			"onCanceled",
			"()V");
	}
} // namespace __jni_impl::android::security

namespace android::security
{
	class ConfirmationCallback : public __jni_impl::android::security::ConfirmationCallback
	{
	public:
		ConfirmationCallback(QAndroidJniObject obj) { __thiz = obj; }
		ConfirmationCallback()
		{
			__constructor();
		}
	};
} // namespace android::security

#endif // ANDROID_SECURITY_CONFIRMATIONCALLBACK

