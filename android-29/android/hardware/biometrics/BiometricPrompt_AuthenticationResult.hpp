#pragma once

#ifndef ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_AUTHENTICATIONRESULT
#define ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_AUTHENTICATIONRESULT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::biometrics
{
	class BiometricPrompt_CryptoObject;
}

namespace __jni_impl::android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getCryptoObject();
	};
} // namespace __jni_impl::android::hardware::biometrics

#include "BiometricPrompt_CryptoObject.hpp"

namespace __jni_impl::android::hardware::biometrics
{
	// Fields
	
	// Constructors
	void BiometricPrompt_AuthenticationResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.biometrics.BiometricPrompt$AuthenticationResult",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject BiometricPrompt_AuthenticationResult::getCryptoObject()
	{
		return __thiz.callObjectMethod(
			"getCryptoObject",
			"()Landroid/hardware/biometrics/BiometricPrompt$CryptoObject;"
		);
	}
} // namespace __jni_impl::android::hardware::biometrics

namespace android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationResult : public __jni_impl::android::hardware::biometrics::BiometricPrompt_AuthenticationResult
	{
	public:
		BiometricPrompt_AuthenticationResult(QAndroidJniObject obj) { __thiz = obj; }
		BiometricPrompt_AuthenticationResult()
		{
			__constructor();
		}
	};
} // namespace android::hardware::biometrics

#endif // ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_AUTHENTICATIONRESULT

