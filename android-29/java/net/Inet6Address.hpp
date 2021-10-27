#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InetAddress.hpp"

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
	class NetworkInterface;
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
		static QAndroidJniObject getByAddress(jstring arg0, jbyteArray arg1, jint arg2);
		static QAndroidJniObject getByAddress(const QString &arg0, jbyteArray arg1, jint arg2);
		static QAndroidJniObject getByAddress(jstring arg0, jbyteArray arg1, __jni_impl::java::net::NetworkInterface arg2);
		static QAndroidJniObject getByAddress(const QString &arg0, jbyteArray arg1, __jni_impl::java::net::NetworkInterface arg2);
		jboolean equals(jobject arg0);
		jbyteArray getAddress();
		jstring getHostAddress();
		jint getScopeId();
		QAndroidJniObject getScopedInterface();
		jint hashCode();
		jboolean isAnyLocalAddress();
		jboolean isIPv4CompatibleAddress();
		jboolean isLinkLocalAddress();
		jboolean isLoopbackAddress();
		jboolean isMCGlobal();
		jboolean isMCLinkLocal();
		jboolean isMCNodeLocal();
		jboolean isMCOrgLocal();
		jboolean isMCSiteLocal();
		jboolean isMulticastAddress();
		jboolean isSiteLocalAddress();
	};
} // namespace __jni_impl::java::net

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./NetworkInterface.hpp"

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
	QAndroidJniObject Inet6Address::getByAddress(jstring arg0, jbyteArray arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BI)Ljava/net/Inet6Address;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Inet6Address::getByAddress(const QString &arg0, jbyteArray arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BI)Ljava/net/Inet6Address;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Inet6Address::getByAddress(jstring arg0, jbyteArray arg1, __jni_impl::java::net::NetworkInterface arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BLjava/net/NetworkInterface;)Ljava/net/Inet6Address;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Inet6Address::getByAddress(const QString &arg0, jbyteArray arg1, __jni_impl::java::net::NetworkInterface arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BLjava/net/NetworkInterface;)Ljava/net/Inet6Address;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean Inet6Address::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray Inet6Address::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()[B"
		).object<jbyteArray>();
	}
	jstring Inet6Address::getHostAddress()
	{
		return __thiz.callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Inet6Address::getScopeId()
	{
		return __thiz.callMethod<jint>(
			"getScopeId",
			"()I"
		);
	}
	QAndroidJniObject Inet6Address::getScopedInterface()
	{
		return __thiz.callObjectMethod(
			"getScopedInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	jint Inet6Address::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Inet6Address::isAnyLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isIPv4CompatibleAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isIPv4CompatibleAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isLinkLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isLoopbackAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCGlobal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCLinkLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCNodeLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCOrgLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCSiteLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMulticastAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isSiteLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
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

