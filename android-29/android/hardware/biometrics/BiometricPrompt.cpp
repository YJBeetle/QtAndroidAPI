#include "./BiometricPrompt_AuthenticationCallback.hpp"
#include "./BiometricPrompt_CryptoObject.hpp"
#include "../../os/CancellationSignal.hpp"
#include "./BiometricPrompt.hpp"

namespace android::hardware::biometrics
{
	// Fields
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_GOOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_GOOD"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_IMAGER_DIRTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_IMAGER_DIRTY"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_INSUFFICIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_INSUFFICIENT"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_PARTIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_PARTIAL"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_TOO_FAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_TOO_FAST"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ACQUIRED_TOO_SLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ACQUIRED_TOO_SLOW"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_CANCELED"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_HW_NOT_PRESENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_HW_NOT_PRESENT"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_HW_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_HW_UNAVAILABLE"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_LOCKOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_LOCKOUT"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_LOCKOUT_PERMANENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_LOCKOUT_PERMANENT"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_NO_BIOMETRICS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_NO_BIOMETRICS"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_NO_DEVICE_CREDENTIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_NO_DEVICE_CREDENTIAL"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_NO_SPACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_NO_SPACE"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_TIMEOUT"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_UNABLE_TO_PROCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_UNABLE_TO_PROCESS"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_USER_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_USER_CANCELED"
		);
	}
	jint BiometricPrompt::BIOMETRIC_ERROR_VENDOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricPrompt",
			"BIOMETRIC_ERROR_VENDOR"
		);
	}
	
	BiometricPrompt::BiometricPrompt(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void BiometricPrompt::authenticate(android::os::CancellationSignal arg0, __JniBaseClass arg1, android::hardware::biometrics::BiometricPrompt_AuthenticationCallback arg2)
	{
		__thiz.callMethod<void>(
			"authenticate",
			"(Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/hardware/biometrics/BiometricPrompt$AuthenticationCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void BiometricPrompt::authenticate(android::hardware::biometrics::BiometricPrompt_CryptoObject arg0, android::os::CancellationSignal arg1, __JniBaseClass arg2, android::hardware::biometrics::BiometricPrompt_AuthenticationCallback arg3)
	{
		__thiz.callMethod<void>(
			"authenticate",
			"(Landroid/hardware/biometrics/BiometricPrompt$CryptoObject;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Landroid/hardware/biometrics/BiometricPrompt$AuthenticationCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
} // namespace android::hardware::biometrics

