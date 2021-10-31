#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationResult;
}

namespace android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		FingerprintManager_AuthenticationCallback(QAndroidJniObject obj);
		// Constructors
		FingerprintManager_AuthenticationCallback();
		
		// Methods
		void onAuthenticationError(jint arg0, jstring arg1);
		void onAuthenticationFailed();
		void onAuthenticationHelp(jint arg0, jstring arg1);
		void onAuthenticationSucceeded(android::hardware::fingerprint::FingerprintManager_AuthenticationResult arg0);
	};
} // namespace android::hardware::fingerprint

