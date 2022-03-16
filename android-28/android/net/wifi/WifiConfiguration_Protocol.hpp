#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./WifiConfiguration_Protocol.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline jint WifiConfiguration_Protocol::RSN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Protocol",
			"RSN"
		);
	}
	inline jint WifiConfiguration_Protocol::WPA()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Protocol",
			"WPA"
		);
	}
	inline JArray WifiConfiguration_Protocol::strings()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$Protocol",
			"strings",
			"[Ljava/lang/String;"
		);
	}
	inline JString WifiConfiguration_Protocol::varName()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$Protocol",
			"varName",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

// Base class headers

