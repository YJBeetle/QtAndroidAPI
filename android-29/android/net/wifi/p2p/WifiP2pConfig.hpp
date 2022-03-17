#pragma once

#include "../WpsInfo.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pConfig.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline JObject WifiP2pConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WifiP2pConfig::GROUP_OWNER_BAND_2GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_2GHZ"
		);
	}
	inline jint WifiP2pConfig::GROUP_OWNER_BAND_5GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_5GHZ"
		);
	}
	inline jint WifiP2pConfig::GROUP_OWNER_BAND_AUTO()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_AUTO"
		);
	}
	inline JString WifiP2pConfig::deviceAddress()
	{
		return getObjectField(
			"deviceAddress",
			"Ljava/lang/String;"
		);
	}
	inline jint WifiP2pConfig::groupOwnerIntent()
	{
		return getField<jint>(
			"groupOwnerIntent"
		);
	}
	inline android::net::wifi::WpsInfo WifiP2pConfig::wps()
	{
		return getObjectField(
			"wps",
			"Landroid/net/wifi/WpsInfo;"
		);
	}
	
	// Constructors
	inline WifiP2pConfig::WifiP2pConfig()
		: JObject(
			"android.net.wifi.p2p.WifiP2pConfig",
			"()V"
		) {}
	inline WifiP2pConfig::WifiP2pConfig(android::net::wifi::p2p::WifiP2pConfig &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pConfig",
			"(Landroid/net/wifi/p2p/WifiP2pConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WifiP2pConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString WifiP2pConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::p2p;
#endif
