#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../java/net/SocketAddress.def.hpp"
#include "./StructMsghdr.def.hpp"

namespace android::system
{
	// Fields
	inline JArray StructMsghdr::msg_control()
	{
		return getObjectField(
			"msg_control",
			"[Landroid/system/StructCmsghdr;"
		);
	}
	inline jint StructMsghdr::msg_flags()
	{
		return getField<jint>(
			"msg_flags"
		);
	}
	inline JArray StructMsghdr::msg_iov()
	{
		return getObjectField(
			"msg_iov",
			"[Ljava/nio/ByteBuffer;"
		);
	}
	inline java::net::SocketAddress StructMsghdr::msg_name()
	{
		return getObjectField(
			"msg_name",
			"Ljava/net/SocketAddress;"
		);
	}
	
	// Constructors
	inline StructMsghdr::StructMsghdr(java::net::SocketAddress arg0, JArray arg1, JArray arg2, jint arg3)
		: JObject(
			"android.system.StructMsghdr",
			"(Ljava/net/SocketAddress;[Ljava/nio/ByteBuffer;[Landroid/system/StructCmsghdr;I)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jarray>(),
			arg3
		) {}
	
	// Methods
} // namespace android::system

// Base class headers

