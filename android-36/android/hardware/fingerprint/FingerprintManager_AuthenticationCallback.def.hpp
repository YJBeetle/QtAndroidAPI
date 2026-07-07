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
		
		// QJniObject forward
		template<typename ...Ts> explicit FingerprintManager_AuthenticationCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintManager_AuthenticationCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FingerprintManager_AuthenticationCallback();
		
		// Methods
		void onAuthenticationError(jint arg0, JString arg1) const;
		void onAuthenticationFailed() const;
		void onAuthenticationHelp(jint arg0, JString arg1) const;
		void onAuthenticationSucceeded(android::hardware::fingerprint::FingerprintManager_AuthenticationResult arg0) const;
	};
} // namespace android::hardware::fingerprint

