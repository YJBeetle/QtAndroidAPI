#pragma once

#include "../../JArray.hpp"
#include "./Credentials.def.hpp"
#include "./LocalSocketAddress.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "../../JString.hpp"
#include "./LocalSocket.def.hpp"

namespace android::net
{
	// Fields
	inline jint LocalSocket::SOCKET_DGRAM()
	{
		return getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_DGRAM"
		);
	}
	inline jint LocalSocket::SOCKET_SEQPACKET()
	{
		return getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_SEQPACKET"
		);
	}
	inline jint LocalSocket::SOCKET_STREAM()
	{
		return getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_STREAM"
		);
	}
	
	// Constructors
	inline LocalSocket::LocalSocket()
		: JObject(
			"android.net.LocalSocket",
			"()V"
		) {}
	inline LocalSocket::LocalSocket(jint arg0)
		: JObject(
			"android.net.LocalSocket",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void LocalSocket::bind(android::net::LocalSocketAddress arg0) const
	{
		callMethod<void>(
			"bind",
			"(Landroid/net/LocalSocketAddress;)V",
			arg0.object()
		);
	}
	inline void LocalSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void LocalSocket::connect(android::net::LocalSocketAddress arg0) const
	{
		callMethod<void>(
			"connect",
			"(Landroid/net/LocalSocketAddress;)V",
			arg0.object()
		);
	}
	inline void LocalSocket::connect(android::net::LocalSocketAddress arg0, jint arg1) const
	{
		callMethod<void>(
			"connect",
			"(Landroid/net/LocalSocketAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	inline JArray LocalSocket::getAncillaryFileDescriptors() const
	{
		return callObjectMethod(
			"getAncillaryFileDescriptors",
			"()[Ljava/io/FileDescriptor;"
		);
	}
	inline java::io::FileDescriptor LocalSocket::getFileDescriptor() const
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	inline java::io::InputStream LocalSocket::getInputStream() const
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline android::net::LocalSocketAddress LocalSocket::getLocalSocketAddress() const
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Landroid/net/LocalSocketAddress;"
		);
	}
	inline java::io::OutputStream LocalSocket::getOutputStream() const
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	inline android::net::Credentials LocalSocket::getPeerCredentials() const
	{
		return callObjectMethod(
			"getPeerCredentials",
			"()Landroid/net/Credentials;"
		);
	}
	inline jint LocalSocket::getReceiveBufferSize() const
	{
		return callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	inline android::net::LocalSocketAddress LocalSocket::getRemoteSocketAddress() const
	{
		return callObjectMethod(
			"getRemoteSocketAddress",
			"()Landroid/net/LocalSocketAddress;"
		);
	}
	inline jint LocalSocket::getSendBufferSize() const
	{
		return callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	inline jint LocalSocket::getSoTimeout() const
	{
		return callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	inline jboolean LocalSocket::isBound() const
	{
		return callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	inline jboolean LocalSocket::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	inline jboolean LocalSocket::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline jboolean LocalSocket::isInputShutdown() const
	{
		return callMethod<jboolean>(
			"isInputShutdown",
			"()Z"
		);
	}
	inline jboolean LocalSocket::isOutputShutdown() const
	{
		return callMethod<jboolean>(
			"isOutputShutdown",
			"()Z"
		);
	}
	inline void LocalSocket::setFileDescriptorsForSend(JArray arg0) const
	{
		callMethod<void>(
			"setFileDescriptorsForSend",
			"([Ljava/io/FileDescriptor;)V",
			arg0.object<jarray>()
		);
	}
	inline void LocalSocket::setReceiveBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	inline void LocalSocket::setSendBufferSize(jint arg0) const
	{
		callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	inline void LocalSocket::setSoTimeout(jint arg0) const
	{
		callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	inline void LocalSocket::shutdownInput() const
	{
		callMethod<void>(
			"shutdownInput",
			"()V"
		);
	}
	inline void LocalSocket::shutdownOutput() const
	{
		callMethod<void>(
			"shutdownOutput",
			"()V"
		);
	}
	inline JString LocalSocket::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net

// Base class headers

