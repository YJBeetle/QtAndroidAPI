#include "./BiometricManager.hpp"

namespace android::hardware::biometrics
{
	// Fields
	jint BiometricManager::BIOMETRIC_ERROR_HW_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_HW_UNAVAILABLE"
		);
	}
	jint BiometricManager::BIOMETRIC_ERROR_NONE_ENROLLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_NONE_ENROLLED"
		);
	}
	jint BiometricManager::BIOMETRIC_ERROR_NO_HARDWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_ERROR_NO_HARDWARE"
		);
	}
	jint BiometricManager::BIOMETRIC_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.biometrics.BiometricManager",
			"BIOMETRIC_SUCCESS"
		);
	}
	
	BiometricManager::BiometricManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint BiometricManager::canAuthenticate()
	{
		return __thiz.callMethod<jint>(
			"canAuthenticate",
			"()I"
		);
	}
} // namespace android::hardware::biometrics

