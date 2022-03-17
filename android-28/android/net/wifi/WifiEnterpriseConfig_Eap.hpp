#pragma once

#include "./WifiEnterpriseConfig_Eap.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline jint WifiEnterpriseConfig_Eap::AKA()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"AKA"
		);
	}
	inline jint WifiEnterpriseConfig_Eap::AKA_PRIME()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"AKA_PRIME"
		);
	}
	inline jint WifiEnterpriseConfig_Eap::NONE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"NONE"
		);
	}
	inline jint WifiEnterpriseConfig_Eap::PEAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"PEAP"
		);
	}
	inline jint WifiEnterpriseConfig_Eap::PWD()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"PWD"
		);
	}
	inline jint WifiEnterpriseConfig_Eap::SIM()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"SIM"
		);
	}
	inline jint WifiEnterpriseConfig_Eap::TLS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"TLS"
		);
	}
	inline jint WifiEnterpriseConfig_Eap::TTLS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"TTLS"
		);
	}
	inline jint WifiEnterpriseConfig_Eap::UNAUTH_TLS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"UNAUTH_TLS"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
