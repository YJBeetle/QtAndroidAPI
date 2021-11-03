#include "../../../os/Parcel.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/net/Inet6Address.hpp"
#include "./WifiAwareNetworkInfo.hpp"

namespace android::net::wifi::aware
{
	// Fields
	JObject WifiAwareNetworkInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareNetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	WifiAwareNetworkInfo::WifiAwareNetworkInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint WifiAwareNetworkInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiAwareNetworkInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::net::Inet6Address WifiAwareNetworkInfo::getPeerIpv6Addr()
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
	JString WifiAwareNetworkInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

