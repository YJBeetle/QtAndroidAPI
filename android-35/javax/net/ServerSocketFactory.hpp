#pragma once

#include "../../java/net/InetAddress.def.hpp"
#include "../../java/net/ServerSocket.def.hpp"
#include "./ServerSocketFactory.def.hpp"

namespace javax::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::net::ServerSocketFactory ServerSocketFactory::getDefault()
	{
		return callStaticObjectMethod(
			"javax.net.ServerSocketFactory",
			"getDefault",
			"()Ljavax/net/ServerSocketFactory;"
		);
	}
	inline java::net::ServerSocket ServerSocketFactory::createServerSocket() const
	{
		return callObjectMethod(
			"createServerSocket",
			"()Ljava/net/ServerSocket;"
		);
	}
	inline java::net::ServerSocket ServerSocketFactory::createServerSocket(jint arg0) const
	{
		return callObjectMethod(
			"createServerSocket",
			"(I)Ljava/net/ServerSocket;",
			arg0
		);
	}
	inline java::net::ServerSocket ServerSocketFactory::createServerSocket(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"createServerSocket",
			"(II)Ljava/net/ServerSocket;",
			arg0,
			arg1
		);
	}
	inline java::net::ServerSocket ServerSocketFactory::createServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2) const
	{
		return callObjectMethod(
			"createServerSocket",
			"(IILjava/net/InetAddress;)Ljava/net/ServerSocket;",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace javax::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net;
#endif
