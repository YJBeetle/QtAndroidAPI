#pragma once

#include "../../JByteArray.hpp"
#include "./InetAddress.def.hpp"
#include "./SocketAddress.def.hpp"
#include "./DatagramPacket.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1)
		: JObject(
			"java.net.DatagramPacket",
			"([BI)V",
			arg0.object<jbyteArray>(),
			arg1
		) {}
	inline DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1, jint arg2)
		: JObject(
			"java.net.DatagramPacket",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		) {}
	inline DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1, java::net::SocketAddress arg2)
		: JObject(
			"java.net.DatagramPacket",
			"([BILjava/net/SocketAddress;)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2.object()
		) {}
	inline DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1, jint arg2, java::net::SocketAddress arg3)
		: JObject(
			"java.net.DatagramPacket",
			"([BIILjava/net/SocketAddress;)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object()
		) {}
	inline DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
		: JObject(
			"java.net.DatagramPacket",
			"([BILjava/net/InetAddress;I)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2.object(),
			arg3
		) {}
	inline DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1, jint arg2, java::net::InetAddress arg3, jint arg4)
		: JObject(
			"java.net.DatagramPacket",
			"([BIILjava/net/InetAddress;I)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object(),
			arg4
		) {}
	
	// Methods
	inline java::net::InetAddress DatagramPacket::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline JByteArray DatagramPacket::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline jint DatagramPacket::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	inline jint DatagramPacket::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	inline jint DatagramPacket::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline java::net::SocketAddress DatagramPacket::getSocketAddress() const
	{
		return callObjectMethod(
			"getSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline void DatagramPacket::setAddress(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"setAddress",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	inline void DatagramPacket::setData(JByteArray arg0) const
	{
		callMethod<void>(
			"setData",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void DatagramPacket::setData(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setData",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void DatagramPacket::setLength(jint arg0) const
	{
		callMethod<void>(
			"setLength",
			"(I)V",
			arg0
		);
	}
	inline void DatagramPacket::setPort(jint arg0) const
	{
		callMethod<void>(
			"setPort",
			"(I)V",
			arg0
		);
	}
	inline void DatagramPacket::setSocketAddress(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"setSocketAddress",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
} // namespace java::net

// Base class headers

