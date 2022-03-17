#pragma once

#include "../io/IOException.def.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DatagramPacket.def.hpp"
#include "./DatagramSocketImpl.def.hpp"
#include "./InetAddress.def.hpp"
#include "./SocketAddress.def.hpp"
#include "./SocketException.def.hpp"
#include "../nio/channels/DatagramChannel.def.hpp"
#include "./DatagramSocket.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline DatagramSocket::DatagramSocket()
		: JObject(
			"java.net.DatagramSocket",
			"()V"
		) {}
	inline DatagramSocket::DatagramSocket(jint arg0)
		: JObject(
			"java.net.DatagramSocket",
			"(I)V",
			arg0
		) {}
	inline DatagramSocket::DatagramSocket(java::net::SocketAddress arg0)
		: JObject(
			"java.net.DatagramSocket",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		) {}
	inline DatagramSocket::DatagramSocket(jint arg0, java::net::InetAddress arg1)
		: JObject(
			"java.net.DatagramSocket",
			"(ILjava/net/InetAddress;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline void DatagramSocket::setDatagramSocketImplFactory(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.DatagramSocket",
			"setDatagramSocketImplFactory",
			"(Ljava/net/DatagramSocketImplFactory;)V",
			arg0.object()
		);
	}
	inline void DatagramSocket::bind(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"bind",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	inline void DatagramSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void DatagramSocket::connect(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
	inline void DatagramSocket::connect(java::net::InetAddress arg0, jint arg1) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/net/InetAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void DatagramSocket::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	inline jboolean DatagramSocket::getBroadcast() const
	{
		return callMethod<jboolean>(
			"getBroadcast",
			"()Z"
		);
	}
	inline java::nio::channels::DatagramChannel DatagramSocket::getChannel() const
	{
		return callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	inline java::net::InetAddress DatagramSocket::getInetAddress() const
	{
		return callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline java::net::InetAddress DatagramSocket::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jint DatagramSocket::getLocalPort() const
	{
		return callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	inline java::net::SocketAddress DatagramSocket::getLocalSocketAddress() const
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline JObject DatagramSocket::getOption(JObject arg0) const
	{
		return callObjectMethod(
			"getOption",
			"(Ljava/net/SocketOption;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline jint DatagramSocket::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline jint DatagramSocket::getReceiveBufferSize() const
	{
		return callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	inline java::net::SocketAddress DatagramSocket::getRemoteSocketAddress() const
	{
		return callObjectMethod(
			"getRemoteSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline jboolean DatagramSocket::getReuseAddress() const
	{
		return callMethod<jboolean>(
			"getReuseAddress",
			"()Z"
		);
	}
	inline jint DatagramSocket::getSendBufferSize() const
	{
		return callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	inline jint DatagramSocket::getSoTimeout() const
	{
		return callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	inline jint DatagramSocket::getTrafficClass() const
	{
		return callMethod<jint>(
			"getTrafficClass",
			"()I"
		);
	}
	inline jboolean DatagramSocket::isBound() const
	{
		return callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	inline jboolean DatagramSocket::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	inline jboolean DatagramSocket::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline void DatagramSocket::receive(java::net::DatagramPacket arg0) const
	{
		callMethod<void>(
			"receive",
			"(Ljava/net/DatagramPacket;)V",
			arg0.object()
		);
	}
	inline void DatagramSocket::send(java::net::DatagramPacket arg0) const
	{
		callMethod<void>(
			"send",
			"(Ljava/net/DatagramPacket;)V",
			arg0.object()
		);
	}
	inline void DatagramSocket::setBroadcast(jboolean arg0) const
	{
		callMethod<void>(
			"setBroadcast",
			"(Z)V",
			arg0
		);
	}
	inline java::net::DatagramSocket DatagramSocket::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/DatagramSocket;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline void DatagramSocket::setReceiveBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	inline void DatagramSocket::setReuseAddress(jboolean arg0) const
	{
		callMethod<void>(
			"setReuseAddress",
			"(Z)V",
			arg0
		);
	}
	inline void DatagramSocket::setSendBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	inline void DatagramSocket::setSoTimeout(jint arg0) const
	{
		callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	inline void DatagramSocket::setTrafficClass(jint arg0) const
	{
		callMethod<void>(
			"setTrafficClass",
			"(I)V",
			arg0
		);
	}
	inline JObject DatagramSocket::supportedOptions() const
	{
		return callObjectMethod(
			"supportedOptions",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::net

// Base class headers

