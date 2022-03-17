#pragma once

#include "../../../lang/Void.def.hpp"
#include "../DatagramChannel.def.hpp"
#include "../Pipe.def.hpp"
#include "../ServerSocketChannel.def.hpp"
#include "../SocketChannel.def.hpp"
#include "./AbstractSelector.def.hpp"
#include "./SelectorProvider.def.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::channels::spi::SelectorProvider SelectorProvider::provider()
	{
		return callStaticObjectMethod(
			"java.nio.channels.spi.SelectorProvider",
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	inline JObject SelectorProvider::inheritedChannel() const
	{
		return callObjectMethod(
			"inheritedChannel",
			"()Ljava/nio/channels/Channel;"
		);
	}
	inline java::nio::channels::DatagramChannel SelectorProvider::openDatagramChannel() const
	{
		return callObjectMethod(
			"openDatagramChannel",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	inline java::nio::channels::DatagramChannel SelectorProvider::openDatagramChannel(JObject arg0) const
	{
		return callObjectMethod(
			"openDatagramChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/DatagramChannel;",
			arg0.object()
		);
	}
	inline java::nio::channels::Pipe SelectorProvider::openPipe() const
	{
		return callObjectMethod(
			"openPipe",
			"()Ljava/nio/channels/Pipe;"
		);
	}
	inline java::nio::channels::spi::AbstractSelector SelectorProvider::openSelector() const
	{
		return callObjectMethod(
			"openSelector",
			"()Ljava/nio/channels/spi/AbstractSelector;"
		);
	}
	inline java::nio::channels::ServerSocketChannel SelectorProvider::openServerSocketChannel() const
	{
		return callObjectMethod(
			"openServerSocketChannel",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	inline java::nio::channels::ServerSocketChannel SelectorProvider::openServerSocketChannel(JObject arg0) const
	{
		return callObjectMethod(
			"openServerSocketChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.object()
		);
	}
	inline java::nio::channels::SocketChannel SelectorProvider::openSocketChannel() const
	{
		return callObjectMethod(
			"openSocketChannel",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	inline java::nio::channels::SocketChannel SelectorProvider::openSocketChannel(JObject arg0) const
	{
		return callObjectMethod(
			"openSocketChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/SocketChannel;",
			arg0.object()
		);
	}
} // namespace java::nio::channels::spi

// Base class headers

