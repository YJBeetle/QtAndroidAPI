#include "../../../java/net/Socket.hpp"
#include "./SSLEngine.hpp"
#include "./X509ExtendedTrustManager.hpp"

namespace javax::net::ssl
{
	// Fields
	
	X509ExtendedTrustManager::X509ExtendedTrustManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	X509ExtendedTrustManager::X509ExtendedTrustManager()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.X509ExtendedTrustManager",
			"()V"
		);
	}
	
	// Methods
	void X509ExtendedTrustManager::checkClientTrusted(jarray arg0, jstring arg1, java::net::Socket arg2)
	{
		__thiz.callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkClientTrusted(jarray arg0, const QString &arg1, java::net::Socket arg2)
	{
		__thiz.callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkClientTrusted(jarray arg0, jstring arg1, javax::net::ssl::SSLEngine arg2)
	{
		__thiz.callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkClientTrusted(jarray arg0, const QString &arg1, javax::net::ssl::SSLEngine arg2)
	{
		__thiz.callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(jarray arg0, jstring arg1, java::net::Socket arg2)
	{
		__thiz.callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(jarray arg0, const QString &arg1, java::net::Socket arg2)
	{
		__thiz.callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(jarray arg0, jstring arg1, javax::net::ssl::SSLEngine arg2)
	{
		__thiz.callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(jarray arg0, const QString &arg1, javax::net::ssl::SSLEngine arg2)
	{
		__thiz.callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
} // namespace javax::net::ssl

