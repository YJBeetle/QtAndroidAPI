#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/Void.hpp"
#include "./InetAddress.hpp"
#include "./Socket.hpp"
#include "./SocketAddress.hpp"
#include "./SocketImpl.hpp"
#include "../nio/channels/ServerSocketChannel.hpp"
#include "./ServerSocket.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	ServerSocket::ServerSocket(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ServerSocket::ServerSocket()
		: JObject(
			"java.net.ServerSocket",
			"()V"
		) {}
	ServerSocket::ServerSocket(jint arg0)
		: JObject(
			"java.net.ServerSocket",
			"(I)V",
			arg0
		) {}
	ServerSocket::ServerSocket(jint arg0, jint arg1)
		: JObject(
			"java.net.ServerSocket",
			"(II)V",
			arg0,
			arg1
		) {}
	ServerSocket::ServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2)
		: JObject(
			"java.net.ServerSocket",
			"(IILjava/net/InetAddress;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	void ServerSocket::setSocketFactory(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.ServerSocket",
			"setSocketFactory",
			"(Ljava/net/SocketImplFactory;)V",
			arg0.object()
		);
	}
	java::net::Socket ServerSocket::accept() const
	{
		return callObjectMethod(
			"accept",
			"()Ljava/net/Socket;"
		);
	}
	void ServerSocket::bind(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	void ServerSocket::bind(java::net::SocketAddress arg0, jint arg1) const
	{
		callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	void ServerSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::nio::channels::ServerSocketChannel ServerSocket::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	java::net::InetAddress ServerSocket::getInetAddress() const
	{
		return callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint ServerSocket::getLocalPort() const
	{
		return callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	java::net::SocketAddress ServerSocket::getLocalSocketAddress() const
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	JObject ServerSocket::getOption(JObject arg0) const
	{
		return callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	jint ServerSocket::getReceiveBufferSize() const
	{
		return callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	jboolean ServerSocket::getReuseAddress() const
	{
		return callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	jint ServerSocket::getSoTimeout() const
	{
		return callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	jboolean ServerSocket::isBound() const
	{
		return callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	jboolean ServerSocket::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	java::net::ServerSocket ServerSocket::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/ServerSocket;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	void ServerSocket::setPerformancePreferences(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setPerformancePreferences",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ServerSocket::setReceiveBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	void ServerSocket::setReuseAddress(jboolean arg0) const
	{
		callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	void ServerSocket::setSoTimeout(jint arg0) const
	{
		callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	JObject ServerSocket::supportedOptions() const
	{
		return callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
	JString ServerSocket::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

