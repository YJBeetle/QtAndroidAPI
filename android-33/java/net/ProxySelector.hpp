#pragma once

#include "../io/IOException.def.hpp"
#include "./InetSocketAddress.def.hpp"
#include "./SocketAddress.def.hpp"
#include "./URI.def.hpp"
#include "./ProxySelector.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline ProxySelector::ProxySelector()
		: JObject(
			"java.net.ProxySelector",
			"()V"
		) {}
	
	// Methods
	inline java::net::ProxySelector ProxySelector::getDefault()
	{
		return callStaticObjectMethod(
			"java.net.ProxySelector",
			"getDefault",
			"()Ljava/net/ProxySelector;"
		);
	}
	inline java::net::ProxySelector ProxySelector::of(java::net::InetSocketAddress arg0)
	{
		return callStaticObjectMethod(
			"java.net.ProxySelector",
			"of",
			"(Ljava/net/InetSocketAddress;)Ljava/net/ProxySelector;",
			arg0.object()
		);
	}
	inline void ProxySelector::setDefault(java::net::ProxySelector arg0)
	{
		callStaticMethod<void>(
			"java.net.ProxySelector",
			"setDefault",
			"(Ljava/net/ProxySelector;)V",
			arg0.object()
		);
	}
	inline void ProxySelector::connectFailed(java::net::URI arg0, java::net::SocketAddress arg1, java::io::IOException arg2) const
	{
		callMethod<void>(
			"connectFailed",
			"(Ljava/net/URI;Ljava/net/SocketAddress;Ljava/io/IOException;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject ProxySelector::select(java::net::URI arg0) const
	{
		return callObjectMethod(
			"select",
			"(Ljava/net/URI;)Ljava/util/List;",
			arg0.object()
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
