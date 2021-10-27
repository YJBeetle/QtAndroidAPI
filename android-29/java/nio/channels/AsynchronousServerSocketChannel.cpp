#include "../../net/SocketAddress.hpp"
#include "./AsynchronousChannelGroup.hpp"
#include "./spi/AsynchronousChannelProvider.hpp"
#include "./AsynchronousServerSocketChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	AsynchronousServerSocketChannel::AsynchronousServerSocketChannel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AsynchronousServerSocketChannel::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousServerSocketChannel",
			"open",
			"()Ljava/nio/channels/AsynchronousServerSocketChannel;"
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::open(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousServerSocketChannel",
			"open",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::accept()
	{
		return __thiz.callObjectMethod(
			"accept",
			"()Ljava/util/concurrent/Future;"
		);
	}
	void AsynchronousServerSocketChannel::accept(jobject arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"accept",
			"(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::bind(java::net::SocketAddress arg0)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::bind(java::net::SocketAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;I)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::setOption(__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace java::nio::channels

