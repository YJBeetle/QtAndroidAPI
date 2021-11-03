#include "../../../java/net/URL.hpp"
#include "../../../java/util/Optional.hpp"
#include "./SSLSocketFactory.hpp"
#include "./HttpsURLConnection.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	HttpsURLConnection::HttpsURLConnection(QAndroidJniObject obj) : java::net::HttpURLConnection(obj) {}
	
	// Constructors
	
	// Methods
	JObject HttpsURLConnection::getDefaultHostnameVerifier()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.HttpsURLConnection",
			"getDefaultHostnameVerifier",
			"()Ljavax/net/ssl/HostnameVerifier;"
		);
	}
	javax::net::ssl::SSLSocketFactory HttpsURLConnection::getDefaultSSLSocketFactory()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.HttpsURLConnection",
			"getDefaultSSLSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	void HttpsURLConnection::setDefaultHostnameVerifier(JObject arg0)
	{
		callStaticMethod<void>(
			"javax.net.ssl.HttpsURLConnection",
			"setDefaultHostnameVerifier",
			"(Ljavax/net/ssl/HostnameVerifier;)V",
			arg0.object()
		);
	}
	void HttpsURLConnection::setDefaultSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0)
	{
		callStaticMethod<void>(
			"javax.net.ssl.HttpsURLConnection",
			"setDefaultSSLSocketFactory",
			"(Ljavax/net/ssl/SSLSocketFactory;)V",
			arg0.object()
		);
	}
	jstring HttpsURLConnection::getCipherSuite()
	{
		return callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject HttpsURLConnection::getHostnameVerifier()
	{
		return callObjectMethod(
			"getHostnameVerifier",
			"()Ljavax/net/ssl/HostnameVerifier;"
		);
	}
	jarray HttpsURLConnection::getLocalCertificates()
	{
		return callObjectMethod(
			"getLocalCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	JObject HttpsURLConnection::getLocalPrincipal()
	{
		return callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	JObject HttpsURLConnection::getPeerPrincipal()
	{
		return callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	java::util::Optional HttpsURLConnection::getSSLSession()
	{
		return callObjectMethod(
			"getSSLSession",
			"()Ljava/util/Optional;"
		);
	}
	javax::net::ssl::SSLSocketFactory HttpsURLConnection::getSSLSocketFactory()
	{
		return callObjectMethod(
			"getSSLSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	jarray HttpsURLConnection::getServerCertificates()
	{
		return callObjectMethod(
			"getServerCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	void HttpsURLConnection::setHostnameVerifier(JObject arg0)
	{
		callMethod<void>(
			"setHostnameVerifier",
			"(Ljavax/net/ssl/HostnameVerifier;)V",
			arg0.object()
		);
	}
	void HttpsURLConnection::setSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0)
	{
		callMethod<void>(
			"setSSLSocketFactory",
			"(Ljavax/net/ssl/SSLSocketFactory;)V",
			arg0.object()
		);
	}
} // namespace javax::net::ssl

