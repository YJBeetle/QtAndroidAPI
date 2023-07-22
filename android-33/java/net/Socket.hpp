#pragma once

#include "../io/InputStream.def.hpp"
#include "../io/OutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/Void.def.hpp"
#include "../lang/invoke/VarHandle.def.hpp"
#include "./InetAddress.def.hpp"
#include "./Proxy.def.hpp"
#include "./SocketAddress.def.hpp"
#include "./SocketImpl.def.hpp"
#include "../nio/channels/SocketChannel.def.hpp"
#include "./Socket.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline Socket::Socket()
		: JObject(
			"java.net.Socket",
			"()V"
		) {}
	inline Socket::Socket(java::net::Proxy arg0)
		: JObject(
			"java.net.Socket",
			"(Ljava/net/Proxy;)V",
			arg0.object()
		) {}
	inline Socket::Socket(JString arg0, jint arg1)
		: JObject(
			"java.net.Socket",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline Socket::Socket(java::net::InetAddress arg0, jint arg1)
		: JObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;I)V",
			arg0.object(),
			arg1
		) {}
	inline Socket::Socket(JString arg0, jint arg1, jboolean arg2)
		: JObject(
			"java.net.Socket",
			"(Ljava/lang/String;IZ)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	inline Socket::Socket(java::net::InetAddress arg0, jint arg1, jboolean arg2)
		: JObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;IZ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline Socket::Socket(JString arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
		: JObject(
			"java.net.Socket",
			"(Ljava/lang/String;ILjava/net/InetAddress;I)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3
		) {}
	inline Socket::Socket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
		: JObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;ILjava/net/InetAddress;I)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
	inline void Socket::setSocketImplFactory(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.Socket",
			"setSocketImplFactory",
			"(Ljava/net/SocketImplFactory;)V",
			arg0.object()
		);
	}
	inline void Socket::bind(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	inline void Socket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void Socket::connect(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	inline void Socket::connect(java::net::SocketAddress arg0, jint arg1) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	inline java::nio::channels::SocketChannel Socket::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	inline java::net::InetAddress Socket::getInetAddress() const
	{
		return callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline java::io::InputStream Socket::getInputStream() const
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline jboolean Socket::getKeepAlive() const
	{
		return callMethod<jboolean>(
			"getKeepAlive",
			"()Z"
		);
	}
	inline java::net::InetAddress Socket::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jint Socket::getLocalPort() const
	{
		return callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	inline java::net::SocketAddress Socket::getLocalSocketAddress() const
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline jboolean Socket::getOOBInline() const
	{
		return callMethod<jboolean>(
			"getOOBInline",
			"()Z"
		);
	}
	inline JObject Socket::getOption(JObject arg0) const
	{
		return callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::io::OutputStream Socket::getOutputStream() const
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	inline jint Socket::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline jint Socket::getReceiveBufferSize() const
	{
		return callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	inline java::net::SocketAddress Socket::getRemoteSocketAddress() const
	{
		return callObjectMethod(
			"getRemoteSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline jboolean Socket::getReuseAddress() const
	{
		return callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	inline jint Socket::getSendBufferSize() const
	{
		return callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	inline jint Socket::getSoLinger() const
	{
		return callMethod<jint>(
			"getSoLinger",
			"()I"
		);
	}
	inline jint Socket::getSoTimeout() const
	{
		return callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	inline jboolean Socket::getTcpNoDelay() const
	{
		return callMethod<jboolean>(
			"getTcpNoDelay",
			"()Z"
		);
	}
	inline jint Socket::getTrafficClass() const
	{
		return callMethod<jint>(
			"getTrafficClass",
			"()I"
		);
	}
	inline jboolean Socket::isBound() const
	{
		return callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	inline jboolean Socket::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	inline jboolean Socket::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline jboolean Socket::isInputShutdown() const
	{
		return callMethod<jboolean>(
			"isInputShutdown",
			"()Z"
		);
	}
	inline jboolean Socket::isOutputShutdown() const
	{
		return callMethod<jboolean>(
			"isOutputShutdown",
			"()Z"
		);
	}
	inline void Socket::sendUrgentData(jint arg0) const
	{
		callMethod<void>(
			"sendUrgentData",
			"(I)V",
			arg0
		);
	}
	inline void Socket::setKeepAlive(jboolean arg0) const
	{
		callMethod<void>(
			"setKeepAlive",
			"(Z)V",
			arg0
		);
	}
	inline void Socket::setOOBInline(jboolean arg0) const
	{
		callMethod<void>(
			"setOOBInline",
			"(Z)V",
			arg0
		);
	}
	inline java::net::Socket Socket::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/Socket;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline void Socket::setPerformancePreferences(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setPerformancePreferences",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Socket::setReceiveBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	inline void Socket::setReuseAddress(jboolean arg0) const
	{
		callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	inline void Socket::setSendBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	inline void Socket::setSoLinger(jboolean arg0, jint arg1) const
	{
		callMethod<void>(
			"setSoLinger",
			"(ZI)V",
			arg0,
			arg1
		);
	}
	inline void Socket::setSoTimeout(jint arg0) const
	{
		callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	inline void Socket::setTcpNoDelay(jboolean arg0) const
	{
		callMethod<void>(
			"setTcpNoDelay",
			"(Z)V",
			arg0
		);
	}
	inline void Socket::setTrafficClass(jint arg0) const
	{
		callMethod<void>(
			"setTrafficClass",
			"(I)V",
			arg0
		);
	}
	inline void Socket::shutdownInput() const
	{
		callMethod<void>(
			"shutdownInput",
			"()V"
		);
	}
	inline void Socket::shutdownOutput() const
	{
		callMethod<void>(
			"shutdownOutput",
			"()V"
		);
	}
	inline JObject Socket::supportedOptions() const
	{
		return callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
	inline JString Socket::toString() const
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
