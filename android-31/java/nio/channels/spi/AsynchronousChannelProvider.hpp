#pragma once

#include "../../../lang/Void.def.hpp"
#include "../AsynchronousChannelGroup.def.hpp"
#include "../AsynchronousServerSocketChannel.def.hpp"
#include "../AsynchronousSocketChannel.def.hpp"
#include "./AsynchronousChannelProvider.def.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::channels::spi::AsynchronousChannelProvider AsynchronousChannelProvider::provider()
	{
		return callStaticObjectMethod(
			"java.nio.channels.spi.AsynchronousChannelProvider",
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	inline java::nio::channels::AsynchronousChannelGroup AsynchronousChannelProvider::openAsynchronousChannelGroup(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"openAsynchronousChannelGroup",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0,
			arg1.object()
		);
	}
	inline java::nio::channels::AsynchronousChannelGroup AsynchronousChannelProvider::openAsynchronousChannelGroup(JObject arg0, jint arg1) const
	{
		return callObjectMethod(
			"openAsynchronousChannelGroup",
			"(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.object(),
			arg1
		);
	}
	inline java::nio::channels::AsynchronousServerSocketChannel AsynchronousChannelProvider::openAsynchronousServerSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0) const
	{
		return callObjectMethod(
			"openAsynchronousServerSocketChannel",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object()
		);
	}
	inline java::nio::channels::AsynchronousSocketChannel AsynchronousChannelProvider::openAsynchronousSocketChannel(java::nio::channels::AsynchronousChannelGroup arg0) const
	{
		return callObjectMethod(
			"openAsynchronousSocketChannel",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;",
			arg0.object()
		);
	}
} // namespace java::nio::channels::spi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels::spi;
#endif
