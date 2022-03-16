#include "../io/IOException.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	void DatagramSocket::bind(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	void DatagramSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void DatagramSocket::connect(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	void DatagramSocket::connect(java::net::InetAddress arg0, jint arg1) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/InetAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	void DatagramSocket::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	jboolean DatagramSocket::getBroadcast() const
	{
		return callMethod<jboolean>(
			"getBroadcast",
			"()Z"
		);
	}
	java::nio::channels::DatagramChannel DatagramSocket::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	java::net::InetAddress DatagramSocket::getInetAddress() const
	{
		return callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	java::net::InetAddress DatagramSocket::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint DatagramSocket::getLocalPort() const
	{
		return callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	java::net::SocketAddress DatagramSocket::getLocalSocketAddress() const
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	JObject DatagramSocket::getOption(JObject arg0) const
	{
		return callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	jint DatagramSocket::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint DatagramSocket::getReceiveBufferSize() const
	{
		return callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	java::net::SocketAddress DatagramSocket::getRemoteSocketAddress() const
	{
		return callObjectMethod(
			"getRemoteSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean DatagramSocket::getReuseAddress() const
	{
		return callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	jint DatagramSocket::getSendBufferSize() const
	{
		return callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	jint DatagramSocket::getSoTimeout() const
	{
		return callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	jint DatagramSocket::getTrafficClass() const
	{
		return callMethod<jint>(
			"getTrafficClass",
			"()I"
		);
	}
	jboolean DatagramSocket::isBound() const
	{
		return callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	jboolean DatagramSocket::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean DatagramSocket::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void DatagramSocket::receive(java::net::DatagramPacket arg0) const
	{
		callMethod<void>(
			"receive",
			"(Ljava/net/DatagramPacket;)V",
			arg0.object()
		);
	}
	void DatagramSocket::send(java::net::DatagramPacket arg0) const
	{
		callMethod<void>(
			"send",
			"(Ljava/net/DatagramPacket;)V",
			arg0.object()
		);
	}
	void DatagramSocket::setBroadcast(jboolean arg0) const
	{
		callMethod<void>(
			"setBroadcast",
			"(Z)V",
			arg0
		);
	}
	java::net::DatagramSocket DatagramSocket::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/DatagramSocket;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	void DatagramSocket::setReceiveBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setReuseAddress(jboolean arg0) const
	{
		callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	void DatagramSocket::setSendBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setSoTimeout(jint arg0) const
	{
		callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	void DatagramSocket::setTrafficClass(jint arg0) const
	{
		callMethod<void>(
			"setTrafficClass",
			"(I)V",
			arg0
		);
	}
	JObject DatagramSocket::supportedOptions() const
	{
		return callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::net

