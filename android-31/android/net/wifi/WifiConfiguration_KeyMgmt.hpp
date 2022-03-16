#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./WifiConfiguration_KeyMgmt.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline jint WifiConfiguration_KeyMgmt::IEEE8021X()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"IEEE8021X"
		);
	}
	inline jint WifiConfiguration_KeyMgmt::NONE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"NONE"
		);
	}
	inline jint WifiConfiguration_KeyMgmt::OWE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"OWE"
		);
	}
	inline jint WifiConfiguration_KeyMgmt::SAE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"SAE"
		);
	}
	inline jint WifiConfiguration_KeyMgmt::SUITE_B_192()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"SUITE_B_192"
		);
	}
	inline jint WifiConfiguration_KeyMgmt::WPA_EAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"WPA_EAP"
		);
	}
	inline jint WifiConfiguration_KeyMgmt::WPA_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"WPA_PSK"
		);
	}
	inline JArray WifiConfiguration_KeyMgmt::strings()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"strings",
			"[Ljava/lang/String;"
		);
	}
	inline JString WifiConfiguration_KeyMgmt::varName()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$KeyMgmt",
			"varName",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

// Base class headers

