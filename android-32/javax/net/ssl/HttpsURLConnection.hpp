#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/URL.def.hpp"
#include "../../../java/util/Optional.def.hpp"
#include "./SSLSocketFactory.def.hpp"
#include "./HttpsURLConnection.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject HttpsURLConnection::getDefaultHostnameVerifier()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.HttpsURLConnection",
			"getDefaultHostnameVerifier",
			"()Ljavax/net/ssl/HostnameVerifier;"
		);
	}
	inline javax::net::ssl::SSLSocketFactory HttpsURLConnection::getDefaultSSLSocketFactory()
	{
		return callStaticObjectMethod(
			"javax.net.ssl.HttpsURLConnection",
			"getDefaultSSLSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	inline void HttpsURLConnection::setDefaultHostnameVerifier(JObject arg0)
	{
		callStaticMethod<void>(
			"javax.net.ssl.HttpsURLConnection",
			"setDefaultHostnameVerifier",
			"(Ljavax/net/ssl/HostnameVerifier;)V",
			arg0.object()
		);
	}
	inline void HttpsURLConnection::setDefaultSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0)
	{
		callStaticMethod<void>(
			"javax.net.ssl.HttpsURLConnection",
			"setDefaultSSLSocketFactory",
			"(Ljavax/net/ssl/SSLSocketFactory;)V",
			arg0.object()
		);
	}
	inline JString HttpsURLConnection::getCipherSuite() const
	{
		return callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		);
	}
	inline JObject HttpsURLConnection::getHostnameVerifier() const
	{
		return callObjectMethod(
			"getHostnameVerifier",
			"()Ljavax/net/ssl/HostnameVerifier;"
		);
	}
	inline JArray HttpsURLConnection::getLocalCertificates() const
	{
		return callObjectMethod(
			"getLocalCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	inline JObject HttpsURLConnection::getLocalPrincipal() const
	{
		return callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	inline JObject HttpsURLConnection::getPeerPrincipal() const
	{
		return callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	inline java::util::Optional HttpsURLConnection::getSSLSession() const
	{
		return callObjectMethod(
			"getSSLSession",
			"()Ljava/util/Optional;"
		);
	}
	inline javax::net::ssl::SSLSocketFactory HttpsURLConnection::getSSLSocketFactory() const
	{
		return callObjectMethod(
			"getSSLSocketFactory",
			"()Ljavax/net/ssl/SSLSocketFactory;"
		);
	}
	inline JArray HttpsURLConnection::getServerCertificates() const
	{
		return callObjectMethod(
			"getServerCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	inline void HttpsURLConnection::setHostnameVerifier(JObject arg0) const
	{
		callMethod<void>(
			"setHostnameVerifier",
			"(Ljavax/net/ssl/HostnameVerifier;)V",
			arg0.object()
		);
	}
	inline void HttpsURLConnection::setSSLSocketFactory(javax::net::ssl::SSLSocketFactory arg0) const
	{
		callMethod<void>(
			"setSSLSocketFactory",
			"(Ljavax/net/ssl/SSLSocketFactory;)V",
			arg0.object()
		);
	}
} // namespace javax::net::ssl

// Base class headers
#include "../../../java/net/URLConnection.hpp"
#include "../../../java/net/HttpURLConnection.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif
