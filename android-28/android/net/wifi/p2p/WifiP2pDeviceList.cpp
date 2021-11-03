#include "./WifiP2pDevice.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../../JString.hpp"
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
	jint WifiP2pDeviceList::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::wifi::p2p::WifiP2pDevice WifiP2pDeviceList::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pDevice;",
			arg0.object<jstring>()
		);
	}
	JObject WifiP2pDeviceList::getDeviceList() const
	{
		return callObjectMethod(
			"getDeviceList",
			"()Ljava/util/Collection;"
		);
	}
	JString WifiP2pDeviceList::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiP2pDeviceList::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

