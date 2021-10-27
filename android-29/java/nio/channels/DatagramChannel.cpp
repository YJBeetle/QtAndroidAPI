#include "../../net/DatagramSocket.hpp"
#include "../../net/SocketAddress.hpp"
#include "../ByteBuffer.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./DatagramChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	DatagramChannel::DatagramChannel(QAndroidJniObject obj) { __thiz = obj; }
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
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DatagramChannel::bind(java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DatagramChannel::connect(java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"connect",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DatagramChannel::disconnect()
	{
		return __thiz.callObjectMethod(
			"disconnect",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	QAndroidJniObject DatagramChannel::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject DatagramChannel::getRemoteAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean DatagramChannel::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jint DatagramChannel::read(java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jlong DatagramChannel::read(jarray arg0)
	{
		return __thiz.callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong DatagramChannel::read(jarray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject DatagramChannel::receive(java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"receive",
			"(Ljava/nio/ByteBuffer;)Ljava/net/SocketAddress;",
			arg0.__jniObject().object()
		);
	}
	jint DatagramChannel::send(java::nio::ByteBuffer arg0, java::net::SocketAddress arg1)
	{
		return __thiz.callMethod<jint>(
			"send",
			"(Ljava/nio/ByteBuffer;Ljava/net/SocketAddress;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DatagramChannel::setOption(__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/DatagramChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DatagramChannel::socket()
	{
		return __thiz.callObjectMethod(
			"socket",
			"()Ljava/net/DatagramSocket;"
		);
	}
	jint DatagramChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I"
		);
	}
	jint DatagramChannel::write(java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jlong DatagramChannel::write(jarray arg0)
	{
		return __thiz.callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong DatagramChannel::write(jarray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::nio::channels

