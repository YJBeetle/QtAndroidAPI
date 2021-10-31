#include "./WifiP2pDevice.hpp"
#include "../../../os/Parcel.hpp"
#include "./WifiP2pDeviceList.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	QAndroidJniObject WifiP2pDeviceList::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	WifiP2pDeviceList::WifiP2pDeviceList(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiP2pDeviceList::WifiP2pDeviceList()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"()V"
		);
	}
	WifiP2pDeviceList::WifiP2pDeviceList(android::net::wifi::p2p::WifiP2pDeviceList &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pDeviceList",
			"(Landroid/net/wifi/p2p/WifiP2pDeviceList;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint WifiP2pDeviceList::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject WifiP2pDeviceList::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Landroid/net/wifi/p2p/WifiP2pDevice;",
			arg0
		);
	}
	QAndroidJniObject WifiP2pDeviceList::getDeviceList()
	{
		return __thiz.callObjectMethod(
			"getDeviceList",
			"()Ljava/util/Collection;"
		);
	}
	jstring WifiP2pDeviceList::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiP2pDeviceList::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

