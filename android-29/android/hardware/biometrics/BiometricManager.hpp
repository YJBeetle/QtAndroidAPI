#pragma once

#include "./BiometricManager.def.hpp"

namespace android::hardware::biometrics
{
	// Fields
	inline jint BiometricManager::BIOMETRIC_ERROR_HW_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_HW_UNAVAILABLE"
		);
	}
	inline jint BiometricManager::BIOMETRIC_ERROR_NONE_ENROLLED()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_NONE_ENROLLED"
		);
	}
	inline jint BiometricManager::BIOMETRIC_ERROR_NO_HARDWARE()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_NO_HARDWARE"
		);
	}
	inline jint BiometricManager::BIOMETRIC_SUCCESS()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_SUCCESS"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BiometricManager::canAuthenticate() const
	{
		return callMethod<jint>(
			"canAuthenticate",
			"()I"
		);
	}
} // namespace android::hardware::biometrics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::biometrics;
#endif
