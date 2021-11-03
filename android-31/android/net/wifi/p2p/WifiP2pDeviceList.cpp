#include "./WifiP2pDevice.hpp"
#include "../../../os/Parcel.hpp"
#include "./WifiP2pDeviceList.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	JObject WifiP2pDeviceList::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	WifiP2pDeviceList::WifiP2pDeviceList(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiP2pDeviceList::WifiP2pDeviceList()
		: JObject(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"()V"
		) {}
	WifiP2pDeviceList::WifiP2pDeviceList(android::net::wifi::p2p::WifiP2pDeviceList &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"(Landroid/net/wifi/p2p/WifiP2pDeviceList;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WifiP2pDeviceList::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::wifi::p2p::WifiP2pDevice WifiP2pDeviceList::get(jstring arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pDevice;",
			arg0
		);
	}
	JObject WifiP2pDeviceList::getDeviceList()
	{
		return callObjectMethod(
			"getDeviceList",
			"()Ljava/util/Collection;"
		);
	}
	jstring WifiP2pDeviceList::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiP2pDeviceList::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

