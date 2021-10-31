#include "../../../../../java/net/InetAddress.hpp"
#include "../../../../../java/net/Socket.hpp"
#include "../../../../../java/security/KeyStore.hpp"
#include "../../../../../java/security/SecureRandom.hpp"
#include "./SSLSocketFactory.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	QAndroidJniObject SSLSocketFactory::ALLOW_ALL_HOSTNAME_VERIFIER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"ALLOW_ALL_HOSTNAME_VERIFIER",
			"Lorg/apache/http/conn/ssl/X509HostnameVerifier;"
		);
	}
	QAndroidJniObject SSLSocketFactory::BROWSER_COMPATIBLE_HOSTNAME_VERIFIER()
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
	QAndroidJniObject SSLSocketFactory::STRICT_HOSTNAME_VERIFIER()
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
	
	SSLSocketFactory::SSLSocketFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLSocketFactory::SSLSocketFactory(java::security::KeyStore arg0)
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;)V",
			arg0.__jniObject().object()
		);
	}
	SSLSocketFactory::SSLSocketFactory(java::security::KeyStore arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	SSLSocketFactory::SSLSocketFactory(java::security::KeyStore arg0, jstring arg1, java::security::KeyStore arg2)
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/security/KeyStore;Ljava/lang/String;Ljava/security/KeyStore;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	SSLSocketFactory::SSLSocketFactory(jstring arg0, java::security::KeyStore arg1, jstring arg2, java::security::KeyStore arg3, java::security::SecureRandom arg4, __JniBaseClass arg5)
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"(Ljava/lang/String;Ljava/security/KeyStore;Ljava/lang/String;Ljava/security/KeyStore;Ljava/security/SecureRandom;Lorg/apache/http/conn/scheme/HostNameResolver;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject SSLSocketFactory::getSocketFactory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.apache.http.conn.ssl.SSLSocketFactory",
			"getSocketFactory",
			"()Lorg/apache/http/conn/ssl/SSLSocketFactory;"
		);
	}
	QAndroidJniObject SSLSocketFactory::connectSocket(java::net::Socket arg0, jstring arg1, jint arg2, java::net::InetAddress arg3, jint arg4, __JniBaseClass arg5)
	{
		return __thiz.callObjectMethod(
			"connectSocket",
			"(Ljava/net/Socket;Ljava/lang/String;ILjava/net/InetAddress;ILorg/apache/http/params/HttpParams;)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject SSLSocketFactory::createSocket()
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"()Ljava/net/Socket;"
		);
	}
	QAndroidJniObject SSLSocketFactory::createSocket(java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"createSocket",
			"(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject SSLSocketFactory::getHostnameVerifier()
	{
		return __thiz.callObjectMethod(
			"getHostnameVerifier",
			"()Lorg/apache/http/conn/ssl/X509HostnameVerifier;"
		);
	}
	jboolean SSLSocketFactory::isSecure(java::net::Socket arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSecure",
			"(Ljava/net/Socket;)Z",
			arg0.__jniObject().object()
		);
	}
	void SSLSocketFactory::setHostnameVerifier(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setHostnameVerifier",
			"(Lorg/apache/http/conn/ssl/X509HostnameVerifier;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace org::apache::http::conn::ssl

