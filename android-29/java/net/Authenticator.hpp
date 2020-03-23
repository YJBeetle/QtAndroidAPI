#pragma once

#ifndef JAVA_NET_AUTHENTICATOR
#define JAVA_NET_AUTHENTICATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::net
{
	class Authenticator_RequestorType;
}
namespace __jni_impl::java::net
{
	class PasswordAuthentication;
}

namespace __jni_impl::java::net
{
	class Authenticator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefault();
		static void setDefault(__jni_impl::java::net::Authenticator arg0);
		static QAndroidJniObject requestPasswordAuthentication(__jni_impl::java::net::Authenticator arg0, jstring arg1, __jni_impl::java::net::InetAddress arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, __jni_impl::java::net::URL arg7, __jni_impl::java::net::Authenticator_RequestorType arg8);
		static QAndroidJniObject requestPasswordAuthentication(__jni_impl::java::net::InetAddress arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4);
		static QAndroidJniObject requestPasswordAuthentication(jstring arg0, __jni_impl::java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5);
		static QAndroidJniObject requestPasswordAuthentication(jstring arg0, __jni_impl::java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, __jni_impl::java::net::URL arg6, __jni_impl::java::net::Authenticator_RequestorType arg7);
		QAndroidJniObject requestPasswordAuthenticationInstance(jstring arg0, __jni_impl::java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, __jni_impl::java::net::URL arg6, __jni_impl::java::net::Authenticator_RequestorType arg7);
	};
} // namespace __jni_impl::java::net

#include "InetAddress.hpp"
#include "URL.hpp"
#include "Authenticator_RequestorType.hpp"
#include "PasswordAuthentication.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void Authenticator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.Authenticator",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Authenticator::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"getDefault",
			"()Ljava/net/Authenticator;");
	}
	void Authenticator::setDefault(__jni_impl::java::net::Authenticator arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.Authenticator",
			"setDefault",
			"(Ljava/net/Authenticator;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(__jni_impl::java::net::Authenticator arg0, jstring arg1, __jni_impl::java::net::InetAddress arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, __jni_impl::java::net::URL arg7, __jni_impl::java::net::Authenticator_RequestorType arg8)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/net/Authenticator;Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.__jniObject().object(),
			arg8.__jniObject().object());
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(__jni_impl::java::net::InetAddress arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(jstring arg0, __jni_impl::java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/PasswordAuthentication;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5);
	}
	QAndroidJniObject Authenticator::requestPasswordAuthentication(jstring arg0, __jni_impl::java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, __jni_impl::java::net::URL arg6, __jni_impl::java::net::Authenticator_RequestorType arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Authenticator",
			"requestPasswordAuthentication",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7.__jniObject().object());
	}
	QAndroidJniObject Authenticator::requestPasswordAuthenticationInstance(jstring arg0, __jni_impl::java::net::InetAddress arg1, jint arg2, jstring arg3, jstring arg4, jstring arg5, __jni_impl::java::net::URL arg6, __jni_impl::java::net::Authenticator_RequestorType arg7)
	{
		return __thiz.callObjectMethod(
			"requestPasswordAuthenticationInstance",
			"(Ljava/lang/String;Ljava/net/InetAddress;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;Ljava/net/Authenticator$RequestorType;)Ljava/net/PasswordAuthentication;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7.__jniObject().object());
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class Authenticator : public __jni_impl::java::net::Authenticator
	{
	public:
		Authenticator(QAndroidJniObject obj) { __thiz = obj; }
		Authenticator()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_AUTHENTICATOR

