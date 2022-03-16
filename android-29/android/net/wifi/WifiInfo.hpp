#pragma once

#include "../NetworkInfo_DetailedState.def.hpp"
#include "./SupplicantState.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./WifiInfo.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JString WifiInfo::FREQUENCY_UNITS()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"FREQUENCY_UNITS",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiInfo::LINK_SPEED_UNITS()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiInfo",
			"LINK_SPEED_UNITS",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiInfo::LINK_SPEED_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiInfo",
			"LINK_SPEED_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::NetworkInfo_DetailedState WifiInfo::getDetailedStateOf(android::net::wifi::SupplicantState arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.WifiInfo",
			"getDetailedStateOf",
			"(Landroid/net/wifi/SupplicantState;)Landroid/net/NetworkInfo$DetailedState;",
			arg0.object()
		);
	}
	inline jint WifiInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString WifiInfo::getBSSID() const
	{
		return callObjectMethod(
			"getBSSID",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiInfo::getFrequency() const
	{
		return callMethod<jint>(
			"getFrequency",
			"()I"
		);
	}
	inline jboolean WifiInfo::getHiddenSSID() const
	{
		return callMethod<jboolean>(
			"getHiddenSSID",
			"()Z"
		);
	}
	inline jint WifiInfo::getIpAddress() const
	{
		return callMethod<jint>(
			"getIpAddress",
			"()I"
		);
	}
	inline jint WifiInfo::getLinkSpeed() const
	{
		return callMethod<jint>(
			"getLinkSpeed",
			"()I"
		);
	}
	inline JString WifiInfo::getMacAddress() const
	{
		return callObjectMethod(
			"getMacAddress",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiInfo::getNetworkId() const
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	inline JString WifiInfo::getPasspointFqdn() const
	{
		return callObjectMethod(
			"getPasspointFqdn",
			"()Ljava/lang/String;"
		);
	}
	inline JString WifiInfo::getPasspointProviderFriendlyName() const
	{
		return callObjectMethod(
			"getPasspointProviderFriendlyName",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiInfo::getRssi() const
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	inline jint WifiInfo::getRxLinkSpeedMbps() const
	{
		return callMethod<jint>(
			"getRxLinkSpeedMbps",
			"()I"
		);
	}
	inline JString WifiInfo::getSSID() const
	{
		return callObjectMethod(
			"getSSID",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::wifi::SupplicantState WifiInfo::getSupplicantState() const
	{
		return callObjectMethod(
			"getSupplicantState",
			"()Landroid/net/wifi/SupplicantState;"
		);
	}
	inline jint WifiInfo::getTxLinkSpeedMbps() const
	{
		return callMethod<jint>(
			"getTxLinkSpeedMbps",
			"()I"
		);
	}
	inline JString WifiInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

