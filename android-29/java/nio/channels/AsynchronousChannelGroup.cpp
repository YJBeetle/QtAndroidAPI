#include "./spi/AsynchronousChannelProvider.hpp"
#include "../../util/concurrent/TimeUnit.hpp"
#include "./AsynchronousChannelGroup.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	java::nio::channels::AsynchronousChannelGroup AsynchronousChannelGroup::withCachedThreadPool(JObject arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withCachedThreadPool",
			"(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.object(),
			arg1
		);
	}
	java::nio::channels::AsynchronousChannelGroup AsynchronousChannelGroup::withFixedThreadPool(jint arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withFixedThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0,
			arg1.object()
		);
	}
	java::nio::channels::AsynchronousChannelGroup AsynchronousChannelGroup::withThreadPool(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withThreadPool",
			"(Ljava/util/concurrent/ExecutorService;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.object()
		);
	}
	jboolean AsynchronousChannelGroup::awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AsynchronousChannelGroup::isShutdown() const
	{
		return callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	jboolean AsynchronousChannelGroup::isTerminated() const
	{
		return callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	java::nio::channels::spi::AsynchronousChannelProvider AsynchronousChannelGroup::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	void AsynchronousChannelGroup::shutdown() const
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	void AsynchronousChannelGroup::shutdownNow() const
	{
		callMethod<void>(
			"shutdownNow",
			"()V"
		);
	}
} // namespace java::nio::channels

