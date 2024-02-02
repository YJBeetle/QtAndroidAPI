#pragma once

#include "./WifiEnterpriseConfig_Phase2.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline jint WifiEnterpriseConfig_Phase2::AKA()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"AKA"
		);
	}
	inline jint WifiEnterpriseConfig_Phase2::AKA_PRIME()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"AKA_PRIME"
		);
	}
	inline jint WifiEnterpriseConfig_Phase2::GTC()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"GTC"
		);
	}
	inline jint WifiEnterpriseConfig_Phase2::MSCHAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"MSCHAP"
		);
	}
	inline jint WifiEnterpriseConfig_Phase2::MSCHAPV2()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"MSCHAPV2"
		);
	}
	inline jint WifiEnterpriseConfig_Phase2::NONE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"NONE"
		);
	}
	inline jint WifiEnterpriseConfig_Phase2::PAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"PAP"
		);
	}
	inline jint WifiEnterpriseConfig_Phase2::SIM()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"SIM"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
