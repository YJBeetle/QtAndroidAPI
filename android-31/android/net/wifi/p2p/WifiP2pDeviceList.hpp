#pragma once

#include "./WifiP2pDevice.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pDeviceList.def.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	inline JObject WifiP2pDeviceList::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline WifiP2pDeviceList::WifiP2pDeviceList()
		: JObject(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"()V"
		) {}
	inline WifiP2pDeviceList::WifiP2pDeviceList(android::net::wifi::p2p::WifiP2pDeviceList &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"(Landroid/net/wifi/p2p/WifiP2pDeviceList;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WifiP2pDeviceList::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::net::wifi::p2p::WifiP2pDevice WifiP2pDeviceList::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pDevice;",
			arg0.object<jstring>()
		);
	}
	inline JObject WifiP2pDeviceList::getDeviceList() const
	{
		return callObjectMethod(
			"getDeviceList",
			"()Ljava/util/Collection;"
		);
	}
	inline JString WifiP2pDeviceList::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiP2pDeviceList::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
