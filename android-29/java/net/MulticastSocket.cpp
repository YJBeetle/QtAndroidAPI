#include "./DatagramPacket.hpp"
#include "./DatagramSocket.hpp"
#include "./InetAddress.hpp"
#include "./NetworkInterface.hpp"
#include "./SocketAddress.hpp"
#include "./MulticastSocket.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	MulticastSocket::MulticastSocket()
		: java::net::DatagramSocket(
			"java.net.MulticastSocket",
			"()V"
		) {}
	MulticastSocket::MulticastSocket(jint arg0)
		: java::net::DatagramSocket(
			"java.net.MulticastSocket",
			"(I)V",
			arg0
		) {}
	MulticastSocket::MulticastSocket(java::net::SocketAddress arg0)
		: java::net::DatagramSocket(
			"java.net.MulticastSocket",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		) {}
	
	// Methods
	java::net::InetAddress MulticastSocket::getInterface() const
	{
		return callObjectMethod(
			"getInterface",
			"()Ljava/net/InetAddress;"
		);
	}
	jboolean MulticastSocket::getLoopbackMode() const
	{
		return callMethod<jboolean>(
			"getLoopbackMode",
			"()Z"
		);
	}
	java::net::NetworkInterface MulticastSocket::getNetworkInterface() const
	{
		return callObjectMethod(
			"getNetworkInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	jbyte MulticastSocket::getTTL() const
	{
		return callMethod<jbyte>(
			"getTTL",
			"()B"
		);
	}
	jint MulticastSocket::getTimeToLive() const
	{
		return callMethod<jint>(
			"getTimeToLive",
			"()I"
		);
	}
	void MulticastSocket::joinGroup(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"joinGroup",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	void MulticastSocket::joinGroup(java::net::SocketAddress arg0, java::net::NetworkInterface arg1) const
	{
		callMethod<void>(
			"joinGroup",
			"(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MulticastSocket::leaveGroup(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"leaveGroup",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	void MulticastSocket::leaveGroup(java::net::SocketAddress arg0, java::net::NetworkInterface arg1) const
	{
		callMethod<void>(
			"leaveGroup",
			"(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MulticastSocket::send(java::net::DatagramPacket arg0, jbyte arg1) const
	{
		callMethod<void>(
			"send",
			"(Ljava/net/DatagramPacket;B)V",
			arg0.object(),
			arg1
		);
	}
	void MulticastSocket::setInterface(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"setInterface",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	void MulticastSocket::setLoopbackMode(jboolean arg0) const
	{
		callMethod<void>(
			"setLoopbackMode",
			"(Z)V",
			arg0
		);
	}
	void MulticastSocket::setNetworkInterface(java::net::NetworkInterface arg0) const
	{
		callMethod<void>(
			"setNetworkInterface",
			"(Ljava/net/NetworkInterface;)V",
			arg0.object()
		);
	}
	void MulticastSocket::setTTL(jbyte arg0) const
	{
		callMethod<void>(
			"setTTL",
			"(B)V",
			arg0
		);
	}
	void MulticastSocket::setTimeToLive(jint arg0) const
	{
		callMethod<void>(
			"setTimeToLive",
			"(I)V",
			arg0
		);
	}
} // namespace java::net

