#include "./WifiEnterpriseConfig_Eap.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiEnterpriseConfig_Eap::AKA()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"AKA"
		);
	}
	jint WifiEnterpriseConfig_Eap::AKA_PRIME()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"AKA_PRIME"
		);
	}
	jint WifiEnterpriseConfig_Eap::NONE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"NONE"
		);
	}
	jint WifiEnterpriseConfig_Eap::PEAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"PEAP"
		);
	}
	jint WifiEnterpriseConfig_Eap::PWD()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"PWD"
		);
	}
	jint WifiEnterpriseConfig_Eap::SIM()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"SIM"
		);
	}
	jint WifiEnterpriseConfig_Eap::TLS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"TLS"
		);
	}
	jint WifiEnterpriseConfig_Eap::TTLS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"TTLS"
		);
	}
	jint WifiEnterpriseConfig_Eap::UNAUTH_TLS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"UNAUTH_TLS"
		);
	}
	jint WifiEnterpriseConfig_Eap::WAPI_CERT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"WAPI_CERT"
		);
	}
	
	// QJniObject forward
	WifiEnterpriseConfig_Eap::WifiEnterpriseConfig_Eap(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

