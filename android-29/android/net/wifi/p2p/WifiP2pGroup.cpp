#include "./WifiP2pDevice.hpp"
#include "../../../os/Parcel.hpp"
#include "./WifiP2pGroup.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	QAndroidJniObject WifiP2pGroup::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	WifiP2pGroup::WifiP2pGroup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiP2pGroup::WifiP2pGroup()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pGroup",
			"()V"
		);
	}
	WifiP2pGroup::WifiP2pGroup(android::net::wifi::p2p::WifiP2pGroup &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pGroup",
			"(Landroid/net/wifi/p2p/WifiP2pGroup;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint WifiP2pGroup::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject WifiP2pGroup::getClientList()
	{
		return __thiz.callObjectMethod(
			"getClientList",
			"()Ljava/util/Collection;"
		);
	}
	jint WifiP2pGroup::getFrequency()
	{
		return __thiz.callMethod<jint>(
			"getFrequency",
			"()I"
		);
	}
	jstring WifiP2pGroup::getInterface()
	{
		return __thiz.callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pGroup::getNetworkName()
	{
		return __thiz.callObjectMethod(
			"getNetworkName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WifiP2pGroup::getOwner()
	{
		return __thiz.callObjectMethod(
			"getOwner",
			"()Landroid/net/wifi/p2p/WifiP2pDevice;"
		);
	}
	jstring WifiP2pGroup::getPassphrase()
	{
		return __thiz.callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean WifiP2pGroup::isGroupOwner()
	{
		return __thiz.callMethod<jboolean>(
			"isGroupOwner",
			"()Z"
		);
	}
	jstring WifiP2pGroup::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiP2pGroup::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

