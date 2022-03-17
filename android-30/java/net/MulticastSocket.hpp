#pragma once

#include "./DatagramPacket.def.hpp"
#include "./DatagramSocket.def.hpp"
#include "./InetAddress.def.hpp"
#include "./NetworkInterface.def.hpp"
#include "./SocketAddress.def.hpp"
#include "./MulticastSocket.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline MulticastSocket::MulticastSocket()
		: java::net::DatagramSocket(
			"java.net.MulticastSocket",
			"()V"
		) {}
	inline MulticastSocket::MulticastSocket(jint arg0)
		: java::net::DatagramSocket(
			"java.net.MulticastSocket",
			"(I)V",
			arg0
		) {}
	inline MulticastSocket::MulticastSocket(java::net::SocketAddress arg0)
		: java::net::DatagramSocket(
			"java.net.MulticastSocket",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		) {}
	
	// Methods
	inline java::net::InetAddress MulticastSocket::getInterface() const
	{
		return callObjectMethod(
			"getInterface",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jboolean MulticastSocket::getLoopbackMode() const
	{
		return callMethod<jboolean>(
			"getLoopbackMode",
			"()Z"
		);
	}
	inline java::net::NetworkInterface MulticastSocket::getNetworkInterface() const
	{
		return callObjectMethod(
			"getNetworkInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	inline jbyte MulticastSocket::getTTL() const
	{
		return callMethod<jbyte>(
			"getTTL",
			"()B"
		);
	}
	inline jint MulticastSocket::getTimeToLive() const
	{
		return callMethod<jint>(
			"getTimeToLive",
			"()I"
		);
	}
	inline void MulticastSocket::joinGroup(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"joinGroup",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	inline void MulticastSocket::joinGroup(java::net::SocketAddress arg0, java::net::NetworkInterface arg1) const
	{
		callMethod<void>(
			"joinGroup",
			"(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MulticastSocket::leaveGroup(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"leaveGroup",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	inline void MulticastSocket::leaveGroup(java::net::SocketAddress arg0, java::net::NetworkInterface arg1) const
	{
		callMethod<void>(
			"leaveGroup",
			"(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MulticastSocket::send(java::net::DatagramPacket arg0, jbyte arg1) const
	{
		callMethod<void>(
			"send",
			"(Ljava/net/DatagramPacket;B)V",
			arg0.object(),
			arg1
		);
	}
	inline void MulticastSocket::setInterface(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"setInterface",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	inline void MulticastSocket::setLoopbackMode(jboolean arg0) const
	{
		callMethod<void>(
			"setLoopbackMode",
			"(Z)V",
			arg0
		);
	}
	inline void MulticastSocket::setNetworkInterface(java::net::NetworkInterface arg0) const
	{
		callMethod<void>(
			"setNetworkInterface",
			"(Ljava/net/NetworkInterface;)V",
			arg0.object()
		);
	}
	inline void MulticastSocket::setTTL(jbyte arg0) const
	{
		callMethod<void>(
			"setTTL",
			"(B)V",
			arg0
		);
	}
	inline void MulticastSocket::setTimeToLive(jint arg0) const
	{
		callMethod<void>(
			"setTimeToLive",
			"(I)V",
			arg0
		);
	}
} // namespace java::net

// Base class headers
#include "./DatagramSocket.hpp"

