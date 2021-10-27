#include "../../net/InetAddress.hpp"
#include "../../net/NetworkInterface.hpp"
#include "./MembershipKey.hpp"

namespace java::nio::channels
{
	// Fields
	
	MembershipKey::MembershipKey(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MembershipKey::block(java::net::InetAddress arg0)
	{
		return __thiz.callObjectMethod(
			"block",
			"(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MembershipKey::channel()
	{
		return __thiz.callObjectMethod(
			"channel",
			"()Ljava/nio/channels/MulticastChannel;"
		);
	}
	void MembershipKey::drop()
	{
		__thiz.callMethod<void>(
			"drop",
			"()V"
		);
	}
	QAndroidJniObject MembershipKey::group()
	{
		return __thiz.callObjectMethod(
			"group",
			"()Ljava/net/InetAddress;"
		);
	}
	jboolean MembershipKey::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	QAndroidJniObject MembershipKey::networkInterface()
	{
		return __thiz.callObjectMethod(
			"networkInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	QAndroidJniObject MembershipKey::sourceAddress()
	{
		return __thiz.callObjectMethod(
			"sourceAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	QAndroidJniObject MembershipKey::unblock(java::net::InetAddress arg0)
	{
		return __thiz.callObjectMethod(
			"unblock",
			"(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::nio::channels

