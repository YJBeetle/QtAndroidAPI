#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::biometrics
{
	class BiometricManager : public JObject
	{
	public:
		// Fields
		static jint BIOMETRIC_ERROR_HW_UNAVAILABLE();
		static jint BIOMETRIC_ERROR_NONE_ENROLLED();
		static jint BIOMETRIC_ERROR_NO_HARDWARE();
		static jint BIOMETRIC_SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit BiometricManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BiometricManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint canAuthenticate() const;
	};
} // namespace android::hardware::biometrics

