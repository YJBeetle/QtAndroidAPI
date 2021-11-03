#include "./WifiConfiguration_KeyMgmt.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_KeyMgmt::IEEE8021X()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"IEEE8021X"
		);
	}
	jint WifiConfiguration_KeyMgmt::NONE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"NONE"
		);
	}
	jint WifiConfiguration_KeyMgmt::WPA_EAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"WPA_EAP"
		);
	}
	jint WifiConfiguration_KeyMgmt::WPA_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"WPA_PSK"
		);
	}
	jarray WifiConfiguration_KeyMgmt::strings()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WifiConfiguration_KeyMgmt::varName()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"varName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	WifiConfiguration_KeyMgmt::WifiConfiguration_KeyMgmt(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

