#include "../../../JObject.hpp"
#include "../../net/ServerSocket.hpp"
#include "../../net/SocketAddress.hpp"
#include "./SocketChannel.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./ServerSocketChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	java::nio::channels::ServerSocketChannel ServerSocketChannel::open()
	{
		return callStaticObjectMethod(
			"java.nio.channels.ServerSocketChannel",
			"open",
			"()Ljava/nio/channels/ServerSocketChannel;"
		);
	}
	java::nio::channels::ServerSocketChannel ServerSocketChannel::open(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.ServerSocketChannel",
			"open",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.object()
		);
	}
	java::nio::channels::SocketChannel ServerSocketChannel::accept() const
	{
		return callObjectMethod(
			"accept",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	java::nio::channels::ServerSocketChannel ServerSocketChannel::bind(java::net::SocketAddress arg0) const
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.object()
		);
	}
	java::nio::channels::ServerSocketChannel ServerSocketChannel::bind(java::net::SocketAddress arg0, jint arg1) const
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;I)Ljava/nio/channels/ServerSocketChannel;",
			arg0.object(),
			arg1
		);
	}
	java::net::SocketAddress ServerSocketChannel::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	java::nio::channels::ServerSocketChannel ServerSocketChannel::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/ServerSocketChannel;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	java::net::ServerSocket ServerSocketChannel::socket() const
	{
		return callObjectMethod(
			"socket",
			"()Ljava/net/ServerSocket;"
		);
	}
	jint ServerSocketChannel::validOps() const
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

