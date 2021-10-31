#include "../../../os/Parcel.hpp"
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
	__JniBaseClass WifiP2pDevice::CREATOR()
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
	jstring WifiP2pDevice::deviceAddress()
	{
		return getObjectField(
			"deviceAddress",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pDevice::deviceName()
	{
		return getObjectField(
			"deviceName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pDevice::primaryDeviceType()
	{
		return getObjectField(
			"primaryDeviceType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiP2pDevice::secondaryDeviceType()
	{
		return getObjectField(
			"secondaryDeviceType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiP2pDevice::status()
	{
		return getField<jint>(
			"status"
		);
	}
	
	// QAndroidJniObject forward
	WifiP2pDevice::WifiP2pDevice(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WifiP2pDevice::WifiP2pDevice()
		: __JniBaseClass(
			"android.net.wifi.p2p.WifiP2pDevice",
			"()V"
		) {}
	WifiP2pDevice::WifiP2pDevice(android::net::wifi::p2p::WifiP2pDevice &arg0)
		: __JniBaseClass(
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
	jboolean WifiP2pDevice::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring WifiP2pDevice::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

