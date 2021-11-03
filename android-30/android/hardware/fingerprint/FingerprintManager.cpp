#include "./FingerprintManager_AuthenticationCallback.hpp"
#include "./FingerprintManager_CryptoObject.hpp"
#include "../../os/CancellationSignal.hpp"
#include "../../os/Handler.hpp"
#include "./FingerprintManager.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	jint FingerprintManager::FINGERPRINT_ACQUIRED_GOOD()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_GOOD"
		);
	}
	jint FingerprintManager::FINGERPRINT_ACQUIRED_IMAGER_DIRTY()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_IMAGER_DIRTY"
		);
	}
	jint FingerprintManager::FINGERPRINT_ACQUIRED_INSUFFICIENT()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_INSUFFICIENT"
		);
	}
	jint FingerprintManager::FINGERPRINT_ACQUIRED_PARTIAL()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_PARTIAL"
		);
	}
	jint FingerprintManager::FINGERPRINT_ACQUIRED_TOO_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_TOO_FAST"
		);
	}
	jint FingerprintManager::FINGERPRINT_ACQUIRED_TOO_SLOW()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_TOO_SLOW"
		);
	}
	jint FingerprintManager::FINGERPRINT_ERROR_CANCELED()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_CANCELED"
		);
	}
	jint FingerprintManager::FINGERPRINT_ERROR_HW_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_HW_NOT_PRESENT"
		);
	}
	jint FingerprintManager::FINGERPRINT_ERROR_HW_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_HW_UNAVAILABLE"
		);
	}
	jint FingerprintManager::FINGERPRINT_ERROR_LOCKOUT()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_LOCKOUT"
		);
	}
	jint FingerprintManager::FINGERPRINT_ERROR_LOCKOUT_PERMANENT()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_LOCKOUT_PERMANENT"
		);
	}
	jint FingerprintManager::FINGERPRINT_ERROR_NO_FINGERPRINTS()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_NO_FINGERPRINTS"
		);
	}
	jint FingerprintManager::FINGERPRINT_ERROR_NO_SPACE()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_NO_SPACE"
		);
	}
	jint FingerprintManager::FINGERPRINT_ERROR_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_TIMEOUT"
		);
	}
	jint FingerprintManager::FINGERPRINT_ERROR_UNABLE_TO_PROCESS()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_UNABLE_TO_PROCESS"
		);
	}
	jint FingerprintManager::FINGERPRINT_ERROR_USER_CANCELED()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_USER_CANCELED"
		);
	}
	jint FingerprintManager::FINGERPRINT_ERROR_VENDOR()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_VENDOR"
		);
	}
	
	// QAndroidJniObject forward
	FingerprintManager::FingerprintManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void FingerprintManager::authenticate(android::hardware::fingerprint::FingerprintManager_CryptoObject arg0, android::os::CancellationSignal arg1, jint arg2, android::hardware::fingerprint::FingerprintManager_AuthenticationCallback arg3, android::os::Handler arg4)
	{
		callMethod<void>(
			"authenticate",
			"(Landroid/hardware/fingerprint/FingerprintManager$CryptoObject;Landroid/os/CancellationSignal;ILandroid/hardware/fingerprint/FingerprintManager$AuthenticationCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	jboolean FingerprintManager::hasEnrolledFingerprints()
	{
		return callMethod<jboolean>(
			"hasEnrolledFingerprints",
			"()Z"
		);
	}
	jboolean FingerprintManager::isHardwareDetected()
	{
		return callMethod<jboolean>(
			"isHardwareDetected",
			"()Z"
		);
	}
} // namespace android::hardware::fingerprint

