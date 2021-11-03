#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./WifiConfiguration_GroupCipher.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_GroupCipher::CCMP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"CCMP"
		);
	}
	jint WifiConfiguration_GroupCipher::TKIP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"TKIP"
		);
	}
	jint WifiConfiguration_GroupCipher::WEP104()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"WEP104"
		);
	}
	jint WifiConfiguration_GroupCipher::WEP40()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"WEP40"
		);
	}
	JArray WifiConfiguration_GroupCipher::strings()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"strings",
			"[Ljava/lang/String;"
		);
	}
	JString WifiConfiguration_GroupCipher::varName()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"varName",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	WifiConfiguration_GroupCipher::WifiConfiguration_GroupCipher(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

