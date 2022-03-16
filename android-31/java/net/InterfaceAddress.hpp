#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Inet4Address.def.hpp"
#include "./InetAddress.def.hpp"
#include "./InterfaceAddress.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean InterfaceAddress::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::net::InetAddress InterfaceAddress::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline java::net::InetAddress InterfaceAddress::getBroadcast() const
	{
		return callObjectMethod(
			"getBroadcast",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jshort InterfaceAddress::getNetworkPrefixLength() const
	{
		return callMethod<jshort>(
			"getNetworkPrefixLength",
			"()S"
		);
	}
	inline jint InterfaceAddress::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString InterfaceAddress::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

// Base class headers

