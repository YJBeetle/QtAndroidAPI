#include "./WifiConfiguration_GroupCipher.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_GroupCipher::CCMP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"CCMP"
		);
	}
	jint WifiConfiguration_GroupCipher::GCMP_256()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"GCMP_256"
		);
	}
	jint WifiConfiguration_GroupCipher::TKIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"TKIP"
		);
	}
	jint WifiConfiguration_GroupCipher::WEP104()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"WEP104"
		);
	}
	jint WifiConfiguration_GroupCipher::WEP40()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"WEP40"
		);
	}
	jarray WifiConfiguration_GroupCipher::strings()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WifiConfiguration_GroupCipher::varName()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"varName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	WifiConfiguration_GroupCipher::WifiConfiguration_GroupCipher(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::net::wifi

