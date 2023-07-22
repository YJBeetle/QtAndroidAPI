#pragma once

#include "./WifiP2pDevice.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pGroup.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline JObject WifiP2pGroup::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WifiP2pGroup::NETWORK_ID_PERSISTENT()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pGroup",
			"NETWORK_ID_PERSISTENT"
		);
	}
	inline jint WifiP2pGroup::NETWORK_ID_TEMPORARY()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pGroup",
			"NETWORK_ID_TEMPORARY"
		);
	}
	
	// Constructors
	inline WifiP2pGroup::WifiP2pGroup()
		: JObject(
			"android.net.wifi.p2p.WifiP2pGroup",
			"()V"
		) {}
	inline WifiP2pGroup::WifiP2pGroup(android::net::wifi::p2p::WifiP2pGroup &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pGroup",
			"(Landroid/net/wifi/p2p/WifiP2pGroup;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WifiP2pGroup::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject WifiP2pGroup::getClientList() const
	{
		return callObjectMethod(
			"getClientList",
			"()Ljava/util/Collection;"
		);
	}
	inline jint WifiP2pGroup::getFrequency() const
	{
		return callMethod<jint>(
			"getFrequency",
			"()I"
		);
	}
	inline JString WifiP2pGroup::getInterface() const
	{
		return callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiP2pGroup::getNetworkId() const
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	inline JString WifiP2pGroup::getNetworkName() const
	{
		return callObjectMethod(
			"getNetworkName",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::wifi::p2p::WifiP2pDevice WifiP2pGroup::getOwner() const
	{
		return callObjectMethod(
			"getOwner",
			"()Landroid/net/wifi/p2p/WifiP2pDevice;"
		);
	}
	inline JString WifiP2pGroup::getPassphrase() const
	{
		return callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean WifiP2pGroup::isGroupOwner() const
	{
		return callMethod<jboolean>(
			"isGroupOwner",
			"()Z"
		);
	}
	inline JString WifiP2pGroup::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pGroup::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
