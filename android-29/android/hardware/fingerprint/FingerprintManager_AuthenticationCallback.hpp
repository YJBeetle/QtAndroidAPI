#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationResult;
}

namespace __jni_impl::android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAuthenticationError(jint arg0, jstring arg1);
		void onAuthenticationError(jint arg0, const QString &arg1);
		void onAuthenticationFailed();
		void onAuthenticationHelp(jint arg0, jstring arg1);
		void onAuthenticationHelp(jint arg0, const QString &arg1);
		void onAuthenticationSucceeded(__jni_impl::android::hardware::fingerprint::FingerprintManager_AuthenticationResult arg0);
	};
} // namespace __jni_impl::android::hardware::fingerprint

#include "FingerprintManager_AuthenticationResult.hpp"

namespace __jni_impl::android::hardware::fingerprint
{
	// Fields
	
	// Constructors
	void FingerprintManager_AuthenticationCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.fingerprint.FingerprintManager$AuthenticationCallback",
			"()V"
		);
	}
	
	// Methods
	void FingerprintManager_AuthenticationCallback::onAuthenticationError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationError",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationError(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationError",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationFailed()
	{
		__thiz.callMethod<void>(
			"onAuthenticationFailed",
			"()V"
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationHelp(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationHelp",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationHelp(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onAuthenticationHelp",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void FingerprintManager_AuthenticationCallback::onAuthenticationSucceeded(__jni_impl::android::hardware::fingerprint::FingerprintManager_AuthenticationResult arg0)
	{
		__thiz.callMethod<void>(
			"onAuthenticationSucceeded",
			"(Landroid/hardware/fingerprint/FingerprintManager$AuthenticationResult;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::hardware::fingerprint

namespace android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationCallback : public __jni_impl::android::hardware::fingerprint::FingerprintManager_AuthenticationCallback
	{
	public:
		FingerprintManager_AuthenticationCallback(QAndroidJniObject obj) { __thiz = obj; }
		FingerprintManager_AuthenticationCallback()
		{
			__constructor();
		}
	};
} // namespace android::hardware::fingerprint

