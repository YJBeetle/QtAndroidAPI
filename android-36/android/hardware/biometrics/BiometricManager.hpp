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
	inline jint BiometricManager::BIOMETRIC_ERROR_IDENTITY_CHECK_NOT_ACTIVE()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_IDENTITY_CHECK_NOT_ACTIVE"
		);
	}
	inline jint BiometricManager::BIOMETRIC_ERROR_NONE_ENROLLED()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_NONE_ENROLLED"
		);
	}
	inline jint BiometricManager::BIOMETRIC_ERROR_NOT_ENABLED_FOR_APPS()
	{
		return getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_NOT_ENABLED_FOR_APPS"
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
	inline jlong BiometricManager::BIOMETRIC_NO_AUTHENTICATION()
	{
		return getStaticField<jlong>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_NO_AUTHENTICATION"
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
	inline jlong BiometricManager::getLastAuthenticationTime(jint arg0) const
	{
		return callMethod<jlong>(
			"getLastAuthenticationTime",
			"(I)J",
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::biometrics;
#endif
