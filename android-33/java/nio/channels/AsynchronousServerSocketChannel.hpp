#pragma once

#include "../../../JObject.hpp"
#include "../../net/SocketAddress.def.hpp"
#include "./AsynchronousChannelGroup.def.hpp"
#include "./spi/AsynchronousChannelProvider.def.hpp"
#include "./AsynchronousServerSocketChannel.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::channels::AsynchronousServerSocketChannel AsynchronousServerSocketChannel::open()
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousServerSocketChannel",
			"open",
			"()Ljava/nio/channels/AsynchronousServerSocketChannel;"
		);
	}
	inline java::nio::channels::AsynchronousServerSocketChannel AsynchronousServerSocketChannel::open(java::nio::channels::AsynchronousChannelGroup arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.AsynchronousServerSocketChannel",
			"open",
			"(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object()
		);
	}
	inline JObject AsynchronousServerSocketChannel::accept() const
	{
		return callObjectMethod(
			"accept",
			"()Ljava/util/concurrent/Future;"
		);
	}
	inline void AsynchronousServerSocketChannel::accept(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"accept",
			"(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline java::nio::channels::AsynchronousServerSocketChannel AsynchronousServerSocketChannel::bind(java::net::SocketAddress arg0) const
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object()
		);
	}
	inline java::nio::channels::AsynchronousServerSocketChannel AsynchronousServerSocketChannel::bind(java::net::SocketAddress arg0, jint arg1) const
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;I)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object(),
			arg1
		);
	}
	inline java::net::SocketAddress AsynchronousServerSocketChannel::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline java::nio::channels::spi::AsynchronousChannelProvider AsynchronousServerSocketChannel::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	inline java::nio::channels::AsynchronousServerSocketChannel AsynchronousServerSocketChannel::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/AsynchronousServerSocketChannel;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
} // namespace java::nio::channels

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
