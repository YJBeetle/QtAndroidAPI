#include "../../net/DatagramSocket.hpp"
#include "../../net/SocketAddress.hpp"
#include "../ByteBuffer.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./DatagramChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	DatagramChannel::DatagramChannel(QAndroidJniObject obj) : java::nio::channels::spi::AbstractSelectableChannel(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject DatagramChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.DatagramChannel",
			"open",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	QAndroidJniObject DatagramChannel::open(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.DatagramChannel",
			"open",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/DatagramChannel;",
			arg0.object()
		);
	}
	QAndroidJniObject DatagramChannel::bind(java::net::SocketAddress arg0)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;",
			arg0.object()
		);
	}
	QAndroidJniObject DatagramChannel::connect(java::net::SocketAddress arg0)
	{
		return callObjectMethod(
			"connect",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;",
			arg0.object()
		);
	}
	QAndroidJniObject DatagramChannel::disconnect()
	{
		return callObjectMethod(
			"disconnect",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	QAndroidJniObject DatagramChannel::getLocalAddress()
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject DatagramChannel::getRemoteAddress()
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean DatagramChannel::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jint DatagramChannel::read(java::nio::ByteBuffer arg0)
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jlong DatagramChannel::read(jarray arg0)
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong DatagramChannel::read(jarray arg0, jint arg1, jint arg2)
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject DatagramChannel::receive(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"receive",
			"(Ljava/nio/ByteBuffer;)Ljava/net/SocketAddress;",
			arg0.object()
		);
	}
	jint DatagramChannel::send(java::nio::ByteBuffer arg0, java::net::SocketAddress arg1)
	{
		return callMethod<jint>(
			"send",
			"(Ljava/nio/ByteBuffer;Ljava/net/SocketAddress;)I",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject DatagramChannel::setOption(__JniBaseClass arg0, jobject arg1)
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/DatagramChannel;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject DatagramChannel::socket()
	{
		return callObjectMethod(
			"socket",
			"()Ljava/net/DatagramSocket;"
		);
	}
	jint DatagramChannel::validOps()
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
	jint DatagramChannel::write(java::nio::ByteBuffer arg0)
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jlong DatagramChannel::write(jarray arg0)
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong DatagramChannel::write(jarray arg0, jint arg1, jint arg2)
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::nio::channels
