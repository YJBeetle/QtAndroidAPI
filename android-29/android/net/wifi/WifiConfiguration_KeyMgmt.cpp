#include "./WifiConfiguration_KeyMgmt.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_KeyMgmt::IEEE8021X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"IEEE8021X"
		);
	}
	jint WifiConfiguration_KeyMgmt::NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"NONE"
		);
	}
	jint WifiConfiguration_KeyMgmt::OWE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"OWE"
		);
	}
	jint WifiConfiguration_KeyMgmt::SAE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"SAE"
		);
	}
	jint WifiConfiguration_KeyMgmt::SUITE_B_192()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"SUITE_B_192"
		);
	}
	jint WifiConfiguration_KeyMgmt::WPA_EAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"WPA_EAP"
		);
	}
	jint WifiConfiguration_KeyMgmt::WPA_PSK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"WPA_PSK"
		);
	}
	jarray WifiConfiguration_KeyMgmt::strings()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WifiConfiguration_KeyMgmt::varName()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"varName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	WifiConfiguration_KeyMgmt::WifiConfiguration_KeyMgmt(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::net::wifi

