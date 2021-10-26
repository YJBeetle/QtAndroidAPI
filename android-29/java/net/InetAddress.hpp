#pragma once

#ifndef JAVA_NET_INETADDRESS
#define JAVA_NET_INETADDRESS

#include "../../__JniBaseClass.hpp"

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
	class InetAddress : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jstring getHostAddress();
		jbyteArray getAddress();
		jstring getHostName();
		static QAndroidJniObject getByName(jstring arg0);
		static QAndroidJniObject getByName(const QString &arg0);
		jboolean isLinkLocalAddress();
		jboolean isReachable(__jni_impl::java::net::NetworkInterface arg0, jint arg1, jint arg2);
		jboolean isReachable(jint arg0);
		static jarray getAllByName(jstring arg0);
		static jarray getAllByName(const QString &arg0);
		static QAndroidJniObject getByAddress(jbyteArray arg0);
		static QAndroidJniObject getByAddress(jstring arg0, jbyteArray arg1);
		static QAndroidJniObject getByAddress(const QString &arg0, jbyteArray arg1);
		jboolean isMulticastAddress();
		jboolean isAnyLocalAddress();
		jboolean isLoopbackAddress();
		jboolean isSiteLocalAddress();
		jboolean isMCGlobal();
		jboolean isMCNodeLocal();
		jboolean isMCLinkLocal();
		jboolean isMCSiteLocal();
		jboolean isMCOrgLocal();
		jstring getCanonicalHostName();
		static QAndroidJniObject getLoopbackAddress();
		static QAndroidJniObject getLocalHost();
	};
} // namespace __jni_impl::java::net

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "NetworkInterface.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void InetAddress::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.InetAddress",
			"(V)V");
	}
	
	// Methods
	jboolean InetAddress::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring InetAddress::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InetAddress::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring InetAddress::getHostAddress()
	{
		return __thiz.callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray InetAddress::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()[B"
		).object<jbyteArray>();
	}
	jstring InetAddress::getHostName()
	{
		return __thiz.callObjectMethod(
			"getHostName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject InetAddress::getByName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetAddress",
			"getByName",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0
		);
	}
	QAndroidJniObject InetAddress::getByName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetAddress",
			"getByName",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean InetAddress::isLinkLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isReachable(__jni_impl::java::net::NetworkInterface arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"isReachable",
			"(Ljava/net/NetworkInterface;II)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean InetAddress::isReachable(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isReachable",
			"(I)Z",
			arg0
		);
	}
	jarray InetAddress::getAllByName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetAddress",
			"getAllByName",
			"(Ljava/lang/String;)[Ljava/net/InetAddress;",
			arg0
		).object<jarray>();
	}
	jarray InetAddress::getAllByName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetAddress",
			"getAllByName",
			"(Ljava/lang/String;)[Ljava/net/InetAddress;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	QAndroidJniObject InetAddress::getByAddress(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetAddress",
			"getByAddress",
			"([B)Ljava/net/InetAddress;",
			arg0
		);
	}
	QAndroidJniObject InetAddress::getByAddress(jstring arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetAddress",
			"getByAddress",
			"(Ljava/lang/String;[B)Ljava/net/InetAddress;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject InetAddress::getByAddress(const QString &arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetAddress",
			"getByAddress",
			"(Ljava/lang/String;[B)Ljava/net/InetAddress;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jboolean InetAddress::isMulticastAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isAnyLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isLoopbackAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isSiteLocalAddress()
	{
		return __thiz.callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isMCGlobal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCNodeLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCLinkLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCSiteLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCOrgLocal()
	{
		return __thiz.callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
	jstring InetAddress::getCanonicalHostName()
	{
		return __thiz.callObjectMethod(
			"getCanonicalHostName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject InetAddress::getLoopbackAddress()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetAddress",
			"getLoopbackAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	QAndroidJniObject InetAddress::getLocalHost()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetAddress",
			"getLocalHost",
			"()Ljava/net/InetAddress;"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class InetAddress : public __jni_impl::java::net::InetAddress
	{
	public:
		InetAddress(QAndroidJniObject obj) { __thiz = obj; }
		InetAddress()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_INETADDRESS

