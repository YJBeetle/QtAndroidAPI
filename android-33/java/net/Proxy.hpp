#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Proxy_Type.def.hpp"
#include "./SocketAddress.def.hpp"
#include "./Proxy.def.hpp"

namespace java::net
{
	// Fields
	inline java::net::Proxy Proxy::NO_PROXY()
	{
		return getStaticObjectField(
			"java.net.Proxy",
			"NO_PROXY",
			"Ljava/net/Proxy;"
		);
	}
	
	// Constructors
	inline Proxy::Proxy(java::net::Proxy_Type arg0, java::net::SocketAddress arg1)
		: JObject(
			"java.net.Proxy",
			"(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline java::net::SocketAddress Proxy::address() const
	{
		return callObjectMethod(
			"address",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline jboolean Proxy::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Proxy::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Proxy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::net::Proxy_Type Proxy::type() const
	{
		return callObjectMethod(
			"type",
			"()Ljava/net/Proxy$Type;"
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
