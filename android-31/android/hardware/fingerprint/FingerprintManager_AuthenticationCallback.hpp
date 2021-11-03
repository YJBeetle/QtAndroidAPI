#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationResult;
}
class JString;

namespace android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FingerprintManager_AuthenticationCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintManager_AuthenticationCallback(QAndroidJniObject obj);
		
		// Constructors
		FingerprintManager_AuthenticationCallback();
		
		// Methods
		void onAuthenticationError(jint arg0, JString arg1);
		void onAuthenticationFailed();
		void onAuthenticationHelp(jint arg0, JString arg1);
		void onAuthenticationSucceeded(android::hardware::fingerprint::FingerprintManager_AuthenticationResult arg0);
	};
} // namespace android::hardware::fingerprint

