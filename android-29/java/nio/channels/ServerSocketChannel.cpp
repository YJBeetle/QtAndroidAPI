#include "../../net/ServerSocket.hpp"
#include "../../net/SocketAddress.hpp"
#include "./SocketChannel.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./ServerSocketChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	ServerSocketChannel::ServerSocketChannel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ServerSocketChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.ServerSocketChannel",
			"open",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	QAndroidJniObject ServerSocketChannel::open(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.ServerSocketChannel",
			"open",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ServerSocketChannel::accept()
	{
		return __thiz.callObjectMethod(
			"accept",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	QAndroidJniObject ServerSocketChannel::bind(java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ServerSocketChannel::bind(java::net::SocketAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;I)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ServerSocketChannel::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject ServerSocketChannel::setOption(__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ServerSocketChannel::socket()
	{
		return __thiz.callObjectMethod(
			"socket",
			"()Ljava/net/ServerSocket;"
		);
	}
	jint ServerSocketChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

