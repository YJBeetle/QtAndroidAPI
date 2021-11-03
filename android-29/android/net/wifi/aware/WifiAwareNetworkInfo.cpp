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
	jint WifiAwareNetworkInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiAwareNetworkInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::net::Inet6Address WifiAwareNetworkInfo::getPeerIpv6Addr() const
	{
		return callObjectMethod(
			"getPeerIpv6Addr",
			"()Ljava/net/Inet6Address;"
		);
	}
	jint WifiAwareNetworkInfo::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint WifiAwareNetworkInfo::getTransportProtocol() const
	{
		return callMethod<jint>(
			"getTransportProtocol",
			"()I"
		);
	}
	jint WifiAwareNetworkInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString WifiAwareNetworkInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiAwareNetworkInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

