#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/Void.def.hpp"
#include "./InetAddress.def.hpp"
#include "./Socket.def.hpp"
#include "./SocketAddress.def.hpp"
#include "./SocketImpl.def.hpp"
#include "../nio/channels/ServerSocketChannel.def.hpp"
#include "./ServerSocket.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline ServerSocket::ServerSocket()
		: JObject(
			"java.net.ServerSocket",
			"()V"
		) {}
	inline ServerSocket::ServerSocket(jint arg0)
		: JObject(
			"java.net.ServerSocket",
			"(I)V",
			arg0
		) {}
	inline ServerSocket::ServerSocket(jint arg0, jint arg1)
		: JObject(
			"java.net.ServerSocket",
			"(II)V",
			arg0,
			arg1
		) {}
	inline ServerSocket::ServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2)
		: JObject(
			"java.net.ServerSocket",
			"(IILjava/net/InetAddress;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline void ServerSocket::setSocketFactory(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.ServerSocket",
			"setSocketFactory",
			"(Ljava/net/SocketImplFactory;)V",
			arg0.object()
		);
	}
	inline java::net::Socket ServerSocket::accept() const
	{
		return callObjectMethod(
			"accept",
			"()Ljava/net/Socket;"
		);
	}
	inline void ServerSocket::bind(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	inline void ServerSocket::bind(java::net::SocketAddress arg0, jint arg1) const
	{
		callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ServerSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline java::nio::channels::ServerSocketChannel ServerSocket::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	inline java::net::InetAddress ServerSocket::getInetAddress() const
	{
		return callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jint ServerSocket::getLocalPort() const
	{
		return callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	inline java::net::SocketAddress ServerSocket::getLocalSocketAddress() const
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline JObject ServerSocket::getOption(JObject arg0) const
	{
		return callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline jint ServerSocket::getReceiveBufferSize() const
	{
		return callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	inline jboolean ServerSocket::getReuseAddress() const
	{
		return callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	inline jint ServerSocket::getSoTimeout() const
	{
		return callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	inline jboolean ServerSocket::isBound() const
	{
		return callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	inline jboolean ServerSocket::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	inline java::net::ServerSocket ServerSocket::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/ServerSocket;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline void ServerSocket::setPerformancePreferences(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setPerformancePreferences",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void ServerSocket::setReceiveBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	inline void ServerSocket::setReuseAddress(jboolean arg0) const
	{
		callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	inline void ServerSocket::setSoTimeout(jint arg0) const
	{
		callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	inline JObject ServerSocket::supportedOptions() const
	{
		return callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
	inline JString ServerSocket::toString() const
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
