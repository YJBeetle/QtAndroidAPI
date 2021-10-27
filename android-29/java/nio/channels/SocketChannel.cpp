#include "../../net/Socket.hpp"
#include "../../net/SocketAddress.hpp"
#include "../ByteBuffer.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./SocketChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	SocketChannel::SocketChannel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SocketChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.SocketChannel",
			"open",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	QAndroidJniObject SocketChannel::open(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.SocketChannel",
			"open",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/SocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SocketChannel::open(java::net::SocketAddress arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.SocketChannel",
			"open",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SocketChannel::bind(java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;",
			arg0.__jniObject().object()
		);
	}
	jboolean SocketChannel::connect(java::net::SocketAddress arg0)
	{
		return __thiz.callMethod<jboolean>(
			"connect",
			"(Ljava/net/SocketAddress;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean SocketChannel::finishConnect()
	{
		return __thiz.callMethod<jboolean>(
			"finishConnect",
			"()Z"
		);
	}
	QAndroidJniObject SocketChannel::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject SocketChannel::getRemoteAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean SocketChannel::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean SocketChannel::isConnectionPending()
	{
		return __thiz.callMethod<jboolean>(
			"isConnectionPending",
			"()Z"
		);
	}
	jint SocketChannel::read(java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jlong SocketChannel::read(jarray arg0)
	{
		return __thiz.callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong SocketChannel::read(jarray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject SocketChannel::setOption(__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/SocketChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SocketChannel::shutdownInput()
	{
		return __thiz.callObjectMethod(
			"shutdownInput",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	QAndroidJniObject SocketChannel::shutdownOutput()
	{
		return __thiz.callObjectMethod(
			"shutdownOutput",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	QAndroidJniObject SocketChannel::socket()
	{
		return __thiz.callObjectMethod(
			"socket",
			"()Ljava/net/Socket;"
		);
	}
	jint SocketChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I"
		);
	}
	jint SocketChannel::write(java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jlong SocketChannel::write(jarray arg0)
	{
		return __thiz.callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong SocketChannel::write(jarray arg0, jint arg1, jint arg2)
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

