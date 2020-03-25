#pragma once

#ifndef JAVA_NET_INET6ADDRESS
#define JAVA_NET_INET6ADDRESS

#include "../../__JniBaseClass.hpp"
#include "InetAddress.hpp"

namespace __jni_impl::java::net
{
	class NetworkInterface;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::net
{
	class Inet6Address : public __jni_impl::java::net::InetAddress
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getHostAddress();
		QAndroidJniObject getAddress();
		jboolean isLinkLocalAddress();
		jint getScopeId();
		static QAndroidJniObject getByAddress(jstring arg0, jbyteArray arg1, jint arg2);
		static QAndroidJniObject getByAddress(jstring arg0, jbyteArray arg1, __jni_impl::java::net::NetworkInterface arg2);
		jboolean isMulticastAddress();
		jboolean isAnyLocalAddress();
		jboolean isLoopbackAddress();
		jboolean isSiteLocalAddress();
		jboolean isMCGlobal();
		jboolean isMCNodeLocal();
		jboolean isMCLinkLocal();
		jboolean isMCSiteLocal();
		jboolean isMCOrgLocal();
		jboolean isIPv4CompatibleAddress();
		QAndroidJniObject getScopedInterface();
	};
} // namespace __jni_impl::java::net

#include "NetworkInterface.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void Inet6Address::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.Inet6Address",
			"(V)V");
	}
	
	// Methods
	jboolean Inet6Address::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint Inet6Address::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Inet6Address::getHostAddress()
	{
		return __thiz.callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Inet6Address::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()[B");
	}
	jboolean Inet6Address::isLinkLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z");
	}
	jint Inet6Address::getScopeId()
	{
		return __thiz.callMethod<jint>(
			"getScopeId",
			"()I");
	}
	QAndroidJniObject Inet6Address::getByAddress(jstring arg0, jbyteArray arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BI)Ljava/net/Inet6Address;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject Inet6Address::getByAddress(jstring arg0, jbyteArray arg1, __jni_impl::java::net::NetworkInterface arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BLjava/net/NetworkInterface;)Ljava/net/Inet6Address;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	jboolean Inet6Address::isMulticastAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isMulticastAddress",
			"()Z");
	}
	jboolean Inet6Address::isAnyLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z");
	}
	jboolean Inet6Address::isLoopbackAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z");
	}
	jboolean Inet6Address::isSiteLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z");
	}
	jboolean Inet6Address::isMCGlobal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCGlobal",
			"()Z");
	}
	jboolean Inet6Address::isMCNodeLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z");
	}
	jboolean Inet6Address::isMCLinkLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z");
	}
	jboolean Inet6Address::isMCSiteLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z");
	}
	jboolean Inet6Address::isMCOrgLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z");
	}
	jboolean Inet6Address::isIPv4CompatibleAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isIPv4CompatibleAddress",
			"()Z");
	}
	QAndroidJniObject Inet6Address::getScopedInterface()
	{
		return __thiz.callObjectMethod(
			"getScopedInterface",
			"()Ljava/net/NetworkInterface;");
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class Inet6Address : public __jni_impl::java::net::Inet6Address
	{
	public:
		Inet6Address(QAndroidJniObject obj) { __thiz = obj; }
		Inet6Address()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_INET6ADDRESS

