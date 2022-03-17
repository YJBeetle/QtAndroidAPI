#pragma once

#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../net/Socket.def.hpp"
#include "../../net/SocketAddress.def.hpp"
#include "../ByteBuffer.def.hpp"
#include "./spi/SelectorProvider.def.hpp"
#include "./SocketChannel.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::channels::SocketChannel SocketChannel::open()
	{
		return callStaticObjectMethod(
			"java.nio.channels.SocketChannel",
			"open",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	inline java::nio::channels::SocketChannel SocketChannel::open(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.SocketChannel",
			"open",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/SocketChannel;",
			arg0.object()
		);
	}
	inline java::nio::channels::SocketChannel SocketChannel::open(java::net::SocketAddress arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.SocketChannel",
			"open",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;",
			arg0.object()
		);
	}
	inline java::nio::channels::SocketChannel SocketChannel::bind(java::net::SocketAddress arg0) const
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;",
			arg0.object()
		);
	}
	inline jboolean SocketChannel::connect(java::net::SocketAddress arg0) const
	{
		return callMethod<jboolean>(
			"connect",
			"(Ljava/net/SocketAddress;)Z",
			arg0.object()
		);
	}
	inline jboolean SocketChannel::finishConnect() const
	{
		return callMethod<jboolean>(
			"finishConnect",
			"()Z"
		);
	}
	inline java::net::SocketAddress SocketChannel::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline java::net::SocketAddress SocketChannel::getRemoteAddress() const
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline jboolean SocketChannel::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline jboolean SocketChannel::isConnectionPending() const
	{
		return callMethod<jboolean>(
			"isConnectionPending",
			"()Z"
		);
	}
	inline jint SocketChannel::read(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	inline jlong SocketChannel::read(JArray arg0) const
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0.object<jarray>()
		);
	}
	inline jlong SocketChannel::read(JArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	inline java::nio::channels::SocketChannel SocketChannel::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/SocketChannel;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline java::nio::channels::SocketChannel SocketChannel::shutdownInput() const
	{
		return callObjectMethod(
			"shutdownInput",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	inline java::nio::channels::SocketChannel SocketChannel::shutdownOutput() const
	{
		return callObjectMethod(
			"shutdownOutput",
			"()Ljava/nio/channels/SocketChannel;"
		);
	}
	inline java::net::Socket SocketChannel::socket() const
	{
		return callObjectMethod(
			"socket",
			"()Ljava/net/Socket;"
		);
	}
	inline jint SocketChannel::validOps() const
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
	inline jint SocketChannel::write(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	inline jlong SocketChannel::write(JArray arg0) const
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0.object<jarray>()
		);
	}
	inline jlong SocketChannel::write(JArray arg0, jint arg1, jint arg2) const
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

// Base class headers
#include "./spi/AbstractInterruptibleChannel.hpp"
#include "./SelectableChannel.hpp"
#include "./spi/AbstractSelectableChannel.hpp"

