#pragma once

#ifndef JAVAX_NET_SSL_HTTPSURLCONNECTION
#define JAVAX_NET_SSL_HTTPSURLCONNECTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/net/URLConnection.hpp"
#include "../../../java/net/HttpURLConnection.hpp"

namespace __jni_impl::javax::net::ssl
{
	class SSLSocketFactory;
}
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
	class HttpsURLConnection : public __jni_impl::java::net::HttpURLConnection
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jarray getLocalCertificates();
		static QAndroidJniObject getDefaultSSLSocketFactory();
		jarray getServerCertificates();
		void setHostnameVerifier(__jni_impl::__JniBaseClass arg0);
		static void setDefaultHostnameVerifier(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getDefaultHostnameVerifier();
		QAndroidJniObject getHostnameVerifier();
		static void setDefaultSSLSocketFactory(__jni_impl::javax::net::ssl::SSLSocketFactory arg0);
		void setSSLSocketFactory(__jni_impl::javax::net::ssl::SSLSocketFactory arg0);
		QAndroidJniObject getSSLSocketFactory();
		jstring getCipherSuite();
		QAndroidJniObject getPeerPrincipal();
		QAndroidJniObject getLocalPrincipal();
		QAndroidJniObject getSSLSession();
	};
} // namespace __jni_impl::javax::net::ssl

#include "SSLSocketFactory.hpp"
#include "../../../java/net/URL.hpp"
#include "../../../java/util/Optional.hpp"

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
	jarray HttpsURLConnection::getLocalCertificates()
	{
		return __thiz.callObjectMethod(
			"getLocalCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	QAndroidJniObject HttpsURLConnection::getDefaultSSLSocketFactory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.HttpsURLConnection",
			"getDefaultSSLSocketFactory",
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
	void HttpsURLConnection::setDefaultHostnameVerifier(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"javax.net.ssl.HttpsURLConnection",
			"setDefaultHostnameVerifier",
			"(Ljavax/net/ssl/HostnameVerifier;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject HttpsURLConnection::getDefaultHostnameVerifier()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.net.ssl.HttpsURLConnection",
			"getDefaultHostnameVerifier",
			"()Ljavax/net/ssl/HostnameVerifier;"
		);
	}
	QAndroidJniObject HttpsURLConnection::getHostnameVerifier()
	{
		return __thiz.callObjectMethod(
			"getHostnameVerifier",
			"()Ljavax/net/ssl/HostnameVerifier;"
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
	void HttpsURLConnection::setSSLSocketFactory(__jni_impl::javax::net::ssl::SSLSocketFactory arg0)
	{
		__thiz.callMethod<void>(
			"setSSLSocketFactory",
			"(Ljavax/net/ssl/SSLSocketFactory;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject HttpsURLConnection::getSSLSocketFactory()
	{
		return __thiz.callObjectMethod(
			"getSSLSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	jstring HttpsURLConnection::getCipherSuite()
	{
		return __thiz.callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject HttpsURLConnection::getPeerPrincipal()
	{
		return __thiz.callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject HttpsURLConnection::getLocalPrincipal()
	{
		return __thiz.callObjectMethod(
			"getLocalPrincipal",
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

