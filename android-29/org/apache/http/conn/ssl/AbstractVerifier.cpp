#include "../../../../../JArray.hpp"
#include "../../../../../JString.hpp"
#include "../../../../../java/security/cert/X509Certificate.hpp"
#include "../../../../../javax/net/ssl/SSLSocket.hpp"
#include "./AbstractVerifier.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractVerifier::AbstractVerifier(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AbstractVerifier::AbstractVerifier()
		: JObject(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"()V"
		) {}
	
	// Methods
	jboolean AbstractVerifier::acceptableCountryWildcard(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"acceptableCountryWildcard",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jint AbstractVerifier::countDots(JString arg0)
	{
		return callStaticMethod<jint>(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"countDots",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JArray AbstractVerifier::getCNs(java::security::cert::X509Certificate arg0)
	{
		return callStaticObjectMethod(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"getCNs",
			"(Ljava/security/cert/X509Certificate;)[Ljava/lang/String;",
			arg0.object()
		);
	}
	JArray AbstractVerifier::getDNSSubjectAlts(java::security::cert::X509Certificate arg0)
	{
		return callStaticObjectMethod(
			"org.apache.http.conn.ssl.AbstractVerifier",
			"getDNSSubjectAlts",
			"(Ljava/security/cert/X509Certificate;)[Ljava/lang/String;",
			arg0.object()
		);
	}
	jboolean AbstractVerifier::verify(JString arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"verify",
			"(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void AbstractVerifier::verify(JString arg0, java::security::cert::X509Certificate arg1)
	{
		callMethod<void>(
			"verify",
			"(Ljava/lang/String;Ljava/security/cert/X509Certificate;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void AbstractVerifier::verify(JString arg0, javax::net::ssl::SSLSocket arg1)
	{
		callMethod<void>(
			"verify",
			"(Ljava/lang/String;Ljavax/net/ssl/SSLSocket;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void AbstractVerifier::verify(JString arg0, JArray arg1, JArray arg2, jboolean arg3)
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

