#include "../../../../../java/net/InetAddress.hpp"
#include "../../../../../java/net/Socket.hpp"
#include "../../../../../java/security/KeyStore.hpp"
#include "../../../../../java/security/SecureRandom.hpp"
#include "./SSLSocketFactory.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	__JniBaseClass SSLSocketFactory::ALLOW_ALL_HOSTNAME_VERIFIER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"ALLOW_ALL_HOSTNAME_VERIFIER",
			"Lorg/apache/http/conn/ssl/X509HostnameVerifier;"
		);
	}
	__JniBaseClass SSLSocketFactory::BROWSER_COMPATIBLE_HOSTNAME_VERIFIER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"BROWSER_COMPATIBLE_HOSTNAME_VERIFIER",
			"Lorg/apache/http/conn/ssl/X509HostnameVerifier;"
		);
	}
	jstring SSLSocketFactory::SSL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"SSL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SSLSocketFactory::SSLV2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"SSLV2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass SSLSocketFactory::STRICT_HOSTNAME_VERIFIER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"STRICT_HOSTNAME_VERIFIER",
			"Lorg/apache/http/conn/ssl/X509HostnameVerifier;"
		);
	}
	jstring SSLSocketFactory::TLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"TLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	SSLSocketFactory::SSLSocketFactory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SSLSocketFactory::SSLSocketFactory(java::security::KeyStore arg0)
		: __JniBaseClass(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;)V",
			arg0.object()
		) {}
	SSLSocketFactory::SSLSocketFactory(java::security::KeyStore arg0, jstring arg1)
		: __JniBaseClass(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	SSLSocketFactory::SSLSocketFactory(java::security::KeyStore arg0, jstring arg1, java::security::KeyStore arg2)
		: __JniBaseClass(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;Ljava/lang/String;Ljava/security/KeyStore;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	SSLSocketFactory::SSLSocketFactory(jstring arg0, java::security::KeyStore arg1, jstring arg2, java::security::KeyStore arg3, java::security::SecureRandom arg4, __JniBaseClass arg5)
		: __JniBaseClass(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/lang/String;Ljava/security/KeyStore;Ljava/lang/String;Ljava/security/KeyStore;Ljava/security/SecureRandom;Lorg/apache/http/conn/scheme/HostNameResolver;)V",
			arg0,
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	org::apache::http::conn::ssl::SSLSocketFactory SSLSocketFactory::getSocketFactory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"getSocketFactory",
			"()Lorg/apache/http/conn/ssl/SSLSocketFactory;"
		);
	}
	java::net::Socket SSLSocketFactory::connectSocket(java::net::Socket arg0, jstring arg1, jint arg2, java::net::InetAddress arg3, jint arg4, __JniBaseClass arg5)
	{
		return callObjectMethod(
			"connectSocket",
			"(Ljava/net/Socket;Ljava/lang/String;ILjava/net/InetAddress;ILorg/apache/http/params/HttpParams;)Ljava/net/Socket;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5.object()
		);
	}
	java::net::Socket SSLSocketFactory::createSocket()
	{
		return callObjectMethod(
			"createSocket",
			"()Ljava/net/Socket;"
		);
	}
	java::net::Socket SSLSocketFactory::createSocket(java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3)
	{
		return callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	__JniBaseClass SSLSocketFactory::getHostnameVerifier()
	{
		return callObjectMethod(
			"getHostnameVerifier",
			"()Lorg/apache/http/conn/ssl/X509HostnameVerifier;"
		);
	}
	jboolean SSLSocketFactory::isSecure(java::net::Socket arg0)
	{
		return callMethod<jboolean>(
			"isSecure",
			"(Ljava/net/Socket;)Z",
			arg0.object()
		);
	}
	void SSLSocketFactory::setHostnameVerifier(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setHostnameVerifier",
			"(Lorg/apache/http/conn/ssl/X509HostnameVerifier;)V",
			arg0.object()
		);
	}
} // namespace org::apache::http::conn::ssl

