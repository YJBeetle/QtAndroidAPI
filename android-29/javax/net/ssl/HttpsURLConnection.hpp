#pragma once

#ifndef JAVAX_NET_SSL_HTTPSURLCONNECTION
#define JAVAX_NET_SSL_HTTPSURLCONNECTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/net/URLConnection.hpp"
#include "../../../java/net/HttpURLConnection.hpp"

namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::util
{
	class Optional;
}
namespace __jni_impl::javax::net::ssl
{
	class SSLSocketFactory;
}

namespace __jni_impl::javax::net::ssl
{
	class HttpsURLConnection : public __jni_impl::java::net::HttpURLConnection
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefaultHostnameVerifier();
		static QAndroidJniObject getDefaultSSLSocketFactory();
		static void setDefaultHostnameVerifier(__jni_impl::__JniBaseClass arg0);
		static void setDefaultSSLSocketFactory(__jni_impl::javax::net::ssl::SSLSocketFactory arg0);
		jstring getCipherSuite();
		QAndroidJniObject getHostnameVerifier();
		jarray getLocalCertificates();
		QAndroidJniObject getLocalPrincipal();
		QAndroidJniObject getPeerPrincipal();
		QAndroidJniObject getSSLSession();
		QAndroidJniObject getSSLSocketFactory();
		jarray getServerCertificates();
		void setHostnameVerifier(__jni_impl::__JniBaseClass arg0);
		void setSSLSocketFactory(__jni_impl::javax::net::ssl::SSLSocketFactory arg0);
	};
} // namespace __jni_impl::javax::net::ssl

#include "../../../java/net/URL.hpp"
#include "../../../java/util/Optional.hpp"
#include "SSLSocketFactory.hpp"

namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void HttpsURLConnection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.HttpsURLConnection",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject HttpsURLConnection::getDefaultHostnameVerifier()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.HttpsURLConnection",
			"getDefaultHostnameVerifier",
			"()Ljavax/net/ssl/HostnameVerifier;"
		);
	}
	QAndroidJniObject HttpsURLConnection::getDefaultSSLSocketFactory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.HttpsURLConnection",
			"getDefaultSSLSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	void HttpsURLConnection::setDefaultHostnameVerifier(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"javax.net.ssl.HttpsURLConnection",
			"setDefaultHostnameVerifier",
			"(Ljavax/net/ssl/HostnameVerifier;)V",
			arg0.__jniObject().object()
		);
	}
	void HttpsURLConnection::setDefaultSSLSocketFactory(__jni_impl::javax::net::ssl::SSLSocketFactory arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"javax.net.ssl.HttpsURLConnection",
			"setDefaultSSLSocketFactory",
			"(Ljavax/net/ssl/SSLSocketFactory;)V",
			arg0.__jniObject().object()
		);
	}
	jstring HttpsURLConnection::getCipherSuite()
	{
		return __thiz.callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject HttpsURLConnection::getHostnameVerifier()
	{
		return __thiz.callObjectMethod(
			"getHostnameVerifier",
			"()Ljavax/net/ssl/HostnameVerifier;"
		);
	}
	jarray HttpsURLConnection::getLocalCertificates()
	{
		return __thiz.callObjectMethod(
			"getLocalCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	QAndroidJniObject HttpsURLConnection::getLocalPrincipal()
	{
		return __thiz.callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject HttpsURLConnection::getPeerPrincipal()
	{
		return __thiz.callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject HttpsURLConnection::getSSLSession()
	{
		return __thiz.callObjectMethod(
			"getSSLSession",
			"()Ljava/util/Optional;"
		);
	}
	QAndroidJniObject HttpsURLConnection::getSSLSocketFactory()
	{
		return __thiz.callObjectMethod(
			"getSSLSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	jarray HttpsURLConnection::getServerCertificates()
	{
		return __thiz.callObjectMethod(
			"getServerCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	void HttpsURLConnection::setHostnameVerifier(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setHostnameVerifier",
			"(Ljavax/net/ssl/HostnameVerifier;)V",
			arg0.__jniObject().object()
		);
	}
	void HttpsURLConnection::setSSLSocketFactory(__jni_impl::javax::net::ssl::SSLSocketFactory arg0)
	{
		__thiz.callMethod<void>(
			"setSSLSocketFactory",
			"(Ljavax/net/ssl/SSLSocketFactory;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class HttpsURLConnection : public __jni_impl::javax::net::ssl::HttpsURLConnection
	{
	public:
		HttpsURLConnection(QAndroidJniObject obj) { __thiz = obj; }
		HttpsURLConnection()
		{
			__constructor();
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_HTTPSURLCONNECTION

