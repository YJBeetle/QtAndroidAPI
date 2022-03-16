#pragma once

#include "../../../JArray.hpp"
#include "./WifiConfiguration_Status.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline jint WifiConfiguration_Status::CURRENT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Status",
			"CURRENT"
		);
	}
	inline jint WifiConfiguration_Status::DISABLED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Status",
			"DISABLED"
		);
	}
	inline jint WifiConfiguration_Status::ENABLED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$Status",
			"ENABLED"
		);
	}
	inline JArray WifiConfiguration_Status::strings()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$Status",
			"strings",
			"[Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

// Base class headers

