#pragma once

#ifndef JAVA_NIO_CHANNELS_MEMBERSHIPKEY
#define JAVA_NIO_CHANNELS_MEMBERSHIPKEY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class NetworkInterface;
}

namespace __jni_impl::java::nio::channels
{
	class MembershipKey : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject group();
		QAndroidJniObject block(__jni_impl::java::net::InetAddress arg0);
		QAndroidJniObject channel();
		void drop();
		jboolean isValid();
		QAndroidJniObject sourceAddress();
		QAndroidJniObject unblock(__jni_impl::java::net::InetAddress arg0);
		QAndroidJniObject networkInterface();
	};
} // namespace __jni_impl::java::nio::channels

#include "../../net/InetAddress.hpp"
#include "../../net/NetworkInterface.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void MembershipKey::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.MembershipKey",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MembershipKey::group()
	{
		return __thiz.callObjectMethod(
			"group",
			"()Ljava/net/InetAddress;"
		);
	}
	QAndroidJniObject MembershipKey::block(__jni_impl::java::net::InetAddress arg0)
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
	jboolean MembershipKey::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	QAndroidJniObject MembershipKey::sourceAddress()
	{
		return __thiz.callObjectMethod(
			"sourceAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	QAndroidJniObject MembershipKey::unblock(__jni_impl::java::net::InetAddress arg0)
	{
		return __thiz.callObjectMethod(
			"unblock",
			"(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MembershipKey::networkInterface()
	{
		return __thiz.callObjectMethod(
			"networkInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class MembershipKey : public __jni_impl::java::nio::channels::MembershipKey
	{
	public:
		MembershipKey(QAndroidJniObject obj) { __thiz = obj; }
		MembershipKey()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_MEMBERSHIPKEY

