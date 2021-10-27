#include "./WifiEnterpriseConfig_Phase2.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiEnterpriseConfig_Phase2::AKA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"AKA"
		);
	}
	jint WifiEnterpriseConfig_Phase2::AKA_PRIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"AKA_PRIME"
		);
	}
	jint WifiEnterpriseConfig_Phase2::GTC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"GTC"
		);
	}
	jint WifiEnterpriseConfig_Phase2::MSCHAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"MSCHAP"
		);
	}
	jint WifiEnterpriseConfig_Phase2::MSCHAPV2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"MSCHAPV2"
		);
	}
	jint WifiEnterpriseConfig_Phase2::NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"NONE"
		);
	}
	jint WifiEnterpriseConfig_Phase2::PAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"PAP"
		);
	}
	jint WifiEnterpriseConfig_Phase2::SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Phase2",
			"SIM"
		);
	}
	
	WifiEnterpriseConfig_Phase2::WifiEnterpriseConfig_Phase2(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::net::wifi

