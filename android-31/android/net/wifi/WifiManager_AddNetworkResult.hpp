#pragma once

#include "../../os/Parcel.def.hpp"
#include "./WifiManager_AddNetworkResult.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JObject WifiManager_AddNetworkResult::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WifiManager_AddNetworkResult::STATUS_ADD_PASSPOINT_FAILURE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_ADD_PASSPOINT_FAILURE"
		);
	}
	inline jint WifiManager_AddNetworkResult::STATUS_ADD_WIFI_CONFIG_FAILURE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_ADD_WIFI_CONFIG_FAILURE"
		);
	}
	inline jint WifiManager_AddNetworkResult::STATUS_FAILURE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_FAILURE_UNKNOWN"
		);
	}
	inline jint WifiManager_AddNetworkResult::STATUS_FAILURE_UPDATE_NETWORK_KEYS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_FAILURE_UPDATE_NETWORK_KEYS"
		);
	}
	inline jint WifiManager_AddNetworkResult::STATUS_INVALID_CONFIGURATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_INVALID_CONFIGURATION"
		);
	}
	inline jint WifiManager_AddNetworkResult::STATUS_INVALID_CONFIGURATION_ENTERPRISE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_INVALID_CONFIGURATION_ENTERPRISE"
		);
	}
	inline jint WifiManager_AddNetworkResult::STATUS_NO_PERMISSION()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_NO_PERMISSION"
		);
	}
	inline jint WifiManager_AddNetworkResult::STATUS_NO_PERMISSION_MODIFY_CONFIG()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_NO_PERMISSION_MODIFY_CONFIG"
		);
	}
	inline jint WifiManager_AddNetworkResult::STATUS_NO_PERMISSION_MODIFY_MAC_RANDOMIZATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_NO_PERMISSION_MODIFY_MAC_RANDOMIZATION"
		);
	}
	inline jint WifiManager_AddNetworkResult::STATUS_NO_PERMISSION_MODIFY_PROXY_SETTING()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_NO_PERMISSION_MODIFY_PROXY_SETTING"
		);
	}
	inline jint WifiManager_AddNetworkResult::STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_SUCCESS"
		);
	}
	inline jint WifiManager_AddNetworkResult::networkId()
	{
		return getField<jint>(
			"networkId"
		);
	}
	inline jint WifiManager_AddNetworkResult::statusCode()
	{
		return getField<jint>(
			"statusCode"
		);
	}
	
	// Constructors
	inline WifiManager_AddNetworkResult::WifiManager_AddNetworkResult(jint arg0, jint arg1)
		: JObject(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint WifiManager_AddNetworkResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void WifiManager_AddNetworkResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers

