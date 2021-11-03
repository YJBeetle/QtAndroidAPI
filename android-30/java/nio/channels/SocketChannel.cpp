#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
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
	java::nio::channels::SocketChannel SocketChannel::bind(java::net::SocketAddress arg0) const
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;",
			arg0.object()
		);
	}
	jboolean SocketChannel::connect(java::net::SocketAddress arg0) const
	{
		return callMethod<jboolean>(
			"connect",
			"(Ljava/net/SocketAddress;)Z",
			arg0.object()
		);
	}
	jboolean SocketChannel::finishConnect() const
	{
		return callMethod<jboolean>(
			"finishConnect",
			"()Z"
		);
	}
	java::net::SocketAddress SocketChannel::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	java::net::SocketAddress SocketChannel::getRemoteAddress() const
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean SocketChannel::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean SocketChannel::isConnectionPending() const
	{
		return callMethod<jboolean>(
			"isConnectionPending",
			"()Z"
		);
	}
	jint SocketChannel::read(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jlong SocketChannel::read(JArray arg0) const
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0.object<jarray>()
		);
	}
	jlong SocketChannel::read(JArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	java::nio::channels::SocketChannel SocketChannel::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/SocketChannel;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	java::nio::channels::SocketChannel SocketChannel::shutdownInput() const
	{
		return callObjectMethod(
			"shutdownInput",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	java::nio::channels::SocketChannel SocketChannel::shutdownOutput() const
	{
		return callObjectMethod(
			"shutdownOutput",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	java::net::Socket SocketChannel::socket() const
	{
		return callObjectMethod(
			"socket",
			"()Ljava/net/Socket;"
		);
	}
	jint SocketChannel::validOps() const
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
	jint SocketChannel::write(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	jlong SocketChannel::write(JArray arg0) const
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0.object<jarray>()
		);
	}
	jlong SocketChannel::write(JArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
} // namespace java::nio::channels

