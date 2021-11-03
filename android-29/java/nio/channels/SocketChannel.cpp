#include "../../net/Socket.hpp"
#include "../../net/SocketAddress.hpp"
#include "../ByteBuffer.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./SocketChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	SocketChannel::SocketChannel(QJniObject obj) : java::nio::channels::spi::AbstractSelectableChannel(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::SocketChannel SocketChannel::open()
	{
		return callStaticObjectMethod(
			"java.nio.channels.SocketChannel",
			"open",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	java::nio::channels::SocketChannel SocketChannel::open(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.SocketChannel",
			"open",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/SocketChannel;",
			arg0.object()
		);
	}
	java::nio::channels::SocketChannel SocketChannel::open(java::net::SocketAddress arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.SocketChannel",
			"open",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;",
			arg0.object()
		);
	}
	java::nio::channels::SocketChannel SocketChannel::bind(java::net::SocketAddress arg0)
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;",
			arg0.object()
		);
	}
	jboolean SocketChannel::connect(java::net::SocketAddress arg0)
	{
		return callMethod<jboolean>(
			"connect",
			"(Ljava/net/SocketAddress;)Z",
			arg0.object()
		);
	}
	jboolean SocketChannel::finishConnect()
	{
		return callMethod<jboolean>(
			"finishConnect",
			"()Z"
		);
	}
	java::net::SocketAddress SocketChannel::getLocalAddress()
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	java::net::SocketAddress SocketChannel::getRemoteAddress()
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean SocketChannel::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean SocketChannel::isConnectionPending()
	{
		return callMethod<jboolean>(
			"isConnectionPending",
			"()Z"
		);
	}
	jint SocketChannel::read(java::nio::ByteBuffer arg0)
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jlong SocketChannel::read(jarray arg0)
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong SocketChannel::read(jarray arg0, jint arg1, jint arg2)
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::channels::SocketChannel SocketChannel::setOption(JObject arg0, jobject arg1)
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/SocketChannel;",
			arg0.object(),
			arg1
		);
	}
	java::nio::channels::SocketChannel SocketChannel::shutdownInput()
	{
		return callObjectMethod(
			"shutdownInput",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	java::nio::channels::SocketChannel SocketChannel::shutdownOutput()
	{
		return callObjectMethod(
			"shutdownOutput",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	java::net::Socket SocketChannel::socket()
	{
		return callObjectMethod(
			"socket",
			"()Ljava/net/Socket;"
		);
	}
	jint SocketChannel::validOps()
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
	jint SocketChannel::write(java::nio::ByteBuffer arg0)
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jlong SocketChannel::write(jarray arg0)
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0
		);
	}
	jlong SocketChannel::write(jarray arg0, jint arg1, jint arg2)
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::nio::channels

