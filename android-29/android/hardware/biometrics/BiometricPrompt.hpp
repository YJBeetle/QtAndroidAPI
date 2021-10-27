#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::biometrics
{
	class BiometricPrompt_AuthenticationCallback;
}
namespace android::hardware::biometrics
{
	class BiometricPrompt_CryptoObject;
}
namespace android::os
{
	class CancellationSignal;
}

namespace android::hardware::biometrics
{
	class BiometricPrompt : public __JniBaseClass
	{
	public:
		// Fields
		static jint BIOMETRIC_ACQUIRED_GOOD();
		static jint BIOMETRIC_ACQUIRED_IMAGER_DIRTY();
		static jint BIOMETRIC_ACQUIRED_INSUFFICIENT();
		static jint BIOMETRIC_ACQUIRED_PARTIAL();
		static jint BIOMETRIC_ACQUIRED_TOO_FAST();
		static jint BIOMETRIC_ACQUIRED_TOO_SLOW();
		static jint BIOMETRIC_ERROR_CANCELED();
		static jint BIOMETRIC_ERROR_HW_NOT_PRESENT();
		static jint BIOMETRIC_ERROR_HW_UNAVAILABLE();
		static jint BIOMETRIC_ERROR_LOCKOUT();
		static jint BIOMETRIC_ERROR_LOCKOUT_PERMANENT();
		static jint BIOMETRIC_ERROR_NO_BIOMETRICS();
		static jint BIOMETRIC_ERROR_NO_DEVICE_CREDENTIAL();
		static jint BIOMETRIC_ERROR_NO_SPACE();
		static jint BIOMETRIC_ERROR_TIMEOUT();
		static jint BIOMETRIC_ERROR_UNABLE_TO_PROCESS();
		static jint BIOMETRIC_ERROR_USER_CANCELED();
		static jint BIOMETRIC_ERROR_VENDOR();
		
		BiometricPrompt(QAndroidJniObject obj);
		// Constructors
		BiometricPrompt() = default;
		
		// Methods
		void authenticate(android::os::CancellationSignal arg0, __JniBaseClass arg1, android::hardware::biometrics::BiometricPrompt_AuthenticationCallback arg2);
		void authenticate(android::hardware::biometrics::BiometricPrompt_CryptoObject arg0, android::os::CancellationSignal arg1, __JniBaseClass arg2, android::hardware::biometrics::BiometricPrompt_AuthenticationCallback arg3);
	};
} // namespace android::hardware::biometrics

