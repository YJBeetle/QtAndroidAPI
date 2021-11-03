#include "../../../os/Parcel.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/net/InetAddress.hpp"
#include "./WifiP2pInfo.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	JObject WifiP2pInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jboolean WifiP2pInfo::groupFormed()
	{
		return getField<jboolean>(
			"groupFormed"
		);
	}
	java::net::InetAddress WifiP2pInfo::groupOwnerAddress()
	{
		return getObjectField(
			"groupOwnerAddress",
			"Ljava/net/InetAddress;"
		);
	}
	jboolean WifiP2pInfo::isGroupOwner()
	{
		return getField<jboolean>(
			"isGroupOwner"
		);
	}
	
	// QJniObject forward
	WifiP2pInfo::WifiP2pInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiP2pInfo::WifiP2pInfo()
		: JObject(
			"android.net.wifi.p2p.WifiP2pInfo",
			"()V"
		) {}
	WifiP2pInfo::WifiP2pInfo(android::net::wifi::p2p::WifiP2pInfo &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pInfo",
			"(Landroid/net/wifi/p2p/WifiP2pInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WifiP2pInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString WifiP2pInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiP2pInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

