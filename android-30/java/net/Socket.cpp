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
	
	// QJniObject forward
	Socket::Socket(QJniObject obj) : JObject(obj) {}
	
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
	void Socket::bind(java::net::SocketAddress arg0)
	{
		callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	void Socket::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Socket::connect(java::net::SocketAddress arg0)
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	void Socket::connect(java::net::SocketAddress arg0, jint arg1)
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	java::nio::channels::SocketChannel Socket::getChannel()
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	java::net::InetAddress Socket::getInetAddress()
	{
		return callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	java::io::InputStream Socket::getInputStream()
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jboolean Socket::getKeepAlive()
	{
		return callMethod<jboolean>(
			"getKeepAlive",
			"()Z"
		);
	}
	java::net::InetAddress Socket::getLocalAddress()
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint Socket::getLocalPort()
	{
		return callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	java::net::SocketAddress Socket::getLocalSocketAddress()
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean Socket::getOOBInline()
	{
		return callMethod<jboolean>(
			"getOOBInline",
			"()Z"
		);
	}
	JObject Socket::getOption(JObject arg0)
	{
		return callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	java::io::OutputStream Socket::getOutputStream()
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	jint Socket::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint Socket::getReceiveBufferSize()
	{
		return callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	java::net::SocketAddress Socket::getRemoteSocketAddress()
	{
		return callObjectMethod(
			"getRemoteSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean Socket::getReuseAddress()
	{
		return callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	jint Socket::getSendBufferSize()
	{
		return callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	jint Socket::getSoLinger()
	{
		return callMethod<jint>(
			"getSoLinger",
			"()I"
		);
	}
	jint Socket::getSoTimeout()
	{
		return callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	jboolean Socket::getTcpNoDelay()
	{
		return callMethod<jboolean>(
			"getTcpNoDelay",
			"()Z"
		);
	}
	jint Socket::getTrafficClass()
	{
		return callMethod<jint>(
			"getTrafficClass",
			"()I"
		);
	}
	jboolean Socket::isBound()
	{
		return callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	jboolean Socket::isClosed()
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean Socket::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean Socket::isInputShutdown()
	{
		return callMethod<jboolean>(
			"isInputShutdown",
			"()Z"
		);
	}
	jboolean Socket::isOutputShutdown()
	{
		return callMethod<jboolean>(
			"isOutputShutdown",
			"()Z"
		);
	}
	void Socket::sendUrgentData(jint arg0)
	{
		callMethod<void>(
			"sendUrgentData",
			"(I)V",
			arg0
		);
	}
	void Socket::setKeepAlive(jboolean arg0)
	{
		callMethod<void>(
			"setKeepAlive",
			"(Z)V",
			arg0
		);
	}
	void Socket::setOOBInline(jboolean arg0)
	{
		callMethod<void>(
			"setOOBInline",
			"(Z)V",
			arg0
		);
	}
	java::net::Socket Socket::setOption(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/Socket;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	void Socket::setPerformancePreferences(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setPerformancePreferences",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Socket::setReceiveBufferSize(jint arg0)
	{
		callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	void Socket::setReuseAddress(jboolean arg0)
	{
		callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	void Socket::setSendBufferSize(jint arg0)
	{
		callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	void Socket::setSoLinger(jboolean arg0, jint arg1)
	{
		callMethod<void>(
			"setSoLinger",
			"(ZI)V",
			arg0,
			arg1
		);
	}
	void Socket::setSoTimeout(jint arg0)
	{
		callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	void Socket::setTcpNoDelay(jboolean arg0)
	{
		callMethod<void>(
			"setTcpNoDelay",
			"(Z)V",
			arg0
		);
	}
	void Socket::setTrafficClass(jint arg0)
	{
		callMethod<void>(
			"setTrafficClass",
			"(I)V",
			arg0
		);
	}
	void Socket::shutdownInput()
	{
		callMethod<void>(
			"shutdownInput",
			"()V"
		);
	}
	void Socket::shutdownOutput()
	{
		callMethod<void>(
			"shutdownOutput",
			"()V"
		);
	}
	JObject Socket::supportedOptions()
	{
		return callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
	JString Socket::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

