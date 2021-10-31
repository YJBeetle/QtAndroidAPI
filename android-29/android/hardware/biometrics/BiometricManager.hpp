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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BiometricManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BiometricManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint canAuthenticate();
	};
} // namespace android::hardware::biometrics

