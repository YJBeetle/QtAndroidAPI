#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class Socket;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLEngine;
}

namespace __jni_impl::javax::net::ssl
{
	class X509ExtendedTrustManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void checkClientTrusted(jarray arg0, jstring arg1, __jni_impl::java::net::Socket arg2);
		void checkClientTrusted(jarray arg0, const QString &arg1, __jni_impl::java::net::Socket arg2);
		void checkClientTrusted(jarray arg0, jstring arg1, __jni_impl::javax::net::ssl::SSLEngine arg2);
		void checkClientTrusted(jarray arg0, const QString &arg1, __jni_impl::javax::net::ssl::SSLEngine arg2);
		void checkServerTrusted(jarray arg0, jstring arg1, __jni_impl::java::net::Socket arg2);
		void checkServerTrusted(jarray arg0, const QString &arg1, __jni_impl::java::net::Socket arg2);
		void checkServerTrusted(jarray arg0, jstring arg1, __jni_impl::javax::net::ssl::SSLEngine arg2);
		void checkServerTrusted(jarray arg0, const QString &arg1, __jni_impl::javax::net::ssl::SSLEngine arg2);
	};
} // namespace __jni_impl::javax::net::ssl

#include "../../../java/net/Socket.hpp"
#include "SSLEngine.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void X509ExtendedTrustManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.X509ExtendedTrustManager",
			"()V"
		);
	}
	
	// Methods
	void X509ExtendedTrustManager::checkClientTrusted(jarray arg0, jstring arg1, __jni_impl::java::net::Socket arg2)
	{
		__thiz.callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkClientTrusted(jarray arg0, const QString &arg1, __jni_impl::java::net::Socket arg2)
	{
		__thiz.callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkClientTrusted(jarray arg0, jstring arg1, __jni_impl::javax::net::ssl::SSLEngine arg2)
	{
		__thiz.callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkClientTrusted(jarray arg0, const QString &arg1, __jni_impl::javax::net::ssl::SSLEngine arg2)
	{
		__thiz.callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(jarray arg0, jstring arg1, __jni_impl::java::net::Socket arg2)
	{
		__thiz.callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(jarray arg0, const QString &arg1, __jni_impl::java::net::Socket arg2)
	{
		__thiz.callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(jarray arg0, jstring arg1, __jni_impl::javax::net::ssl::SSLEngine arg2)
	{
		__thiz.callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(jarray arg0, const QString &arg1, __jni_impl::javax::net::ssl::SSLEngine arg2)
	{
		__thiz.callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class X509ExtendedTrustManager : public __jni_impl::javax::net::ssl::X509ExtendedTrustManager
	{
	public:
		X509ExtendedTrustManager(QAndroidJniObject obj) { __thiz = obj; }
		X509ExtendedTrustManager()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

