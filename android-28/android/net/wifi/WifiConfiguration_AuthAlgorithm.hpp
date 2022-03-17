#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./WifiConfiguration_AuthAlgorithm.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline jint WifiConfiguration_AuthAlgorithm::LEAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"LEAP"
		);
	}
	inline jint WifiConfiguration_AuthAlgorithm::OPEN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"OPEN"
		);
	}
	inline jint WifiConfiguration_AuthAlgorithm::SHARED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"SHARED"
		);
	}
	inline JArray WifiConfiguration_AuthAlgorithm::strings()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"strings",
			"[Ljava/lang/String;"
		);
	}
	inline JString WifiConfiguration_AuthAlgorithm::varName()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$AuthAlgorithm",
			"varName",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
