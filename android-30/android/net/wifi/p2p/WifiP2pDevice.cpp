#include "./WifiP2pWfdInfo.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pDevice.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	jint WifiP2pDevice::AVAILABLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"AVAILABLE"
		);
	}
	jint WifiP2pDevice::CONNECTED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"CONNECTED"
		);
	}
	JObject WifiP2pDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WifiP2pDevice::FAILED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"FAILED"
		);
	}
	jint WifiP2pDevice::INVITED()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"INVITED"
		);
	}
	jint WifiP2pDevice::UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pDevice",
			"UNAVAILABLE"
		);
	}
	JString WifiP2pDevice::deviceAddress()
	{
		return getObjectField(
			"deviceAddress",
			"Ljava/lang/String;"
		);
	}
	JString WifiP2pDevice::deviceName()
	{
		return getObjectField(
			"deviceName",
			"Ljava/lang/String;"
		);
	}
	JString WifiP2pDevice::primaryDeviceType()
	{
		return getObjectField(
			"primaryDeviceType",
			"Ljava/lang/String;"
		);
	}
	JString WifiP2pDevice::secondaryDeviceType()
	{
		return getObjectField(
			"secondaryDeviceType",
			"Ljava/lang/String;"
		);
	}
	jint WifiP2pDevice::status()
	{
		return getField<jint>(
			"status"
		);
	}
	
	// QAndroidJniObject forward
	WifiP2pDevice::WifiP2pDevice(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiP2pDevice::WifiP2pDevice()
		: JObject(
			"android.net.wifi.p2p.WifiP2pDevice",
			"()V"
		) {}
	WifiP2pDevice::WifiP2pDevice(android::net::wifi::p2p::WifiP2pDevice &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pDevice",
			"(Landroid/net/wifi/p2p/WifiP2pDevice;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WifiP2pDevice::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiP2pDevice::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::wifi::p2p::WifiP2pWfdInfo WifiP2pDevice::getWfdInfo()
	{
		return callObjectMethod(
			"getWfdInfo",
			"()Landroid/net/wifi/p2p/WifiP2pWfdInfo;"
		);
	}
	jint WifiP2pDevice::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WifiP2pDevice::isGroupOwner()
	{
		return callMethod<jboolean>(
			"isGroupOwner",
			"()Z"
		);
	}
	jboolean WifiP2pDevice::isServiceDiscoveryCapable()
	{
		return callMethod<jboolean>(
			"isServiceDiscoveryCapable",
			"()Z"
		);
	}
	JString WifiP2pDevice::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiP2pDevice::update(android::net::wifi::p2p::WifiP2pDevice arg0)
	{
		callMethod<void>(
			"update",
			"(Landroid/net/wifi/p2p/WifiP2pDevice;)V",
			arg0.object()
		);
	}
	jboolean WifiP2pDevice::wpsDisplaySupported()
	{
		return callMethod<jboolean>(
			"wpsDisplaySupported",
			"()Z"
		);
	}
	jboolean WifiP2pDevice::wpsKeypadSupported()
	{
		return callMethod<jboolean>(
			"wpsKeypadSupported",
			"()Z"
		);
	}
	jboolean WifiP2pDevice::wpsPbcSupported()
	{
		return callMethod<jboolean>(
			"wpsPbcSupported",
			"()Z"
		);
	}
	void WifiP2pDevice::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

