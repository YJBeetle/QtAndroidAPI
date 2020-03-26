#pragma once

#ifndef ANDROID_HARDWARE_BIOMETRICS_BIOMETRICMANAGER
#define ANDROID_HARDWARE_BIOMETRICS_BIOMETRICMANAGER

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::biometrics
{
	class BiometricManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint BIOMETRIC_ERROR_HW_UNAVAILABLE();
		static jint BIOMETRIC_ERROR_NONE_ENROLLED();
		static jint BIOMETRIC_ERROR_NO_HARDWARE();
		static jint BIOMETRIC_SUCCESS();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint canAuthenticate();
	};
} // namespace __jni_impl::android::hardware::biometrics


namespace __jni_impl::android::hardware::biometrics
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
	
	// Constructors
	void BiometricManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.biometrics.BiometricManager",
			"(V)V");
	}
	
	// Methods
	jint BiometricManager::canAuthenticate()
	{
		return __thiz.callMethod<jint>(
			"canAuthenticate",
			"()I"
		);
	}
} // namespace __jni_impl::android::hardware::biometrics

namespace android::hardware::biometrics
{
	class BiometricManager : public __jni_impl::android::hardware::biometrics::BiometricManager
	{
	public:
		BiometricManager(QAndroidJniObject obj) { __thiz = obj; }
		BiometricManager()
		{
			__constructor();
		}
	};
} // namespace android::hardware::biometrics

#endif // ANDROID_HARDWARE_BIOMETRICS_BIOMETRICMANAGER

