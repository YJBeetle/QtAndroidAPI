#pragma once

#include "./BiometricManager_Strings.def.hpp"
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
	inline jint BiometricManager::BIOMETRIC_ERROR_SECURITY_UPDATE_REQUIRED()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_SECURITY_UPDATE_REQUIRED"
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
	inline jint BiometricManager::canAuthenticate(jint arg0) const
	{
		return callMethod<jint>(
			"canAuthenticate",
			"(I)I",
			arg0
		);
	}
	inline android::hardware::biometrics::BiometricManager_Strings BiometricManager::getStrings(jint arg0) const
	{
		return callObjectMethod(
			"getStrings",
			"(I)Landroid/hardware/biometrics/BiometricManager$Strings;",
			arg0
		);
	}
} // namespace android::hardware::biometrics

// Base class headers

