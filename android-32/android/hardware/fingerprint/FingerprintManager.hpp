#pragma once

#include "./FingerprintManager_AuthenticationCallback.def.hpp"
#include "./FingerprintManager_CryptoObject.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "../../os/Handler.def.hpp"
#include "./FingerprintManager.def.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	inline jint FingerprintManager::FINGERPRINT_ACQUIRED_GOOD()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_GOOD"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ACQUIRED_IMAGER_DIRTY()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_IMAGER_DIRTY"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ACQUIRED_INSUFFICIENT()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_INSUFFICIENT"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ACQUIRED_PARTIAL()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_PARTIAL"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ACQUIRED_TOO_FAST()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_TOO_FAST"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ACQUIRED_TOO_SLOW()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ACQUIRED_TOO_SLOW"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ERROR_CANCELED()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_CANCELED"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ERROR_HW_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_HW_NOT_PRESENT"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ERROR_HW_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_HW_UNAVAILABLE"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ERROR_LOCKOUT()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_LOCKOUT"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ERROR_LOCKOUT_PERMANENT()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_LOCKOUT_PERMANENT"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ERROR_NO_FINGERPRINTS()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_NO_FINGERPRINTS"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ERROR_NO_SPACE()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_NO_SPACE"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ERROR_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_TIMEOUT"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ERROR_UNABLE_TO_PROCESS()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_UNABLE_TO_PROCESS"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ERROR_USER_CANCELED()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_USER_CANCELED"
		);
	}
	inline jint FingerprintManager::FINGERPRINT_ERROR_VENDOR()
	{
		return getStaticField<jint>(
			"android.hardware.fingerprint.FingerprintManager",
			"FINGERPRINT_ERROR_VENDOR"
		);
	}
	
	// Constructors
	
	// Methods
	inline void FingerprintManager::authenticate(android::hardware::fingerprint::FingerprintManager_CryptoObject arg0, android::os::CancellationSignal arg1, jint arg2, android::hardware::fingerprint::FingerprintManager_AuthenticationCallback arg3, android::os::Handler arg4) const
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
	inline jboolean FingerprintManager::hasEnrolledFingerprints() const
	{
		return callMethod<jboolean>(
			"hasEnrolledFingerprints",
			"()Z"
		);
	}
	inline jboolean FingerprintManager::isHardwareDetected() const
	{
		return callMethod<jboolean>(
			"isHardwareDetected",
			"()Z"
		);
	}
} // namespace android::hardware::fingerprint

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::fingerprint;
#endif
