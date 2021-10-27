#pragma once

#include "../../__JniBaseClass.hpp"
#include "SocketAddress.hpp"

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
	class InetAddress;
}

namespace __jni_impl::java::net
{
	class InetSocketAddress : public __jni_impl::java::net::SocketAddress
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		void __constructor(__jni_impl::java::net::InetAddress arg0, jint arg1);
		
		// Methods
		static QAndroidJniObject createUnresolved(jstring arg0, jint arg1);
		static QAndroidJniObject createUnresolved(const QString &arg0, jint arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject getAddress();
		jstring getHostName();
		jstring getHostString();
		jint getPort();
		jint hashCode();
		jboolean isUnresolved();
		jstring toString();
	};
} // namespace __jni_impl::java::net

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "InetAddress.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void InetSocketAddress::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.InetSocketAddress",
			"(I)V",
			arg0
		);
	}
	void InetSocketAddress::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.InetSocketAddress",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void InetSocketAddress::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.InetSocketAddress",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void InetSocketAddress::__constructor(__jni_impl::java::net::InetAddress arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.InetSocketAddress",
			"(Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject InetSocketAddress::createUnresolved(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetSocketAddress",
			"createUnresolved",
			"(Ljava/lang/String;I)Ljava/net/InetSocketAddress;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject InetSocketAddress::createUnresolved(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetSocketAddress",
			"createUnresolved",
			"(Ljava/lang/String;I)Ljava/net/InetSocketAddress;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jboolean InetSocketAddress::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject InetSocketAddress::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jstring InetSocketAddress::getHostName()
	{
		return __thiz.callObjectMethod(
			"getHostName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InetSocketAddress::getHostString()
	{
		return __thiz.callObjectMethod(
			"getHostString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InetSocketAddress::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint InetSocketAddress::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InetSocketAddress::isUnresolved()
	{
		return __thiz.callMethod<jboolean>(
			"isUnresolved",
			"()Z"
		);
	}
	jstring InetSocketAddress::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class InetSocketAddress : public __jni_impl::java::net::InetSocketAddress
	{
	public:
		InetSocketAddress(QAndroidJniObject obj) { __thiz = obj; }
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
		InetSocketAddress(__jni_impl::java::net::InetAddress arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::net

