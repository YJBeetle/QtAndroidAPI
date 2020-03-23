#pragma once

#ifndef ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_AUTHENTICATIONRESULT
#define ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_AUTHENTICATIONRESULT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::fingerprint
{
	class FingerprintManager_CryptoObject;
}

namespace __jni_impl::android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getCryptoObject();
	};
} // namespace __jni_impl::android::hardware::fingerprint

#include "FingerprintManager_CryptoObject.hpp"

namespace __jni_impl::android::hardware::fingerprint
{
	// Fields
	
	// Constructors
	void FingerprintManager_AuthenticationResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.fingerprint.FingerprintManager$AuthenticationResult",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FingerprintManager_AuthenticationResult::getCryptoObject()
	{
		return __thiz.callObjectMethod(
			"getCryptoObject",
			"()Landroid/hardware/fingerprint/FingerprintManager$CryptoObject;");
	}
} // namespace __jni_impl::android::hardware::fingerprint

namespace android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationResult : public __jni_impl::android::hardware::fingerprint::FingerprintManager_AuthenticationResult
	{
	public:
		FingerprintManager_AuthenticationResult(QAndroidJniObject obj) { __thiz = obj; }
		FingerprintManager_AuthenticationResult()
		{
			__constructor();
		}
	};
} // namespace android::hardware::fingerprint

#endif // ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_AUTHENTICATIONRESULT

