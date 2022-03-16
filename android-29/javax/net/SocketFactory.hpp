#pragma once

#include "../../JString.hpp"
#include "../../java/net/InetAddress.def.hpp"
#include "../../java/net/Socket.def.hpp"
#include "./SocketFactory.def.hpp"

namespace javax::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::net::SocketFactory SocketFactory::getDefault()
	{
		return callStaticObjectMethod(
			"javax.net.SocketFactory",
			"getDefault",
			"()Ljavax/net/SocketFactory;"
		);
	}
	inline java::net::Socket SocketFactory::createSocket() const
	{
		return callObjectMethod(
			"createSocket",
			"()Ljava/net/Socket;"
		);
	}
	inline java::net::Socket SocketFactory::createSocket(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;I)Ljava/net/Socket;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline java::net::Socket SocketFactory::createSocket(java::net::InetAddress arg0, jint arg1) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.object(),
			arg1
		);
	}
	inline java::net::Socket SocketFactory::createSocket(JString arg0, jint arg1, java::net::InetAddress arg2, jint arg3) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline java::net::Socket SocketFactory::createSocket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
} // namespace javax::net

// Base class headers

