#include "../../../java/net/URL.hpp"
#include "../../../java/util/Optional.hpp"
#include "./SSLSocketFactory.hpp"
#include "./HttpsURLConnection.hpp"

namespace javax::net::ssl
{
	// Fields
	
	HttpsURLConnection::HttpsURLConnection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	void HttpsURLConnection::setDefaultHostnameVerifier(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"javax.net.ssl.HttpsURLConnection",
			"setDefaultHostnameVerifier",
			"(Ljavax/net/ssl/HostnameVerifier;)V",
			arg0.__jniObject().object()
		);
	}
	void HttpsURLConnection::setDefaultSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0)
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
	void HttpsURLConnection::setHostnameVerifier(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setHostnameVerifier",
			"(Ljavax/net/ssl/HostnameVerifier;)V",
			arg0.__jniObject().object()
		);
	}
	void HttpsURLConnection::setSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0)
	{
		__thiz.callMethod<void>(
			"setSSLSocketFactory",
			"(Ljavax/net/ssl/SSLSocketFactory;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace javax::net::ssl

