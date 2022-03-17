#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pDevice.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline jint WifiP2pDevice::AVAILABLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"AVAILABLE"
		);
	}
	inline jint WifiP2pDevice::CONNECTED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"CONNECTED"
		);
	}
	inline JObject WifiP2pDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WifiP2pDevice::FAILED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"FAILED"
		);
	}
	inline jint WifiP2pDevice::INVITED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"INVITED"
		);
	}
	inline jint WifiP2pDevice::UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"UNAVAILABLE"
		);
	}
	inline JString WifiP2pDevice::deviceAddress()
	{
		return getObjectField(
			"deviceAddress",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pDevice::deviceName()
	{
		return getObjectField(
			"deviceName",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pDevice::primaryDeviceType()
	{
		return getObjectField(
			"primaryDeviceType",
			"Ljava/lang/String;"
		);
	}
	inline JString WifiP2pDevice::secondaryDeviceType()
	{
		return getObjectField(
			"secondaryDeviceType",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiP2pDevice::status()
	{
		return getField<jint>(
			"status"
		);
	}
	
	// Constructors
	inline WifiP2pDevice::WifiP2pDevice()
		: JObject(
			"android.net.wifi.p2p.WifiP2pDevice",
			"()V"
		) {}
	inline WifiP2pDevice::WifiP2pDevice(android::net::wifi::p2p::WifiP2pDevice &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pDevice",
			"(Landroid/net/wifi/p2p/WifiP2pDevice;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WifiP2pDevice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiP2pDevice::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean WifiP2pDevice::isGroupOwner() const
	{
		return callMethod<jboolean>(
			"isGroupOwner",
			"()Z"
		);
	}
	inline jboolean WifiP2pDevice::isServiceDiscoveryCapable() const
	{
		return callMethod<jboolean>(
			"isServiceDiscoveryCapable",
			"()Z"
		);
	}
	inline JString WifiP2pDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean WifiP2pDevice::wpsDisplaySupported() const
	{
		return callMethod<jboolean>(
			"wpsDisplaySupported",
			"()Z"
		);
	}
	inline jboolean WifiP2pDevice::wpsKeypadSupported() const
	{
		return callMethod<jboolean>(
			"wpsKeypadSupported",
			"()Z"
		);
	}
	inline jboolean WifiP2pDevice::wpsPbcSupported() const
	{
		return callMethod<jboolean>(
			"wpsPbcSupported",
			"()Z"
		);
	}
	inline void WifiP2pDevice::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

