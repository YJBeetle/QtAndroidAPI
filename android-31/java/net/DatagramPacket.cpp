#include "./InetAddress.hpp"
#include "./SocketAddress.hpp"
#include "./DatagramPacket.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	DatagramPacket::DatagramPacket(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DatagramPacket::DatagramPacket(jbyteArray arg0, jint arg1)
		: __JniBaseClass(
			"java.net.DatagramPacket",
			"([BI)V",
			arg0,
			arg1
		) {}
	DatagramPacket::DatagramPacket(jbyteArray arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"java.net.DatagramPacket",
			"([BII)V",
			arg0,
			arg1,
			arg2
		) {}
	DatagramPacket::DatagramPacket(jbyteArray arg0, jint arg1, java::net::SocketAddress arg2)
		: __JniBaseClass(
			"java.net.DatagramPacket",
			"([BILjava/net/SocketAddress;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	DatagramPacket::DatagramPacket(jbyteArray arg0, jint arg1, jint arg2, java::net::SocketAddress arg3)
		: __JniBaseClass(
			"java.net.DatagramPacket",
			"([BIILjava/net/SocketAddress;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	DatagramPacket::DatagramPacket(jbyteArray arg0, jint arg1, java::net::InetAddress arg2, jint arg3)
		: __JniBaseClass(
			"java.net.DatagramPacket",
			"([BILjava/net/InetAddress;I)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		) {}
	DatagramPacket::DatagramPacket(jbyteArray arg0, jint arg1, jint arg2, java::net::InetAddress arg3, jint arg4)
		: __JniBaseClass(
			"java.net.DatagramPacket",
			"([BIILjava/net/InetAddress;I)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4
		) {}
	
	// Methods
	java::net::InetAddress DatagramPacket::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jbyteArray DatagramPacket::getData()
	{
		return callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jint DatagramPacket::getLength()
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint DatagramPacket::getOffset()
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint DatagramPacket::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	java::net::SocketAddress DatagramPacket::getSocketAddress()
	{
		return callObjectMethod(
			"getSocketAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	void DatagramPacket::setAddress(java::net::InetAddress arg0)
	{
		callMethod<void>(
			"setAddress",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	void DatagramPacket::setData(jbyteArray arg0)
	{
		callMethod<void>(
			"setData",
			"([B)V",
			arg0
		);
	}
	void DatagramPacket::setData(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setData",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DatagramPacket::setLength(jint arg0)
	{
		callMethod<void>(
			"setLength",
			"(I)V",
			arg0
		);
	}
	void DatagramPacket::setPort(jint arg0)
	{
		callMethod<void>(
			"setPort",
			"(I)V",
			arg0
		);
	}
	void DatagramPacket::setSocketAddress(java::net::SocketAddress arg0)
	{
		callMethod<void>(
			"setSocketAddress",
			"(Ljava/net/SocketAddress;)V",
			arg0.object()
		);
	}
} // namespace java::net

