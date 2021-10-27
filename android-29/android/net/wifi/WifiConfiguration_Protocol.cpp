#include "./WifiConfiguration_Protocol.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_Protocol::RSN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Protocol",
			"RSN"
		);
	}
	jint WifiConfiguration_Protocol::WPA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Protocol",
			"WPA"
		);
	}
	jarray WifiConfiguration_Protocol::strings()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$Protocol",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WifiConfiguration_Protocol::varName()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$Protocol",
			"varName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	WifiConfiguration_Protocol::WifiConfiguration_Protocol(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::net::wifi

