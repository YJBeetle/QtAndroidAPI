#pragma once

#include "./IpPrefix.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/net/InetAddress.def.hpp"
#include "./RouteInfo.def.hpp"

namespace android::net
{
	// Fields
	inline JObject RouteInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.RouteInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RouteInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RouteInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::IpPrefix RouteInfo::getDestination() const
	{
		return callObjectMethod(
			"getDestination",
			"()Landroid/net/IpPrefix;"
		);
	}
	inline java::net::InetAddress RouteInfo::getGateway() const
	{
		return callObjectMethod(
			"getGateway",
			"()Ljava/net/InetAddress;"
		);
	}
	inline JString RouteInfo::getInterface() const
	{
		return callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean RouteInfo::hasGateway() const
	{
		return callMethod<jboolean>(
			"hasGateway",
			"()Z"
		);
	}
	inline jint RouteInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean RouteInfo::isDefaultRoute() const
	{
		return callMethod<jboolean>(
			"isDefaultRoute",
			"()Z"
		);
	}
	inline jboolean RouteInfo::matches(java::net::InetAddress arg0) const
	{
		return callMethod<jboolean>(
			"matches",
			"(Ljava/net/InetAddress;)Z",
			arg0.object()
		);
	}
	inline JString RouteInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RouteInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

