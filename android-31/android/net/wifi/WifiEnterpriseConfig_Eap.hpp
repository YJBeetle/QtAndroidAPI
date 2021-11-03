#pragma once

#include "../../../JObject.hpp"


namespace android::net::wifi
{
	class WifiEnterpriseConfig_Eap : public JObject
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
		static jint WAPI_CERT();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiEnterpriseConfig_Eap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiEnterpriseConfig_Eap(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::wifi

