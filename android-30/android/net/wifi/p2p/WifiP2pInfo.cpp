#include "../../../os/Parcel.hpp"
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
	
	// QAndroidJniObject forward
	WifiP2pInfo::WifiP2pInfo(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jint WifiP2pInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WifiP2pInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiP2pInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

