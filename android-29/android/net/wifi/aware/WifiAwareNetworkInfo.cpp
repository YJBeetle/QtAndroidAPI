#include "../../../os/Parcel.hpp"
#include "../../../../java/net/Inet6Address.hpp"
#include "./WifiAwareNetworkInfo.hpp"

namespace android::net::wifi::aware
{
	// Fields
	QAndroidJniObject WifiAwareNetworkInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.WifiAwareNetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	WifiAwareNetworkInfo::WifiAwareNetworkInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint WifiAwareNetworkInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiAwareNetworkInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject WifiAwareNetworkInfo::getPeerIpv6Addr()
	{
		return callObjectMethod(
			"getPeerIpv6Addr",
			"()Ljava/net/Inet6Address;"
		);
	}
	jint WifiAwareNetworkInfo::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint WifiAwareNetworkInfo::getTransportProtocol()
	{
		return callMethod<jint>(
			"getTransportProtocol",
			"()I"
		);
	}
	jint WifiAwareNetworkInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring WifiAwareNetworkInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiAwareNetworkInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

