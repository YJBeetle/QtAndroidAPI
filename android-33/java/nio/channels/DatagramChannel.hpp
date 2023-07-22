#pragma once

#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../net/DatagramSocket.def.hpp"
#include "../../net/SocketAddress.def.hpp"
#include "../ByteBuffer.def.hpp"
#include "./spi/SelectorProvider.def.hpp"
#include "./DatagramChannel.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::channels::DatagramChannel DatagramChannel::open()
	{
		return callStaticObjectMethod(
			"java.nio.channels.DatagramChannel",
			"open",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	inline java::nio::channels::DatagramChannel DatagramChannel::open(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.channels.DatagramChannel",
			"open",
			"(Ljava/net/ProtocolFamily;)Ljava/nio/channels/DatagramChannel;",
			arg0.object()
		);
	}
	inline java::nio::channels::DatagramChannel DatagramChannel::bind(java::net::SocketAddress arg0) const
	{
		return callObjectMethod(
			"bind",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;",
			arg0.object()
		);
	}
	inline java::nio::channels::DatagramChannel DatagramChannel::connect(java::net::SocketAddress arg0) const
	{
		return callObjectMethod(
			"connect",
			"(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;",
			arg0.object()
		);
	}
	inline java::nio::channels::DatagramChannel DatagramChannel::disconnect() const
	{
		return callObjectMethod(
			"disconnect",
			"()Ljava/nio/channels/DatagramChannel;"
		);
	}
	inline java::net::SocketAddress DatagramChannel::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline java::net::SocketAddress DatagramChannel::getRemoteAddress() const
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/SocketAddress;"
		);
	}
	inline jboolean DatagramChannel::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline jint DatagramChannel::read(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	inline jlong DatagramChannel::read(JArray arg0) const
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;)J",
			arg0.object<jarray>()
		);
	}
	inline jlong DatagramChannel::read(JArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jlong>(
			"read",
			"([Ljava/nio/ByteBuffer;II)J",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	inline java::net::SocketAddress DatagramChannel::receive(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"receive",
			"(Ljava/nio/ByteBuffer;)Ljava/net/SocketAddress;",
			arg0.object()
		);
	}
	inline jint DatagramChannel::send(java::nio::ByteBuffer arg0, java::net::SocketAddress arg1) const
	{
		return callMethod<jint>(
			"send",
			"(Ljava/nio/ByteBuffer;Ljava/net/SocketAddress;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::nio::channels::DatagramChannel DatagramChannel::setOption(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setOption",
			"(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/DatagramChannel;",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline java::net::DatagramSocket DatagramChannel::socket() const
	{
		return callObjectMethod(
			"socket",
			"()Ljava/net/DatagramSocket;"
		);
	}
	inline jint DatagramChannel::validOps() const
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
	inline jint DatagramChannel::write(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"write",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	inline jlong DatagramChannel::write(JArray arg0) const
	{
		return callMethod<jlong>(
			"write",
			"([Ljava/nio/ByteBuffer;)J",
			arg0.object<jarray>()
		);
	}
	inline jlong DatagramChannel::write(JArray arg0, jint arg1, jint arg2) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
