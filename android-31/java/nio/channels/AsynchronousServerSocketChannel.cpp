#include "../../net/SocketAddress.hpp"
#include "./AsynchronousChannelGroup.hpp"
#include "./spi/AsynchronousChannelProvider.hpp"
#include "./AsynchronousServerSocketChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	AsynchronousServerSocketChannel::AsynchronousServerSocketChannel(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::AsynchronousServerSocketChannel AsynchronousServerSocketChannel::open()
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousServerSocketChannel",
			"open",
			"()Ljava/nio/channels/AsynchronousServerSocketChannel;"
		);
	}
	java::nio::channels::AsynchronousServerSocketChannel AsynchronousServerSocketChannel::open(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousServerSocketChannel",
			"open",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object()
		);
	}
	JObject AsynchronousServerSocketChannel::accept()
	{
		return callObjectMethod(
			"accept",
			"()Ljava/util/concurrent/Future;"
		);
	}
	void AsynchronousServerSocketChannel::accept(jobject arg0, JObject arg1)
	{
		callMethod<void>(
			"accept",
			"(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0,
			arg1.object()
		);
	}
	java::nio::channels::AsynchronousServerSocketChannel AsynchronousServerSocketChannel::bind(java::net::SocketAddress arg0)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object()
		);
	}
	java::nio::channels::AsynchronousServerSocketChannel AsynchronousServerSocketChannel::bind(java::net::SocketAddress arg0, jint arg1)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;I)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object(),
			arg1
		);
	}
	java::net::SocketAddress AsynchronousServerSocketChannel::getLocalAddress()
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	java::nio::channels::spi::AsynchronousChannelProvider AsynchronousServerSocketChannel::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	java::nio::channels::AsynchronousServerSocketChannel AsynchronousServerSocketChannel::setOption(JObject arg0, jobject arg1)
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::nio::channels

