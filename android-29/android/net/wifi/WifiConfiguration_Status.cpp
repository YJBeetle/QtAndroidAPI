#include "./WifiConfiguration_Status.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_Status::CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Status",
			"CURRENT"
		);
	}
	jint WifiConfiguration_Status::DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Status",
			"DISABLED"
		);
	}
	jint WifiConfiguration_Status::ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Status",
			"ENABLED"
		);
	}
	jarray WifiConfiguration_Status::strings()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WifiConfiguration$Status",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	
	// QAndroidJniObject forward
	WifiConfiguration_Status::WifiConfiguration_Status(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

