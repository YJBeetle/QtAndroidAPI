#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NetworkInterface.def.hpp"
#include "./InetAddress.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JArray InetAddress::getAllByName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getAllByName",
			"(Ljava/lang/String;)[Ljava/net/InetAddress;",
			arg0.object<jstring>()
		);
	}
	inline java::net::InetAddress InetAddress::getByAddress(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getByAddress",
			"([B)Ljava/net/InetAddress;",
			arg0.object<jbyteArray>()
		);
	}
	inline java::net::InetAddress InetAddress::getByAddress(JString arg0, JByteArray arg1)
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getByAddress",
			"(Ljava/lang/String;[B)Ljava/net/InetAddress;",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline java::net::InetAddress InetAddress::getByName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getByName",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0.object<jstring>()
		);
	}
	inline java::net::InetAddress InetAddress::getLocalHost()
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getLocalHost",
			"()Ljava/net/InetAddress;"
		);
	}
	inline java::net::InetAddress InetAddress::getLoopbackAddress()
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getLoopbackAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jboolean InetAddress::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray InetAddress::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()[B"
		);
	}
	inline JString InetAddress::getCanonicalHostName() const
	{
		return callObjectMethod(
			"getCanonicalHostName",
			"()Ljava/lang/String;"
		);
	}
	inline JString InetAddress::getHostAddress() const
	{
		return callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		);
	}
	inline JString InetAddress::getHostName() const
	{
		return callObjectMethod(
			"getHostName",
			"()Ljava/lang/String;"
		);
	}
	inline jint InetAddress::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean InetAddress::isAnyLocalAddress() const
	{
		return callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	inline jboolean InetAddress::isLinkLocalAddress() const
	{
		return callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	inline jboolean InetAddress::isLoopbackAddress() const
	{
		return callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	inline jboolean InetAddress::isMCGlobal() const
	{
		return callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	inline jboolean InetAddress::isMCLinkLocal() const
	{
		return callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	inline jboolean InetAddress::isMCNodeLocal() const
	{
		return callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	inline jboolean InetAddress::isMCOrgLocal() const
	{
		return callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
	inline jboolean InetAddress::isMCSiteLocal() const
	{
		return callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	inline jboolean InetAddress::isMulticastAddress() const
	{
		return callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	inline jboolean InetAddress::isReachable(jint arg0) const
	{
		return callMethod<jboolean>(
			"isReachable",
			"(I)Z",
			arg0
		);
	}
	inline jboolean InetAddress::isReachable(java::net::NetworkInterface arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"isReachable",
			"(Ljava/net/NetworkInterface;II)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jboolean InetAddress::isSiteLocalAddress() const
	{
		return callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
	}
	inline JString InetAddress::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
