#include "../../../lang/Void.hpp"
#include "../AsynchronousChannelGroup.hpp"
#include "../AsynchronousServerSocketChannel.hpp"
#include "../AsynchronousSocketChannel.hpp"
#include "./AsynchronousChannelProvider.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// QAndroidJniObject forward
	AsynchronousChannelProvider::AsynchronousChannelProvider(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AsynchronousChannelProvider::provider()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.spi.AsynchronousChannelProvider",
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	QAndroidJniObject AsynchronousChannelProvider::openAsynchronousChannelGroup(jint arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"openAsynchronousChannelGroup",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject AsynchronousChannelProvider::openAsynchronousChannelGroup(__JniBaseClass arg0, jint arg1)
	{
		return callObjectMethod(
			"openAsynchronousChannelGroup",
			"(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousChannelProvider::openAsynchronousServerSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return callObjectMethod(
			"openAsynchronousServerSocketChannel",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object()
		);
	}
	QAndroidJniObject AsynchronousChannelProvider::openAsynchronousSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return callObjectMethod(
			"openAsynchronousSocketChannel",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object()
		);
	}
} // namespace java::nio::channels::spi

