#include "./WifiP2pDevice.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pGroup.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	JObject WifiP2pGroup::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	WifiP2pGroup::WifiP2pGroup()
		: JObject(
			"android.net.wifi.p2p.WifiP2pGroup",
			"()V"
		) {}
	WifiP2pGroup::WifiP2pGroup(android::net::wifi::p2p::WifiP2pGroup &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pGroup",
			"(Landroid/net/wifi/p2p/WifiP2pGroup;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WifiP2pGroup::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject WifiP2pGroup::getClientList() const
	{
		return callObjectMethod(
			"getClientList",
			"()Ljava/util/Collection;"
		);
	}
	jint WifiP2pGroup::getFrequency() const
	{
		return callMethod<jint>(
			"getFrequency",
			"()I"
		);
	}
	JString WifiP2pGroup::getInterface() const
	{
		return callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;"
		);
	}
	JString WifiP2pGroup::getNetworkName() const
	{
		return callObjectMethod(
			"getNetworkName",
			"()Ljava/lang/String;"
		);
	}
	android::net::wifi::p2p::WifiP2pDevice WifiP2pGroup::getOwner() const
	{
		return callObjectMethod(
			"getOwner",
			"()Landroid/net/wifi/p2p/WifiP2pDevice;"
		);
	}
	JString WifiP2pGroup::getPassphrase() const
	{
		return callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		);
	}
	jboolean WifiP2pGroup::isGroupOwner() const
	{
		return callMethod<jboolean>(
			"isGroupOwner",
			"()Z"
		);
	}
	JString WifiP2pGroup::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiP2pGroup::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

