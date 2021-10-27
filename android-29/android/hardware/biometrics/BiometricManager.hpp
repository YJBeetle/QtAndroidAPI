#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::hardware::biometrics
{
	class BiometricManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint BIOMETRIC_ERROR_HW_UNAVAILABLE();
		static jint BIOMETRIC_ERROR_NONE_ENROLLED();
		static jint BIOMETRIC_ERROR_NO_HARDWARE();
		static jint BIOMETRIC_SUCCESS();
		
		BiometricManager(QAndroidJniObject obj);
		// Constructors
		BiometricManager() = default;
		
		// Methods
		jint canAuthenticate();
	};
} // namespace android::hardware::biometrics

