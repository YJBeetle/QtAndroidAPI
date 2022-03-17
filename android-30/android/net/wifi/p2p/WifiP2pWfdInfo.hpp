#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pWfdInfo.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline JObject WifiP2pWfdInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_TYPE_PRIMARY_SINK()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_TYPE_PRIMARY_SINK"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_TYPE_SECONDARY_SINK()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_TYPE_SECONDARY_SINK"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_TYPE_SOURCE_OR_PRIMARY_SINK()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_TYPE_SOURCE_OR_PRIMARY_SINK"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_TYPE_WFD_SOURCE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_TYPE_WFD_SOURCE"
		);
	}
	
	// Constructors
	inline WifiP2pWfdInfo::WifiP2pWfdInfo()
		: JObject(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"()V"
		) {}
	inline WifiP2pWfdInfo::WifiP2pWfdInfo(android::net::wifi::p2p::WifiP2pWfdInfo &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"(Landroid/net/wifi/p2p/WifiP2pWfdInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WifiP2pWfdInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint WifiP2pWfdInfo::getControlPort() const
	{
		return callMethod<jint>(
			"getControlPort",
			"()I"
		);
	}
	inline jint WifiP2pWfdInfo::getDeviceType() const
	{
		return callMethod<jint>(
			"getDeviceType",
			"()I"
		);
	}
	inline jint WifiP2pWfdInfo::getMaxThroughput() const
	{
		return callMethod<jint>(
			"getMaxThroughput",
			"()I"
		);
	}
	inline jboolean WifiP2pWfdInfo::isContentProtectionSupported() const
	{
		return callMethod<jboolean>(
			"isContentProtectionSupported",
			"()Z"
		);
	}
	inline jboolean WifiP2pWfdInfo::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean WifiP2pWfdInfo::isSessionAvailable() const
	{
		return callMethod<jboolean>(
			"isSessionAvailable",
			"()Z"
		);
	}
	inline void WifiP2pWfdInfo::setContentProtectionSupported(jboolean arg0) const
	{
		callMethod<void>(
			"setContentProtectionSupported",
			"(Z)V",
			arg0
		);
	}
	inline void WifiP2pWfdInfo::setControlPort(jint arg0) const
	{
		callMethod<void>(
			"setControlPort",
			"(I)V",
			arg0
		);
	}
	inline jboolean WifiP2pWfdInfo::setDeviceType(jint arg0) const
	{
		return callMethod<jboolean>(
			"setDeviceType",
			"(I)Z",
			arg0
		);
	}
	inline void WifiP2pWfdInfo::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void WifiP2pWfdInfo::setMaxThroughput(jint arg0) const
	{
		callMethod<void>(
			"setMaxThroughput",
			"(I)V",
			arg0
		);
	}
	inline void WifiP2pWfdInfo::setSessionAvailable(jboolean arg0) const
	{
		callMethod<void>(
			"setSessionAvailable",
			"(Z)V",
			arg0
		);
	}
	inline JString WifiP2pWfdInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pWfdInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

// Base class headers

