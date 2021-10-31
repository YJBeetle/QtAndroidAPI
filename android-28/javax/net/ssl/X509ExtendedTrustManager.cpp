#include "../../../java/net/Socket.hpp"
#include "./SSLEngine.hpp"
#include "./X509ExtendedTrustManager.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	X509ExtendedTrustManager::X509ExtendedTrustManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	X509ExtendedTrustManager::X509ExtendedTrustManager()
		: __JniBaseClass(
			"javax.net.ssl.X509ExtendedTrustManager",
			"()V"
		) {}
	
	// Methods
	void X509ExtendedTrustManager::checkClientTrusted(jarray arg0, jstring arg1, java::net::Socket arg2)
	{
		callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void X509ExtendedTrustManager::checkClientTrusted(jarray arg0, jstring arg1, javax::net::ssl::SSLEngine arg2)
	{
		callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(jarray arg0, jstring arg1, java::net::Socket arg2)
	{
		callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(jarray arg0, jstring arg1, javax::net::ssl::SSLEngine arg2)
	{
		callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace javax::net::ssl

