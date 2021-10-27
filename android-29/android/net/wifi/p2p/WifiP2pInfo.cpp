#include "../../../os/Parcel.hpp"
#include "../../../../java/net/InetAddress.hpp"
#include "./WifiP2pInfo.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	QAndroidJniObject WifiP2pInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jboolean WifiP2pInfo::groupFormed()
	{
		return __thiz.getField<jboolean>(
			"groupFormed"
		);
	}
	QAndroidJniObject WifiP2pInfo::groupOwnerAddress()
	{
		return __thiz.getObjectField(
			"groupOwnerAddress",
			"Ljava/net/InetAddress;"
		);
	}
	jboolean WifiP2pInfo::isGroupOwner()
	{
		return __thiz.getField<jboolean>(
			"isGroupOwner"
		);
	}
	
	WifiP2pInfo::WifiP2pInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiP2pInfo::WifiP2pInfo()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pInfo",
			"()V"
		);
	}
	WifiP2pInfo::WifiP2pInfo(android::net::wifi::p2p::WifiP2pInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pInfo",
			"(Landroid/net/wifi/p2p/WifiP2pInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint WifiP2pInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WifiP2pInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiP2pInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

