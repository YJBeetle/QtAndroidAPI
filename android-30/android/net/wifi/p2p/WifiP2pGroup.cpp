#include "./WifiP2pDevice.hpp"
#include "../../../os/Parcel.hpp"
#include "./WifiP2pGroup.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	__JniBaseClass WifiP2pGroup::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WifiP2pGroup::NETWORK_ID_PERSISTENT()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pGroup",
			"NETWORK_ID_PERSISTENT"
		);
	}
	jint WifiP2pGroup::NETWORK_ID_TEMPORARY()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pGroup",
			"NETWORK_ID_TEMPORARY"
		);
	}
	
	// QJniObject forward
	WifiP2pGroup::WifiP2pGroup(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WifiP2pGroup::WifiP2pGroup()
		: __JniBaseClass(
			"android.net.wifi.p2p.WifiP2pGroup",
			"()V"
		) {}
	WifiP2pGroup::WifiP2pGroup(android::net::wifi::p2p::WifiP2pGroup &arg0)
		: __JniBaseClass(
			"android.net.wifi.p2p.WifiP2pGroup",
			"(Landroid/net/wifi/p2p/WifiP2pGroup;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WifiP2pGroup::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	__JniBaseClass WifiP2pGroup::getClientList()
	{
		return callObjectMethod(
			"getClientList",
			"()Ljava/util/Collection;"
		);
	}
	jint WifiP2pGroup::getFrequency()
	{
		return callMethod<jint>(
			"getFrequency",
			"()I"
		);
	}
	jstring WifiP2pGroup::getInterface()
	{
		return callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiP2pGroup::getNetworkId()
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	jstring WifiP2pGroup::getNetworkName()
	{
		return callObjectMethod(
			"getNetworkName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::wifi::p2p::WifiP2pDevice WifiP2pGroup::getOwner()
	{
		return callObjectMethod(
			"getOwner",
			"()Landroid/net/wifi/p2p/WifiP2pDevice;"
		);
	}
	jstring WifiP2pGroup::getPassphrase()
	{
		return callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean WifiP2pGroup::isGroupOwner()
	{
		return callMethod<jboolean>(
			"isGroupOwner",
			"()Z"
		);
	}
	jstring WifiP2pGroup::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiP2pGroup::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

