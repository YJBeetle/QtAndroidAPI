#pragma once

#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./InetAddress.def.hpp"
#include "./InetSocketAddress.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline InetSocketAddress::InetSocketAddress(jint arg0)
		: java::net::SocketAddress(
			"java.net.InetSocketAddress",
			"(I)V",
			arg0
		) {}
	inline InetSocketAddress::InetSocketAddress(JString arg0, jint arg1)
		: java::net::SocketAddress(
			"java.net.InetSocketAddress",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline InetSocketAddress::InetSocketAddress(java::net::InetAddress arg0, jint arg1)
		: java::net::SocketAddress(
			"java.net.InetSocketAddress",
			"(Ljava/net/InetAddress;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline java::net::InetSocketAddress InetSocketAddress::createUnresolved(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.net.InetSocketAddress",
			"createUnresolved",
			"(Ljava/lang/String;I)Ljava/net/InetSocketAddress;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean InetSocketAddress::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::net::InetAddress InetSocketAddress::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline JString InetSocketAddress::getHostName() const
	{
		return callObjectMethod(
			"getHostName",
			"()Ljava/lang/String;"
		);
	}
	inline JString InetSocketAddress::getHostString() const
	{
		return callObjectMethod(
			"getHostString",
			"()Ljava/lang/String;"
		);
	}
	inline jint InetSocketAddress::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline jint InetSocketAddress::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean InetSocketAddress::isUnresolved() const
	{
		return callMethod<jboolean>(
			"isUnresolved",
			"()Z"
		);
	}
	inline JString InetSocketAddress::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

// Base class headers
#include "./SocketAddress.hpp"

