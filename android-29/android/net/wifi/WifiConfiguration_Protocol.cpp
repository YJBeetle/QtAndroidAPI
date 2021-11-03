#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./WifiConfiguration_Protocol.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_Protocol::RSN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Protocol",
			"RSN"
		);
	}
	jint WifiConfiguration_Protocol::WPA()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Protocol",
			"WPA"
		);
	}
	JArray WifiConfiguration_Protocol::strings()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$Protocol",
			"strings",
			"[Ljava/lang/String;"
		);
	}
	JString WifiConfiguration_Protocol::varName()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$Protocol",
			"varName",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	WifiConfiguration_Protocol::WifiConfiguration_Protocol(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

