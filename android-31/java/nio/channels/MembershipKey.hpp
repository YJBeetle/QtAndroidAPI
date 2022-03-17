#pragma once

#include "../../net/InetAddress.def.hpp"
#include "../../net/NetworkInterface.def.hpp"
#include "./MembershipKey.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::channels::MembershipKey MembershipKey::block(java::net::InetAddress arg0) const
	{
		return callObjectMethod(
			"block",
			"(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;",
			arg0.object()
		);
	}
	inline JObject MembershipKey::channel() const
	{
		return callObjectMethod(
			"channel",
			"()Ljava/nio/channels/MulticastChannel;"
		);
	}
	inline void MembershipKey::drop() const
	{
		callMethod<void>(
			"drop",
			"()V"
		);
	}
	inline java::net::InetAddress MembershipKey::group() const
	{
		return callObjectMethod(
			"group",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jboolean MembershipKey::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	inline java::net::NetworkInterface MembershipKey::networkInterface() const
	{
		return callObjectMethod(
			"networkInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	inline java::net::InetAddress MembershipKey::sourceAddress() const
	{
		return callObjectMethod(
			"sourceAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline java::nio::channels::MembershipKey MembershipKey::unblock(java::net::InetAddress arg0) const
	{
		return callObjectMethod(
			"unblock",
			"(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;",
			arg0.object()
		);
	}
} // namespace java::nio::channels

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
