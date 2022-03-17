#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/net/Inet6Address.def.hpp"
#include "./WifiAwareNetworkInfo.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JObject WifiAwareNetworkInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareNetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WifiAwareNetworkInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiAwareNetworkInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::net::Inet6Address WifiAwareNetworkInfo::getPeerIpv6Addr() const
	{
		return callObjectMethod(
			"getPeerIpv6Addr",
			"()Ljava/net/Inet6Address;"
		);
	}
	inline jint WifiAwareNetworkInfo::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline jint WifiAwareNetworkInfo::getTransportProtocol() const
	{
		return callMethod<jint>(
			"getTransportProtocol",
			"()I"
		);
	}
	inline jint WifiAwareNetworkInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString WifiAwareNetworkInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiAwareNetworkInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

