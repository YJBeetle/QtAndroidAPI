#include "../../net/InetAddress.hpp"
#include "../../net/NetworkInterface.hpp"
#include "./MembershipKey.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	MembershipKey::MembershipKey(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject MembershipKey::block(java::net::InetAddress arg0)
	{
		return callObjectMethod(
			"block",
			"(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;",
			arg0.object()
		);
	}
	QAndroidJniObject MembershipKey::channel()
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
	QAndroidJniObject MembershipKey::group()
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
	QAndroidJniObject MembershipKey::networkInterface()
	{
		return callObjectMethod(
			"networkInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	QAndroidJniObject MembershipKey::sourceAddress()
	{
		return callObjectMethod(
			"sourceAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	QAndroidJniObject MembershipKey::unblock(java::net::InetAddress arg0)
	{
		return callObjectMethod(
			"unblock",
			"(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;",
			arg0.object()
		);
	}
} // namespace java::nio::channels

