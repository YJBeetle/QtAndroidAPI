#include "../../../lang/Void.hpp"
#include "../DatagramChannel.hpp"
#include "../Pipe.hpp"
#include "../ServerSocketChannel.hpp"
#include "../SocketChannel.hpp"
#include "./AbstractSelector.hpp"
#include "./SelectorProvider.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// QAndroidJniObject forward
	SelectorProvider::SelectorProvider(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::spi::SelectorProvider SelectorProvider::provider()
	{
		return callStaticObjectMethod(
			"java.nio.channels.spi.SelectorProvider",
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	JObject SelectorProvider::inheritedChannel()
	{
		return callObjectMethod(
			"inheritedChannel",
			"()Ljava/nio/channels/Channel;"
		);
	}
	java::nio::channels::DatagramChannel SelectorProvider::openDatagramChannel()
	{
		return callObjectMethod(
			"openDatagramChannel",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	java::nio::channels::DatagramChannel SelectorProvider::openDatagramChannel(JObject arg0)
	{
		return callObjectMethod(
			"openDatagramChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/DatagramChannel;",
			arg0.object()
		);
	}
	java::nio::channels::Pipe SelectorProvider::openPipe()
	{
		return callObjectMethod(
			"openPipe",
			"()Ljava/nio/channels/Pipe;"
		);
	}
	java::nio::channels::spi::AbstractSelector SelectorProvider::openSelector()
	{
		return callObjectMethod(
			"openSelector",
			"()Ljava/nio/channels/spi/AbstractSelector;"
		);
	}
	java::nio::channels::ServerSocketChannel SelectorProvider::openServerSocketChannel()
	{
		return callObjectMethod(
			"openServerSocketChannel",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	java::nio::channels::ServerSocketChannel SelectorProvider::openServerSocketChannel(JObject arg0)
	{
		return callObjectMethod(
			"openServerSocketChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.object()
		);
	}
	java::nio::channels::SocketChannel SelectorProvider::openSocketChannel()
	{
		return callObjectMethod(
			"openSocketChannel",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	java::nio::channels::SocketChannel SelectorProvider::openSocketChannel(JObject arg0)
	{
		return callObjectMethod(
			"openSocketChannel",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/SocketChannel;",
			arg0.object()
		);
	}
} // namespace java::nio::channels::spi

