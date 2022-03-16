#include "./WifiEnterpriseConfig_Phase2.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiEnterpriseConfig_Phase2::AKA()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"AKA"
		);
	}
	jint WifiEnterpriseConfig_Phase2::AKA_PRIME()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"AKA_PRIME"
		);
	}
	jint WifiEnterpriseConfig_Phase2::GTC()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"GTC"
		);
	}
	jint WifiEnterpriseConfig_Phase2::MSCHAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"MSCHAP"
		);
	}
	jint WifiEnterpriseConfig_Phase2::MSCHAPV2()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"MSCHAPV2"
		);
	}
	jint WifiEnterpriseConfig_Phase2::NONE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"NONE"
		);
	}
	jint WifiEnterpriseConfig_Phase2::PAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"PAP"
		);
	}
	jint WifiEnterpriseConfig_Phase2::SIM()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"SIM"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

