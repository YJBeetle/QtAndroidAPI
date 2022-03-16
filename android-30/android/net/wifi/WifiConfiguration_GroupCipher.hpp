#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./WifiConfiguration_GroupCipher.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline jint WifiConfiguration_GroupCipher::CCMP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"CCMP"
		);
	}
	inline jint WifiConfiguration_GroupCipher::GCMP_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"GCMP_256"
		);
	}
	inline jint WifiConfiguration_GroupCipher::SMS4()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"SMS4"
		);
	}
	inline jint WifiConfiguration_GroupCipher::TKIP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"TKIP"
		);
	}
	inline jint WifiConfiguration_GroupCipher::WEP104()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"WEP104"
		);
	}
	inline jint WifiConfiguration_GroupCipher::WEP40()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"WEP40"
		);
	}
	inline JArray WifiConfiguration_GroupCipher::strings()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"strings",
			"[Ljava/lang/String;"
		);
	}
	inline JString WifiConfiguration_GroupCipher::varName()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$GroupCipher",
			"varName",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

// Base class headers

