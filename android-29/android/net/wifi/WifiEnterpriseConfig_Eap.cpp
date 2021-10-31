#include "./WifiEnterpriseConfig_Eap.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiEnterpriseConfig_Eap::AKA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"AKA"
		);
	}
	jint WifiEnterpriseConfig_Eap::AKA_PRIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"AKA_PRIME"
		);
	}
	jint WifiEnterpriseConfig_Eap::NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"NONE"
		);
	}
	jint WifiEnterpriseConfig_Eap::PEAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"PEAP"
		);
	}
	jint WifiEnterpriseConfig_Eap::PWD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"PWD"
		);
	}
	jint WifiEnterpriseConfig_Eap::SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"SIM"
		);
	}
	jint WifiEnterpriseConfig_Eap::TLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"TLS"
		);
	}
	jint WifiEnterpriseConfig_Eap::TTLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"TTLS"
		);
	}
	jint WifiEnterpriseConfig_Eap::UNAUTH_TLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiEnterpriseConfig$Eap",
			"UNAUTH_TLS"
		);
	}
	
	// QAndroidJniObject forward
	WifiEnterpriseConfig_Eap::WifiEnterpriseConfig_Eap(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

