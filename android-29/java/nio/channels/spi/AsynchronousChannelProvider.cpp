#include "../../../lang/Void.hpp"
#include "../AsynchronousChannelGroup.hpp"
#include "../AsynchronousServerSocketChannel.hpp"
#include "../AsynchronousSocketChannel.hpp"
#include "./AsynchronousChannelProvider.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	AsynchronousChannelProvider::AsynchronousChannelProvider(QAndroidJniObject obj) { __thiz = obj; }
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
		return __thiz.callObjectMethod(
			"openAsynchronousChannelGroup",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousChannelProvider::openAsynchronousChannelGroup(__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"openAsynchronousChannelGroup",
			"(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousChannelProvider::openAsynchronousServerSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return __thiz.callObjectMethod(
			"openAsynchronousServerSocketChannel",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousChannelProvider::openAsynchronousSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return __thiz.callObjectMethod(
			"openAsynchronousSocketChannel",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::nio::channels::spi

