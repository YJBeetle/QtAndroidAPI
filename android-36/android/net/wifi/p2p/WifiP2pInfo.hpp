#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/net/InetAddress.def.hpp"
#include "./WifiP2pInfo.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline JObject WifiP2pInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jboolean WifiP2pInfo::groupFormed()
	{
		return getField<jboolean>(
			"groupFormed"
		);
	}
	inline java::net::InetAddress WifiP2pInfo::groupOwnerAddress()
	{
		return getObjectField(
			"groupOwnerAddress",
			"Ljava/net/InetAddress;"
		);
	}
	inline jboolean WifiP2pInfo::isGroupOwner()
	{
		return getField<jboolean>(
			"isGroupOwner"
		);
	}
	
	// Constructors
	inline WifiP2pInfo::WifiP2pInfo()
		: JObject(
			"android.net.wifi.p2p.WifiP2pInfo",
			"()V"
		) {}
	inline WifiP2pInfo::WifiP2pInfo(android::net::wifi::p2p::WifiP2pInfo &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pInfo",
			"(Landroid/net/wifi/p2p/WifiP2pInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WifiP2pInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString WifiP2pInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
