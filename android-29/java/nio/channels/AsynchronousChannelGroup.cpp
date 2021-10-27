#include "./spi/AsynchronousChannelProvider.hpp"
#include "../../util/concurrent/TimeUnit.hpp"
#include "./AsynchronousChannelGroup.hpp"

namespace java::nio::channels
{
	// Fields
	
	AsynchronousChannelGroup::AsynchronousChannelGroup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AsynchronousChannelGroup::withCachedThreadPool(__JniBaseClass arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withCachedThreadPool",
			"(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.__jniObject().object(),
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
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousChannelGroup::withThreadPool(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withThreadPool",
			"(Ljava/util/concurrent/ExecutorService;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.__jniObject().object()
		);
	}
	jboolean AsynchronousChannelGroup::awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AsynchronousChannelGroup::isShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	jboolean AsynchronousChannelGroup::isTerminated()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	QAndroidJniObject AsynchronousChannelGroup::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	void AsynchronousChannelGroup::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	void AsynchronousChannelGroup::shutdownNow()
	{
		__thiz.callMethod<void>(
			"shutdownNow",
			"()V"
		);
	}
} // namespace java::nio::channels

