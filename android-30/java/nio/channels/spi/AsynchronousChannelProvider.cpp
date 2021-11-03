#include "../../../lang/Void.hpp"
#include "../AsynchronousChannelGroup.hpp"
#include "../AsynchronousServerSocketChannel.hpp"
#include "../AsynchronousSocketChannel.hpp"
#include "./AsynchronousChannelProvider.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// QJniObject forward
	AsynchronousChannelProvider::AsynchronousChannelProvider(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::spi::AsynchronousChannelProvider AsynchronousChannelProvider::provider()
	{
		return callStaticObjectMethod(
			"java.nio.channels.spi.AsynchronousChannelProvider",
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	java::nio::channels::AsynchronousChannelGroup AsynchronousChannelProvider::openAsynchronousChannelGroup(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"openAsynchronousChannelGroup",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0,
			arg1.object()
		);
	}
	java::nio::channels::AsynchronousChannelGroup AsynchronousChannelProvider::openAsynchronousChannelGroup(JObject arg0, jint arg1)
	{
		return callObjectMethod(
			"openAsynchronousChannelGroup",
			"(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.object(),
			arg1
		);
	}
	java::nio::channels::AsynchronousServerSocketChannel AsynchronousChannelProvider::openAsynchronousServerSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return callObjectMethod(
			"openAsynchronousServerSocketChannel",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object()
		);
	}
	java::nio::channels::AsynchronousSocketChannel AsynchronousChannelProvider::openAsynchronousSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return callObjectMethod(
			"openAsynchronousSocketChannel",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object()
		);
	}
} // namespace java::nio::channels::spi

