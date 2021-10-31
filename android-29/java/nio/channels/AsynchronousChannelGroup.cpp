#include "./spi/AsynchronousChannelProvider.hpp"
#include "../../util/concurrent/TimeUnit.hpp"
#include "./AsynchronousChannelGroup.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	AsynchronousChannelGroup::AsynchronousChannelGroup(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AsynchronousChannelGroup::withCachedThreadPool(__JniBaseClass arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withCachedThreadPool",
			"(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousChannelGroup::withFixedThreadPool(jint arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withFixedThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject AsynchronousChannelGroup::withThreadPool(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withThreadPool",
			"(Ljava/util/concurrent/ExecutorService;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.object()
		);
	}
	jboolean AsynchronousChannelGroup::awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AsynchronousChannelGroup::isShutdown()
	{
		return callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	jboolean AsynchronousChannelGroup::isTerminated()
	{
		return callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	QAndroidJniObject AsynchronousChannelGroup::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	void AsynchronousChannelGroup::shutdown()
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	void AsynchronousChannelGroup::shutdownNow()
	{
		callMethod<void>(
			"shutdownNow",
			"()V"
		);
	}
} // namespace java::nio::channels

