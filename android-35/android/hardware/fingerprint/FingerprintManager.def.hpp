#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationCallback;
}
namespace android::hardware::fingerprint
{
	class FingerprintManager_CryptoObject;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::os
{
	class Handler;
}

namespace android::hardware::fingerprint
{
	class FingerprintManager : public JObject
	{
	public:
		// Fields
		static jint FINGERPRINT_ACQUIRED_GOOD();
		static jint FINGERPRINT_ACQUIRED_IMAGER_DIRTY();
		static jint FINGERPRINT_ACQUIRED_INSUFFICIENT();
		static jint FINGERPRINT_ACQUIRED_PARTIAL();
		static jint FINGERPRINT_ACQUIRED_TOO_FAST();
		static jint FINGERPRINT_ACQUIRED_TOO_SLOW();
		static jint FINGERPRINT_ERROR_CANCELED();
		static jint FINGERPRINT_ERROR_HW_NOT_PRESENT();
		static jint FINGERPRINT_ERROR_HW_UNAVAILABLE();
		static jint FINGERPRINT_ERROR_LOCKOUT();
		static jint FINGERPRINT_ERROR_LOCKOUT_PERMANENT();
		static jint FINGERPRINT_ERROR_NO_FINGERPRINTS();
		static jint FINGERPRINT_ERROR_NO_SPACE();
		static jint FINGERPRINT_ERROR_TIMEOUT();
		static jint FINGERPRINT_ERROR_UNABLE_TO_PROCESS();
		static jint FINGERPRINT_ERROR_USER_CANCELED();
		static jint FINGERPRINT_ERROR_VENDOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit FingerprintManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void authenticate(android::hardware::fingerprint::FingerprintManager_CryptoObject arg0, android::os::CancellationSignal arg1, jint arg2, android::hardware::fingerprint::FingerprintManager_AuthenticationCallback arg3, android::os::Handler arg4) const;
		jboolean hasEnrolledFingerprints() const;
		jboolean isHardwareDetected() const;
	};
} // namespace android::hardware::fingerprint

