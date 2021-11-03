#include "./WifiConfiguration_AuthAlgorithm.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_AuthAlgorithm::LEAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"LEAP"
		);
	}
	jint WifiConfiguration_AuthAlgorithm::OPEN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"OPEN"
		);
	}
	jint WifiConfiguration_AuthAlgorithm::SAE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"SAE"
		);
	}
	jint WifiConfiguration_AuthAlgorithm::SHARED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"SHARED"
		);
	}
	jarray WifiConfiguration_AuthAlgorithm::strings()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"strings",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring WifiConfiguration_AuthAlgorithm::varName()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"varName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	WifiConfiguration_AuthAlgorithm::WifiConfiguration_AuthAlgorithm(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

