#pragma once

#ifndef ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_AUTHENTICATIONCALLBACK
#define ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_AUTHENTICATIONCALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationResult;
}

namespace __jni_impl::android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAuthenticationError(jint arg0, jstring arg1);
		void onAuthenticationHelp(jint arg0, jstring arg1);
		void onAuthenticationSucceeded(__jni_impl::android::hardware::biometrics::BiometricPrompt_AuthenticationResult arg0);
		void onAuthenticationFailed();
	};
} // namespace __jni_impl::android::hardware::biometrics

#include "BiometricPrompt_AuthenticationResult.hpp"

namespace __jni_impl::android::hardware::biometrics
{
	// Fields
	
	// Constructors
	void BiometricPrompt_AuthenticationCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.biometrics.BiometricPrompt$AuthenticationCallback",
			"()V");
	}
	
	// Methods
	void BiometricPrompt_AuthenticationCallback::onAuthenticationError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationError",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1);
	}
	void BiometricPrompt_AuthenticationCallback::onAuthenticationHelp(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationHelp",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1);
	}
	void BiometricPrompt_AuthenticationCallback::onAuthenticationSucceeded(__jni_impl::android::hardware::biometrics::BiometricPrompt_AuthenticationResult arg0)
	{
		__thiz.callMethod<void>(
			"onAuthenticationSucceeded",
			"(Landroid/hardware/biometrics/BiometricPrompt$AuthenticationResult;)V",
			arg0.__jniObject().object());
	}
	void BiometricPrompt_AuthenticationCallback::onAuthenticationFailed()
	{
		__thiz.callMethod<void>(
			"onAuthenticationFailed",
			"()V");
	}
} // namespace __jni_impl::android::hardware::biometrics

namespace android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationCallback : public __jni_impl::android::hardware::biometrics::BiometricPrompt_AuthenticationCallback
	{
	public:
		BiometricPrompt_AuthenticationCallback(QAndroidJniObject obj) { __thiz = obj; }
		BiometricPrompt_AuthenticationCallback()
		{
			__constructor();
		}
	};
} // namespace android::hardware::biometrics

#endif // ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_AUTHENTICATIONCALLBACK

