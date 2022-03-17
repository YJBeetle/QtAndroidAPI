#pragma once

#include "./spi/AsynchronousChannelProvider.def.hpp"
#include "../../util/concurrent/TimeUnit.def.hpp"
#include "./AsynchronousChannelGroup.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::channels::AsynchronousChannelGroup AsynchronousChannelGroup::withCachedThreadPool(JObject arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withCachedThreadPool",
			"(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.object(),
			arg1
		);
	}
	inline java::nio::channels::AsynchronousChannelGroup AsynchronousChannelGroup::withFixedThreadPool(jint arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withFixedThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0,
			arg1.object()
		);
	}
	inline java::nio::channels::AsynchronousChannelGroup AsynchronousChannelGroup::withThreadPool(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withThreadPool",
			"(Ljava/util/concurrent/ExecutorService;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.object()
		);
	}
	inline jboolean AsynchronousChannelGroup::awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean AsynchronousChannelGroup::isShutdown() const
	{
		return callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	inline jboolean AsynchronousChannelGroup::isTerminated() const
	{
		return callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	inline java::nio::channels::spi::AsynchronousChannelProvider AsynchronousChannelGroup::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	inline void AsynchronousChannelGroup::shutdown() const
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	inline void AsynchronousChannelGroup::shutdownNow() const
	{
		callMethod<void>(
			"shutdownNow",
			"()V"
		);
	}
} // namespace java::nio::channels

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
