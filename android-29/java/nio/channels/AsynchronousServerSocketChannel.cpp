#include "../../net/SocketAddress.hpp"
#include "./AsynchronousChannelGroup.hpp"
#include "./spi/AsynchronousChannelProvider.hpp"
#include "./AsynchronousServerSocketChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	AsynchronousServerSocketChannel::AsynchronousServerSocketChannel(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
			arg0.object()
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::accept()
	{
		return callObjectMethod(
			"accept",
			"()Ljava/util/concurrent/Future;"
		);
	}
	void AsynchronousServerSocketChannel::accept(jobject arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"accept",
			"(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::bind(java::net::SocketAddress arg0)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object()
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::bind(java::net::SocketAddress arg0, jint arg1)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;I)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::getLocalAddress()
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	QAndroidJniObject AsynchronousServerSocketChannel::setOption(__JniBaseClass arg0, jobject arg1)
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::nio::channels

