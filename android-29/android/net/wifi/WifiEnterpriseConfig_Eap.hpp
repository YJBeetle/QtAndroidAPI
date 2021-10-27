#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::wifi
{
	class WifiEnterpriseConfig_Eap : public __JniBaseClass
	{
	public:
		// Fields
		static jint AKA();
		static jint AKA_PRIME();
		static jint NONE();
		static jint PEAP();
		static jint PWD();
		static jint SIM();
		static jint TLS();
		static jint TTLS();
		static jint UNAUTH_TLS();
		
		WifiEnterpriseConfig_Eap(QAndroidJniObject obj);
		// Constructors
		WifiEnterpriseConfig_Eap() = default;
		
		// Methods
	};
} // namespace android::net::wifi

