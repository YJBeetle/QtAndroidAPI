#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/Socket.hpp"
#include "./SSLEngine.hpp"
#include "./X509ExtendedTrustManager.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	X509ExtendedTrustManager::X509ExtendedTrustManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	X509ExtendedTrustManager::X509ExtendedTrustManager()
		: JObject(
			"javax.net.ssl.X509ExtendedTrustManager",
			"()V"
		) {}
	
	// Methods
	void X509ExtendedTrustManager::checkClientTrusted(JArray arg0, JString arg1, java::net::Socket arg2) const
	{
		callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void X509ExtendedTrustManager::checkClientTrusted(JArray arg0, JString arg1, javax::net::ssl::SSLEngine arg2) const
	{
		callMethod<void>(
			"checkClientTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(JArray arg0, JString arg1, java::net::Socket arg2) const
	{
		callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void X509ExtendedTrustManager::checkServerTrusted(JArray arg0, JString arg1, javax::net::ssl::SSLEngine arg2) const
	{
		callMethod<void>(
			"checkServerTrusted",
			"([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
} // namespace javax::net::ssl

