#include "../io/IOException.hpp"
#include "./DatagramPacket.hpp"
#include "./DatagramSocketImpl.hpp"
#include "./InetAddress.hpp"
#include "./SocketAddress.hpp"
#include "./SocketException.hpp"
#include "../nio/channels/DatagramChannel.hpp"
#include "./DatagramSocket.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	DatagramSocket::DatagramSocket(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DatagramSocket::DatagramSocket()
		: JObject(
			"java.net.DatagramSocket",
			"()V"
		) {}
	DatagramSocket::DatagramSocket(jint arg0)
		: JObject(
			"java.net.DatagramSocket",
			"(I)V",
			arg0
		) {}
	DatagramSocket::DatagramSocket(java::net::SocketAddress arg0)
		: JObject(
			"java.net.DatagramSocket",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		) {}
	DatagramSocket::DatagramSocket(jint arg0, java::net::InetAddress arg1)
		: JObject(
			"java.net.DatagramSocket",
			"(ILjava/net/InetAddress;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	void DatagramSocket::setDatagramSocketImplFactory(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.DatagramSocket",
			"setDatagramSocketImplFactory",
			"(Ljava/net/DatagramSocketImplFactory;)V",
			arg0.object()
		);
	}
	void DatagramSocket::bind(java::net::SocketAddress arg0)
	{
		callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	void DatagramSocket::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void DatagramSocket::connect(java::net::SocketAddress arg0)
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	void DatagramSocket::connect(java::net::InetAddress arg0, jint arg1)
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/InetAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	void DatagramSocket::disconnect()
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	jboolean DatagramSocket::getBroadcast()
	{
		return callMethod<jboolean>(
			"getBroadcast",
			"()Z"
		);
	}
	java::nio::channels::DatagramChannel DatagramSocket::getChannel()
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	java::net::InetAddress DatagramSocket::getInetAddress()
	{
		return callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	java::net::InetAddress DatagramSocket::getLocalAddress()
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint DatagramSocket::getLocalPort()
	{
		return callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	java::net::SocketAddress DatagramSocket::getLocalSocketAddress()
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jobject DatagramSocket::getOption(JObject arg0)
	{
		return callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jint DatagramSocket::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint DatagramSocket::getReceiveBufferSize()
	{
		return callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	java::net::SocketAddress DatagramSocket::getRemoteSocketAddress()
	{
		return callObjectMethod(
			"getRemoteSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean DatagramSocket::getReuseAddress()
	{
		return callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	jint DatagramSocket::getSendBufferSize()
	{
		return callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	jint DatagramSocket::getSoTimeout()
	{
		return callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	jint DatagramSocket::getTrafficClass()
	{
		return callMethod<jint>(
			"getTrafficClass",
			"()I"
		);
	}
	jboolean DatagramSocket::isBound()
	{
		return callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	jboolean DatagramSocket::isClosed()
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean DatagramSocket::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void DatagramSocket::receive(java::net::DatagramPacket arg0)
	{
		callMethod<void>(
			"receive",
			"(Ljava/net/DatagramPacket;)V",
			arg0.object()
		);
	}
	void DatagramSocket::send(java::net::DatagramPacket arg0)
	{
		callMethod<void>(
			"send",
			"(Ljava/net/DatagramPacket;)V",
			arg0.object()
		);
	}
	void DatagramSocket::setBroadcast(jboolean arg0)
	{
		callMethod<void>(
			"setBroadcast",
			"(Z)V",
			arg0
		);
	}
	java::net::DatagramSocket DatagramSocket::setOption(JObject arg0, jobject arg1)
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/DatagramSocket;",
			arg0.object(),
			arg1
		);
	}
	void DatagramSocket::setReceiveBufferSize(jint arg0)
	{
		callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setReuseAddress(jboolean arg0)
	{
		callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	void DatagramSocket::setSendBufferSize(jint arg0)
	{
		callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setSoTimeout(jint arg0)
	{
		callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setTrafficClass(jint arg0)
	{
		callMethod<void>(
			"setTrafficClass",
			"(I)V",
			arg0
		);
	}
	JObject DatagramSocket::supportedOptions()
	{
		return callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::net

