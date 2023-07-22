#pragma once

#include "../../../../../JArray.hpp"
#include "../../../../../JString.hpp"
#include "../../../../../java/security/cert/X509Certificate.def.hpp"
#include "../../../../../javax/net/ssl/SSLSocket.def.hpp"
#include "./AbstractVerifier.def.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	// Constructors
	inline AbstractVerifier::AbstractVerifier()
		: JObject(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"()V"
		) {}
	
	// Methods
	inline jboolean AbstractVerifier::acceptableCountryWildcard(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"acceptableCountryWildcard",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jint AbstractVerifier::countDots(JString arg0)
	{
		return callStaticMethod<jint>(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"countDots",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JArray AbstractVerifier::getCNs(java::security::cert::X509Certificate arg0)
	{
		return callStaticObjectMethod(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"getCNs",
			"(Ljava/security/cert/X509Certificate;)[Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JArray AbstractVerifier::getDNSSubjectAlts(java::security::cert::X509Certificate arg0)
	{
		return callStaticObjectMethod(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"getDNSSubjectAlts",
			"(Ljava/security/cert/X509Certificate;)[Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jboolean AbstractVerifier::verify(JString arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"verify",
			"(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void AbstractVerifier::verify(JString arg0, java::security::cert::X509Certificate arg1) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/lang/String;Ljava/security/cert/X509Certificate;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void AbstractVerifier::verify(JString arg0, javax::net::ssl::SSLSocket arg1) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/lang/String;Ljavax/net/ssl/SSLSocket;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void AbstractVerifier::verify(JString arg0, JArray arg1, JArray arg2, jboolean arg3) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object<jarray>(),
			arg3
		);
	}
} // namespace org::apache::http::conn::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::apache::http::conn::ssl;
#endif
