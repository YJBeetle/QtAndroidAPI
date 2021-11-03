#include "../../net/InetAddress.hpp"
#include "../../net/NetworkInterface.hpp"
#include "./MembershipKey.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	MembershipKey::MembershipKey(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::MembershipKey MembershipKey::block(java::net::InetAddress arg0)
	{
		return callObjectMethod(
			"block",
			"(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;",
			arg0.object()
		);
	}
	JObject MembershipKey::channel()
	{
		return callObjectMethod(
			"channel",
			"()Ljava/nio/channels/MulticastChannel;"
		);
	}
	void MembershipKey::drop()
	{
		callMethod<void>(
			"drop",
			"()V"
		);
	}
	java::net::InetAddress MembershipKey::group()
	{
		return callObjectMethod(
			"group",
			"()Ljava/net/InetAddress;"
		);
	}
	jboolean MembershipKey::isValid()
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	java::net::NetworkInterface MembershipKey::networkInterface()
	{
		return callObjectMethod(
			"networkInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	java::net::InetAddress MembershipKey::sourceAddress()
	{
		return callObjectMethod(
			"sourceAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	java::nio::channels::MembershipKey MembershipKey::unblock(java::net::InetAddress arg0)
	{
		return callObjectMethod(
			"unblock",
			"(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;",
			arg0.object()
		);
	}
} // namespace java::nio::channels

