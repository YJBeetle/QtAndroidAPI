#include "../../../../../JString.hpp"
#include "../../../../../java/net/InetAddress.hpp"
#include "../../../../../java/net/Socket.hpp"
#include "../../../../../java/security/KeyStore.hpp"
#include "../../../../../java/security/SecureRandom.hpp"
#include "./SSLSocketFactory.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	JObject SSLSocketFactory::ALLOW_ALL_HOSTNAME_VERIFIER()
	{
		return getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"ALLOW_ALL_HOSTNAME_VERIFIER",
			"Lorg/apache/http/conn/ssl/X509HostnameVerifier;"
		);
	}
	JObject SSLSocketFactory::BROWSER_COMPATIBLE_HOSTNAME_VERIFIER()
	{
		return getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"BROWSER_COMPATIBLE_HOSTNAME_VERIFIER",
			"Lorg/apache/http/conn/ssl/X509HostnameVerifier;"
		);
	}
	JString SSLSocketFactory::SSL()
	{
		return getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"SSL",
			"Ljava/lang/String;"
		);
	}
	JString SSLSocketFactory::SSLV2()
	{
		return getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"SSLV2",
			"Ljava/lang/String;"
		);
	}
	JObject SSLSocketFactory::STRICT_HOSTNAME_VERIFIER()
	{
		return getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"STRICT_HOSTNAME_VERIFIER",
			"Lorg/apache/http/conn/ssl/X509HostnameVerifier;"
		);
	}
	JString SSLSocketFactory::TLS()
	{
		return getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"TLS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	SSLSocketFactory::SSLSocketFactory(java::security::KeyStore arg0)
		: JObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;)V",
			arg0.object()
		) {}
	SSLSocketFactory::SSLSocketFactory(java::security::KeyStore arg0, JString arg1)
		: JObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	SSLSocketFactory::SSLSocketFactory(java::security::KeyStore arg0, JString arg1, java::security::KeyStore arg2)
		: JObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;Ljava/lang/String;Ljava/security/KeyStore;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	SSLSocketFactory::SSLSocketFactory(JString arg0, java::security::KeyStore arg1, JString arg2, java::security::KeyStore arg3, java::security::SecureRandom arg4, JObject arg5)
		: JObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/lang/String;Ljava/security/KeyStore;Ljava/lang/String;Ljava/security/KeyStore;Ljava/security/SecureRandom;Lorg/apache/http/conn/scheme/HostNameResolver;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	org::apache::http::conn::ssl::SSLSocketFactory SSLSocketFactory::getSocketFactory()
	{
		return callStaticObjectMethod(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"getSocketFactory",
			"()Lorg/apache/http/conn/ssl/SSLSocketFactory;"
		);
	}
	java::net::Socket SSLSocketFactory::connectSocket(java::net::Socket arg0, JString arg1, jint arg2, java::net::InetAddress arg3, jint arg4, JObject arg5) const
	{
		return callObjectMethod(
			"connectSocket",
			"(Ljava/net/Socket;Ljava/lang/String;ILjava/net/InetAddress;ILorg/apache/http/params/HttpParams;)Ljava/net/Socket;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3.object(),
			arg4,
			arg5.object()
		);
	}
	java::net::Socket SSLSocketFactory::createSocket() const
	{
		return callObjectMethod(
			"createSocket",
			"()Ljava/net/Socket;"
		);
	}
	java::net::Socket SSLSocketFactory::createSocket(java::net::Socket arg0, JString arg1, jint arg2, jboolean arg3) const
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3
		);
	}
	JObject SSLSocketFactory::getHostnameVerifier() const
	{
		return callObjectMethod(
			"getHostnameVerifier",
			"()Lorg/apache/http/conn/ssl/X509HostnameVerifier;"
		);
	}
	jboolean SSLSocketFactory::isSecure(java::net::Socket arg0) const
	{
		return callMethod<jboolean>(
			"isSecure",
			"(Ljava/net/Socket;)Z",
			arg0.object()
		);
	}
	void SSLSocketFactory::setHostnameVerifier(JObject arg0) const
	{
		callMethod<void>(
			"setHostnameVerifier",
			"(Lorg/apache/http/conn/ssl/X509HostnameVerifier;)V",
			arg0.object()
		);
	}
} // namespace org::apache::http::conn::ssl

