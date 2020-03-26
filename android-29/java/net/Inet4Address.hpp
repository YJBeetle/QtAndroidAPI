#pragma once

#ifndef JAVA_NET_INET4ADDRESS
#define JAVA_NET_INET4ADDRESS

#include "../../__JniBaseClass.hpp"
#include "InetAddress.hpp"


namespace __jni_impl::java::net
{
	class Inet4Address : public __jni_impl::java::net::InetAddress
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring getHostAddress();
		jbyteArray getAddress();
		jboolean isLinkLocalAddress();
		jboolean isMulticastAddress();
		jboolean isAnyLocalAddress();
		jboolean isLoopbackAddress();
		jboolean isSiteLocalAddress();
		jboolean isMCGlobal();
		jboolean isMCNodeLocal();
		jboolean isMCLinkLocal();
		jboolean isMCSiteLocal();
		jboolean isMCOrgLocal();
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void Inet4Address::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.Inet4Address",
			"(V)V");
	}
	
	// Methods
	jboolean Inet4Address::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Inet4Address::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Inet4Address::getHostAddress()
	{
		return __thiz.callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray Inet4Address::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()[B"
		).object<jbyteArray>();
	}
	jboolean Inet4Address::isLinkLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	jboolean Inet4Address::isMulticastAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	jboolean Inet4Address::isAnyLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	jboolean Inet4Address::isLoopbackAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	jboolean Inet4Address::isSiteLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
	}
	jboolean Inet4Address::isMCGlobal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	jboolean Inet4Address::isMCNodeLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	jboolean Inet4Address::isMCLinkLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	jboolean Inet4Address::isMCSiteLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	jboolean Inet4Address::isMCOrgLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class Inet4Address : public __jni_impl::java::net::Inet4Address
	{
	public:
		Inet4Address(QAndroidJniObject obj) { __thiz = obj; }
		Inet4Address()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_INET4ADDRESS

