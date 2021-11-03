#include "../../os/Parcel.hpp"
#include "./WifiManager_AddNetworkResult.hpp"

namespace android::net::wifi
{
	// Fields
	JObject WifiManager_AddNetworkResult::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WifiManager_AddNetworkResult::STATUS_ADD_PASSPOINT_FAILURE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_ADD_PASSPOINT_FAILURE"
		);
	}
	jint WifiManager_AddNetworkResult::STATUS_ADD_WIFI_CONFIG_FAILURE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_ADD_WIFI_CONFIG_FAILURE"
		);
	}
	jint WifiManager_AddNetworkResult::STATUS_FAILURE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_FAILURE_UNKNOWN"
		);
	}
	jint WifiManager_AddNetworkResult::STATUS_FAILURE_UPDATE_NETWORK_KEYS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_FAILURE_UPDATE_NETWORK_KEYS"
		);
	}
	jint WifiManager_AddNetworkResult::STATUS_INVALID_CONFIGURATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_INVALID_CONFIGURATION"
		);
	}
	jint WifiManager_AddNetworkResult::STATUS_INVALID_CONFIGURATION_ENTERPRISE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_INVALID_CONFIGURATION_ENTERPRISE"
		);
	}
	jint WifiManager_AddNetworkResult::STATUS_NO_PERMISSION()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_NO_PERMISSION"
		);
	}
	jint WifiManager_AddNetworkResult::STATUS_NO_PERMISSION_MODIFY_CONFIG()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_NO_PERMISSION_MODIFY_CONFIG"
		);
	}
	jint WifiManager_AddNetworkResult::STATUS_NO_PERMISSION_MODIFY_MAC_RANDOMIZATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_NO_PERMISSION_MODIFY_MAC_RANDOMIZATION"
		);
	}
	jint WifiManager_AddNetworkResult::STATUS_NO_PERMISSION_MODIFY_PROXY_SETTING()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_NO_PERMISSION_MODIFY_PROXY_SETTING"
		);
	}
	jint WifiManager_AddNetworkResult::STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"STATUS_SUCCESS"
		);
	}
	jint WifiManager_AddNetworkResult::networkId()
	{
		return getField<jint>(
			"networkId"
		);
	}
	jint WifiManager_AddNetworkResult::statusCode()
	{
		return getField<jint>(
			"statusCode"
		);
	}
	
	// QJniObject forward
	WifiManager_AddNetworkResult::WifiManager_AddNetworkResult(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiManager_AddNetworkResult::WifiManager_AddNetworkResult(jint arg0, jint arg1)
		: JObject(
			"android.net.wifi.WifiManager$AddNetworkResult",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint WifiManager_AddNetworkResult::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void WifiManager_AddNetworkResult::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

