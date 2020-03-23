#pragma once

#ifndef ORG_APACHE_HTTP_CONN_SSL_SSLSOCKETFACTORY
#define ORG_APACHE_HTTP_CONN_SSL_SSLSOCKETFACTORY

#include "../../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class KeyStore;
}
namespace __jni_impl::java::security
{
	class SecureRandom;
}
namespace __jni_impl::java::net
{
	class Socket;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::org::apache::http::conn::ssl
{
	class SSLSocketFactory : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ALLOW_ALL_HOSTNAME_VERIFIER();
		static QAndroidJniObject BROWSER_COMPATIBLE_HOSTNAME_VERIFIER();
		static QAndroidJniObject SSL();
		static QAndroidJniObject SSLV2();
		static QAndroidJniObject STRICT_HOSTNAME_VERIFIER();
		static QAndroidJniObject TLS();
		
		// Constructors
		void __constructor(__jni_impl::java::security::KeyStore arg0);
		void __constructor(__jni_impl::java::security::KeyStore arg0, jstring arg1);
		void __constructor(__jni_impl::java::security::KeyStore arg0, jstring arg1, __jni_impl::java::security::KeyStore arg2);
		void __constructor(jstring arg0, __jni_impl::java::security::KeyStore arg1, jstring arg2, __jni_impl::java::security::KeyStore arg3, __jni_impl::java::security::SecureRandom arg4, __jni_impl::__JniBaseClass arg5);
		
		// Methods
		jboolean isSecure(__jni_impl::java::net::Socket arg0);
		static QAndroidJniObject getSocketFactory();
		QAndroidJniObject createSocket(__jni_impl::java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3);
		QAndroidJniObject createSocket();
		QAndroidJniObject connectSocket(__jni_impl::java::net::Socket arg0, jstring arg1, jint arg2, __jni_impl::java::net::InetAddress arg3, jint arg4, __jni_impl::__JniBaseClass arg5);
		void setHostnameVerifier(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getHostnameVerifier();
	};
} // namespace __jni_impl::org::apache::http::conn::ssl

#include "../../../../../java/security/KeyStore.hpp"
#include "../../../../../java/security/SecureRandom.hpp"
#include "../../../../../java/net/Socket.hpp"
#include "../../../../../java/net/InetAddress.hpp"

namespace __jni_impl::org::apache::http::conn::ssl
{
	// Fields
	QAndroidJniObject SSLSocketFactory::ALLOW_ALL_HOSTNAME_VERIFIER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"ALLOW_ALL_HOSTNAME_VERIFIER",
			"Lorg/apache/http/conn/ssl/X509HostnameVerifier;");
	}
	QAndroidJniObject SSLSocketFactory::BROWSER_COMPATIBLE_HOSTNAME_VERIFIER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"BROWSER_COMPATIBLE_HOSTNAME_VERIFIER",
			"Lorg/apache/http/conn/ssl/X509HostnameVerifier;");
	}
	QAndroidJniObject SSLSocketFactory::SSL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"SSL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SSLSocketFactory::SSLV2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"SSLV2",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SSLSocketFactory::STRICT_HOSTNAME_VERIFIER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"STRICT_HOSTNAME_VERIFIER",
			"Lorg/apache/http/conn/ssl/X509HostnameVerifier;");
	}
	QAndroidJniObject SSLSocketFactory::TLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"TLS",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void SSLSocketFactory::__constructor(__jni_impl::java::security::KeyStore arg0)
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;)V",
			arg0.__jniObject().object());
	}
	void SSLSocketFactory::__constructor(__jni_impl::java::security::KeyStore arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void SSLSocketFactory::__constructor(__jni_impl::java::security::KeyStore arg0, jstring arg1, __jni_impl::java::security::KeyStore arg2)
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;Ljava/lang/String;Ljava/security/KeyStore;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void SSLSocketFactory::__constructor(jstring arg0, __jni_impl::java::security::KeyStore arg1, jstring arg2, __jni_impl::java::security::KeyStore arg3, __jni_impl::java::security::SecureRandom arg4, __jni_impl::__JniBaseClass arg5)
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/lang/String;Ljava/security/KeyStore;Ljava/lang/String;Ljava/security/KeyStore;Ljava/security/SecureRandom;Lorg/apache/http/conn/scheme/HostNameResolver;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	
	// Methods
	jboolean SSLSocketFactory::isSecure(__jni_impl::java::net::Socket arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSecure",
			"(Ljava/net/Socket;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SSLSocketFactory::getSocketFactory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"getSocketFactory",
			"()Lorg/apache/http/conn/ssl/SSLSocketFactory;");
	}
	QAndroidJniObject SSLSocketFactory::createSocket(__jni_impl::java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject SSLSocketFactory::createSocket()
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"()Ljava/net/Socket;");
	}
	QAndroidJniObject SSLSocketFactory::connectSocket(__jni_impl::java::net::Socket arg0, jstring arg1, jint arg2, __jni_impl::java::net::InetAddress arg3, jint arg4, __jni_impl::__JniBaseClass arg5)
	{
		return __thiz.callObjectMethod(
			"connectSocket",
			"(Ljava/net/Socket;Ljava/lang/String;ILjava/net/InetAddress;ILorg/apache/http/params/HttpParams;)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object());
	}
	void SSLSocketFactory::setHostnameVerifier(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setHostnameVerifier",
			"(Lorg/apache/http/conn/ssl/X509HostnameVerifier;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject SSLSocketFactory::getHostnameVerifier()
	{
		return __thiz.callObjectMethod(
			"getHostnameVerifier",
			"()Lorg/apache/http/conn/ssl/X509HostnameVerifier;");
	}
} // namespace __jni_impl::org::apache::http::conn::ssl

namespace org::apache::http::conn::ssl
{
	class SSLSocketFactory : public __jni_impl::org::apache::http::conn::ssl::SSLSocketFactory
	{
	public:
		SSLSocketFactory(QAndroidJniObject obj) { __thiz = obj; }
		SSLSocketFactory(__jni_impl::java::security::KeyStore arg0)
		{
			__constructor(
				arg0);
		}
		SSLSocketFactory(__jni_impl::java::security::KeyStore arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SSLSocketFactory(__jni_impl::java::security::KeyStore arg0, jstring arg1, __jni_impl::java::security::KeyStore arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SSLSocketFactory(jstring arg0, __jni_impl::java::security::KeyStore arg1, jstring arg2, __jni_impl::java::security::KeyStore arg3, __jni_impl::java::security::SecureRandom arg4, __jni_impl::__JniBaseClass arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace org::apache::http::conn::ssl

#endif // ORG_APACHE_HTTP_CONN_SSL_SSLSOCKETFACTORY

