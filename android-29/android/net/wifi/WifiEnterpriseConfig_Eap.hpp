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
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiEnterpriseConfig_Eap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiEnterpriseConfig_Eap(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

