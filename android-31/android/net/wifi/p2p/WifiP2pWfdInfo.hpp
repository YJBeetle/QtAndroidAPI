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
	inline jint WifiP2pWfdInfo::DEVICE_INFO_AUDIO_ONLY_SUPPORT_AT_SOURCE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_AUDIO_ONLY_SUPPORT_AT_SOURCE"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_INFO_AUDIO_UNSUPPORTED_AT_PRIMARY_SINK()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_AUDIO_UNSUPPORTED_AT_PRIMARY_SINK"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_INFO_CONTENT_PROTECTION_SUPPORT()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_CONTENT_PROTECTION_SUPPORT"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_INFO_COUPLED_SINK_SUPPORT_AT_SINK()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_COUPLED_SINK_SUPPORT_AT_SINK"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_INFO_COUPLED_SINK_SUPPORT_AT_SOURCE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_COUPLED_SINK_SUPPORT_AT_SOURCE"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_INFO_DEVICE_TYPE_MASK()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_DEVICE_TYPE_MASK"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_INFO_PREFERRED_CONNECTIVITY_MASK()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_PREFERRED_CONNECTIVITY_MASK"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_INFO_SESSION_AVAILABLE_MASK()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_SESSION_AVAILABLE_MASK"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_INFO_TDLS_PERSISTENT_GROUP()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_TDLS_PERSISTENT_GROUP"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_INFO_TDLS_PERSISTENT_GROUP_REINVOKE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_TDLS_PERSISTENT_GROUP_REINVOKE"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_INFO_TIME_SYNCHRONIZATION_SUPPORT()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_TIME_SYNCHRONIZATION_SUPPORT"
		);
	}
	inline jint WifiP2pWfdInfo::DEVICE_INFO_WFD_SERVICE_DISCOVERY_SUPPORT()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"DEVICE_INFO_WFD_SERVICE_DISCOVERY_SUPPORT"
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
	inline jint WifiP2pWfdInfo::PREFERRED_CONNECTIVITY_P2P()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"PREFERRED_CONNECTIVITY_P2P"
		);
	}
	inline jint WifiP2pWfdInfo::PREFERRED_CONNECTIVITY_TDLS()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pWfdInfo",
			"PREFERRED_CONNECTIVITY_TDLS"
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
	inline jint WifiP2pWfdInfo::getDeviceInfo() const
	{
		return callMethod<jint>(
			"getDeviceInfo",
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
	inline jint WifiP2pWfdInfo::getR2DeviceInfo() const
	{
		return callMethod<jint>(
			"getR2DeviceInfo",
			"()I"
		);
	}
	inline jint WifiP2pWfdInfo::getR2DeviceType() const
	{
		return callMethod<jint>(
			"getR2DeviceType",
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
	inline jboolean WifiP2pWfdInfo::isCoupledSinkSupportedAtSink() const
	{
		return callMethod<jboolean>(
			"isCoupledSinkSupportedAtSink",
			"()Z"
		);
	}
	inline jboolean WifiP2pWfdInfo::isCoupledSinkSupportedAtSource() const
	{
		return callMethod<jboolean>(
			"isCoupledSinkSupportedAtSource",
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
	inline jboolean WifiP2pWfdInfo::isR2Supported() const
	{
		return callMethod<jboolean>(
			"isR2Supported",
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
	inline void WifiP2pWfdInfo::setCoupledSinkSupportAtSink(jboolean arg0) const
	{
		callMethod<void>(
			"setCoupledSinkSupportAtSink",
			"(Z)V",
			arg0
		);
	}
	inline void WifiP2pWfdInfo::setCoupledSinkSupportAtSource(jboolean arg0) const
	{
		callMethod<void>(
			"setCoupledSinkSupportAtSource",
			"(Z)V",
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
	inline jboolean WifiP2pWfdInfo::setR2DeviceType(jint arg0) const
	{
		return callMethod<jboolean>(
			"setR2DeviceType",
			"(I)Z",
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

