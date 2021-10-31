#include "../WpsInfo.hpp"
#include "../../../os/Parcel.hpp"
#include "./WifiP2pConfig.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	__JniBaseClass WifiP2pConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_2GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_2GHZ"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_5GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_5GHZ"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_AUTO()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_AUTO"
		);
	}
	jstring WifiP2pConfig::deviceAddress()
	{
		return getObjectField(
			"deviceAddress",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiP2pConfig::groupOwnerIntent()
	{
		return getField<jint>(
			"groupOwnerIntent"
		);
	}
	android::net::wifi::WpsInfo WifiP2pConfig::wps()
	{
		return getObjectField(
			"wps",
			"Landroid/net/wifi/WpsInfo;"
		);
	}
	
	// QJniObject forward
	WifiP2pConfig::WifiP2pConfig(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WifiP2pConfig::WifiP2pConfig()
		: __JniBaseClass(
			"android.net.wifi.p2p.WifiP2pConfig",
			"()V"
		) {}
	WifiP2pConfig::WifiP2pConfig(android::net::wifi::p2p::WifiP2pConfig &arg0)
		: __JniBaseClass(
			"android.net.wifi.p2p.WifiP2pConfig",
			"(Landroid/net/wifi/p2p/WifiP2pConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WifiP2pConfig::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WifiP2pConfig::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiP2pConfig::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

