#include "../../JByteArray.hpp"
#include "./InetAddress.hpp"
#include "./SocketAddress.hpp"
#include "./DatagramPacket.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	DatagramPacket::DatagramPacket(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1)
		: JObject(
			"java.net.DatagramPacket",
			"([BI)V",
			arg0.object<jbyteArray>(),
			arg1
		) {}
	DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1, jint arg2)
		: JObject(
			"java.net.DatagramPacket",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		) {}
	DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1, java::net::SocketAddress arg2)
		: JObject(
			"java.net.DatagramPacket",
			"([BILjava/net/SocketAddress;)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2.object()
		) {}
	DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1, jint arg2, java::net::SocketAddress arg3)
		: JObject(
			"java.net.DatagramPacket",
			"([BIILjava/net/SocketAddress;)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object()
		) {}
	DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
		: JObject(
			"java.net.DatagramPacket",
			"([BILjava/net/InetAddress;I)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2.object(),
			arg3
		) {}
	DatagramPacket::DatagramPacket(JByteArray arg0, jint arg1, jint arg2, java::net::InetAddress arg3, jint arg4)
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
	java::net::InetAddress DatagramPacket::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	JByteArray DatagramPacket::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	jint DatagramPacket::getLength() const
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint DatagramPacket::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint DatagramPacket::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	java::net::SocketAddress DatagramPacket::getSocketAddress() const
	{
		return callObjectMethod(
			"getSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	void DatagramPacket::setAddress(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"setAddress",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	void DatagramPacket::setData(JByteArray arg0) const
	{
		callMethod<void>(
			"setData",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void DatagramPacket::setData(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"setData",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void DatagramPacket::setLength(jint arg0) const
	{
		callMethod<void>(
			"setLength",
			"(I)V",
			arg0
		);
	}
	void DatagramPacket::setPort(jint arg0) const
	{
		callMethod<void>(
			"setPort",
			"(I)V",
			arg0
		);
	}
	void DatagramPacket::setSocketAddress(java::net::SocketAddress arg0) const
	{
		callMethod<void>(
			"setSocketAddress",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
} // namespace java::net

