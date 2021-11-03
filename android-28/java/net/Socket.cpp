#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/Void.hpp"
#include "./InetAddress.hpp"
#include "./Proxy.hpp"
#include "./SocketAddress.hpp"
#include "./SocketImpl.hpp"
#include "../nio/channels/SocketChannel.hpp"
#include "./Socket.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	Socket::Socket(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Socket::Socket()
		: JObject(
			"java.net.Socket",
			"()V"
		) {}
	Socket::Socket(java::net::Proxy arg0)
		: JObject(
			"java.net.Socket",
			"(Ljava/net/Proxy;)V",
			arg0.object()
		) {}
	Socket::Socket(JString arg0, jint arg1)
		: JObject(
			"java.net.Socket",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	Socket::Socket(java::net::InetAddress arg0, jint arg1)
		: JObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;I)V",
			arg0.object(),
			arg1
		) {}
	Socket::Socket(JString arg0, jint arg1, jboolean arg2)
		: JObject(
			"java.net.Socket",
			"(Ljava/lang/String;IZ)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	Socket::Socket(java::net::InetAddress arg0, jint arg1, jboolean arg2)
		: JObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;IZ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	Socket::Socket(JString arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
		: JObject(
			"java.net.Socket",
			"(Ljava/lang/String;ILjava/net/InetAddress;I)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3
		) {}
	Socket::Socket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
		: JObject(
			"java.net.Socket",
			"(Ljava/net/InetAddress;ILjava/net/InetAddress;I)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
	void Socket::setSocketImplFactory(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.Socket",
			"setSocketImplFactory",
			"(Ljava/net/SocketImplFactory;)V",
			arg0.object()
		);
	}
	void Socket::bind(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	void Socket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Socket::connect(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	void Socket::connect(java::net::SocketAddress arg0, jint arg1) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	java::nio::channels::SocketChannel Socket::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	java::net::InetAddress Socket::getInetAddress() const
	{
		return callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	java::io::InputStream Socket::getInputStream() const
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jboolean Socket::getKeepAlive() const
	{
		return callMethod<jboolean>(
			"getKeepAlive",
			"()Z"
		);
	}
	java::net::InetAddress Socket::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint Socket::getLocalPort() const
	{
		return callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	java::net::SocketAddress Socket::getLocalSocketAddress() const
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean Socket::getOOBInline() const
	{
		return callMethod<jboolean>(
			"getOOBInline",
			"()Z"
		);
	}
	JObject Socket::getOption(JObject arg0) const
	{
		return callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::io::OutputStream Socket::getOutputStream() const
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	jint Socket::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint Socket::getReceiveBufferSize() const
	{
		return callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	java::net::SocketAddress Socket::getRemoteSocketAddress() const
	{
		return callObjectMethod(
			"getRemoteSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean Socket::getReuseAddress() const
	{
		return callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	jint Socket::getSendBufferSize() const
	{
		return callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	jint Socket::getSoLinger() const
	{
		return callMethod<jint>(
			"getSoLinger",
			"()I"
		);
	}
	jint Socket::getSoTimeout() const
	{
		return callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	jboolean Socket::getTcpNoDelay() const
	{
		return callMethod<jboolean>(
			"getTcpNoDelay",
			"()Z"
		);
	}
	jint Socket::getTrafficClass() const
	{
		return callMethod<jint>(
			"getTrafficClass",
			"()I"
		);
	}
	jboolean Socket::isBound() const
	{
		return callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	jboolean Socket::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean Socket::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean Socket::isInputShutdown() const
	{
		return callMethod<jboolean>(
			"isInputShutdown",
			"()Z"
		);
	}
	jboolean Socket::isOutputShutdown() const
	{
		return callMethod<jboolean>(
			"isOutputShutdown",
			"()Z"
		);
	}
	void Socket::sendUrgentData(jint arg0) const
	{
		callMethod<void>(
			"sendUrgentData",
			"(I)V",
			arg0
		);
	}
	void Socket::setKeepAlive(jboolean arg0) const
	{
		callMethod<void>(
			"setKeepAlive",
			"(Z)V",
			arg0
		);
	}
	void Socket::setOOBInline(jboolean arg0) const
	{
		callMethod<void>(
			"setOOBInline",
			"(Z)V",
			arg0
		);
	}
	java::net::Socket Socket::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/Socket;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	void Socket::setPerformancePreferences(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setPerformancePreferences",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Socket::setReceiveBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	void Socket::setReuseAddress(jboolean arg0) const
	{
		callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	void Socket::setSendBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	void Socket::setSoLinger(jboolean arg0, jint arg1) const
	{
		callMethod<void>(
			"setSoLinger",
			"(ZI)V",
			arg0,
			arg1
		);
	}
	void Socket::setSoTimeout(jint arg0) const
	{
		callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	void Socket::setTcpNoDelay(jboolean arg0) const
	{
		callMethod<void>(
			"setTcpNoDelay",
			"(Z)V",
			arg0
		);
	}
	void Socket::setTrafficClass(jint arg0) const
	{
		callMethod<void>(
			"setTrafficClass",
			"(I)V",
			arg0
		);
	}
	void Socket::shutdownInput() const
	{
		callMethod<void>(
			"shutdownInput",
			"()V"
		);
	}
	void Socket::shutdownOutput() const
	{
		callMethod<void>(
			"shutdownOutput",
			"()V"
		);
	}
	JObject Socket::supportedOptions() const
	{
		return callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
	JString Socket::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

