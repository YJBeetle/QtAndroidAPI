#pragma once

#include "./LocalSocket.def.hpp"
#include "./LocalSocketAddress.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "./LocalServerSocket.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline LocalServerSocket::LocalServerSocket(java::io::FileDescriptor arg0)
		: JObject(
			"android.net.LocalServerSocket",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	inline LocalServerSocket::LocalServerSocket(JString arg0)
		: JObject(
			"android.net.LocalServerSocket",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::net::LocalSocket LocalServerSocket::accept() const
	{
		return callObjectMethod(
			"accept",
			"()Landroid/net/LocalSocket;"
		);
	}
	inline void LocalServerSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline java::io::FileDescriptor LocalServerSocket::getFileDescriptor() const
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	inline android::net::LocalSocketAddress LocalServerSocket::getLocalSocketAddress() const
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Landroid/net/LocalSocketAddress;"
		);
	}
} // namespace android::net

// Base class headers

