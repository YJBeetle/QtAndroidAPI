#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NetworkInterface.def.hpp"
#include "./Inet6Address.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::net::Inet6Address Inet6Address::getByAddress(JString arg0, JByteArray arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BI)Ljava/net/Inet6Address;",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2
		);
	}
	inline java::net::Inet6Address Inet6Address::getByAddress(JString arg0, JByteArray arg1, java::net::NetworkInterface arg2)
	{
		return callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BLjava/net/NetworkInterface;)Ljava/net/Inet6Address;",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2.object()
		);
	}
	inline jboolean Inet6Address::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray Inet6Address::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()[B"
		);
	}
	inline JString Inet6Address::getHostAddress() const
	{
		return callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		);
	}
	inline jint Inet6Address::getScopeId() const
	{
		return callMethod<jint>(
			"getScopeId",
			"()I"
		);
	}
	inline java::net::NetworkInterface Inet6Address::getScopedInterface() const
	{
		return callObjectMethod(
			"getScopedInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	inline jint Inet6Address::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Inet6Address::isAnyLocalAddress() const
	{
		return callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	inline jboolean Inet6Address::isIPv4CompatibleAddress() const
	{
		return callMethod<jboolean>(
			"isIPv4CompatibleAddress",
			"()Z"
		);
	}
	inline jboolean Inet6Address::isLinkLocalAddress() const
	{
		return callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	inline jboolean Inet6Address::isLoopbackAddress() const
	{
		return callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	inline jboolean Inet6Address::isMCGlobal() const
	{
		return callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	inline jboolean Inet6Address::isMCLinkLocal() const
	{
		return callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	inline jboolean Inet6Address::isMCNodeLocal() const
	{
		return callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	inline jboolean Inet6Address::isMCOrgLocal() const
	{
		return callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
	inline jboolean Inet6Address::isMCSiteLocal() const
	{
		return callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	inline jboolean Inet6Address::isMulticastAddress() const
	{
		return callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	inline jboolean Inet6Address::isSiteLocalAddress() const
	{
		return callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
	}
} // namespace java::net

// Base class headers
#include "./InetAddress.hpp"

