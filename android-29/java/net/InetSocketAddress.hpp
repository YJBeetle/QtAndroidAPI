#pragma once

#ifndef JAVA_NET_INETSOCKETADDRESS
#define JAVA_NET_INETSOCKETADDRESS

#include "../../__JniBaseClass.hpp"
#include "SocketAddress.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
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
	class InetSocketAddress : public __jni_impl::java::net::SocketAddress
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::net::InetAddress arg0, jint arg1);
		void __constructor(jint arg0);
		void __constructor(jstring arg0, jint arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getAddress();
		jint getPort();
		jboolean isUnresolved();
		QAndroidJniObject getHostName();
		QAndroidJniObject getHostString();
		static QAndroidJniObject createUnresolved(jstring arg0, jint arg1);
	};
} // namespace __jni_impl::java::net

#include "InetAddress.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void InetSocketAddress::__constructor(__jni_impl::java::net::InetAddress arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.InetSocketAddress",
			"(Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void InetSocketAddress::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.InetSocketAddress",
			"(I)V",
			arg0);
	}
	void InetSocketAddress::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.InetSocketAddress",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean InetSocketAddress::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject InetSocketAddress::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint InetSocketAddress::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject InetSocketAddress::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;");
	}
	jint InetSocketAddress::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I");
	}
	jboolean InetSocketAddress::isUnresolved()
	{
		return __thiz.callMethod<jboolean>(
			"isUnresolved",
			"()Z");
	}
	QAndroidJniObject InetSocketAddress::getHostName()
	{
		return __thiz.callObjectMethod(
			"getHostName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject InetSocketAddress::getHostString()
	{
		return __thiz.callObjectMethod(
			"getHostString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject InetSocketAddress::createUnresolved(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetSocketAddress",
			"createUnresolved",
			"(Ljava/lang/String;I)Ljava/net/InetSocketAddress;",
			arg0,
			arg1);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class InetSocketAddress : public __jni_impl::java::net::InetSocketAddress
	{
	public:
		InetSocketAddress(QAndroidJniObject obj) { __thiz = obj; }
		InetSocketAddress(__jni_impl::java::net::InetAddress arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InetSocketAddress(jint arg0)
		{
			__constructor(
				arg0);
		}
		InetSocketAddress(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::net

#endif // JAVA_NET_INETSOCKETADDRESS

