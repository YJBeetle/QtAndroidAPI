#include "../WpsInfo.hpp"
#include "../../../os/Parcel.hpp"
#include "./WifiP2pConfig.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	QAndroidJniObject WifiP2pConfig::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_2GHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_2GHZ"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_5GHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_5GHZ"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_AUTO"
		);
	}
	jstring WifiP2pConfig::deviceAddress()
	{
		return __thiz.getObjectField(
			"deviceAddress",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiP2pConfig::groupOwnerIntent()
	{
		return __thiz.getField<jint>(
			"groupOwnerIntent"
		);
	}
	QAndroidJniObject WifiP2pConfig::wps()
	{
		return __thiz.getObjectField(
			"wps",
			"Landroid/net/wifi/WpsInfo;"
		);
	}
	
	WifiP2pConfig::WifiP2pConfig(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiP2pConfig::WifiP2pConfig()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pConfig",
			"()V"
		);
	}
	WifiP2pConfig::WifiP2pConfig(android::net::wifi::p2p::WifiP2pConfig &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.WifiP2pConfig",
			"(Landroid/net/wifi/p2p/WifiP2pConfig;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint WifiP2pConfig::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WifiP2pConfig::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiP2pConfig::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

