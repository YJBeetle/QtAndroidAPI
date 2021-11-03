#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SSLSocket.hpp"
#include "./HandshakeCompletedEvent.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	HandshakeCompletedEvent::HandshakeCompletedEvent(QAndroidJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	HandshakeCompletedEvent::HandshakeCompletedEvent(javax::net::ssl::SSLSocket arg0, JObject arg1)
		: java::util::EventObject(
			"javax.net.ssl.HandshakeCompletedEvent",
			"(Ljavax/net/ssl/SSLSocket;Ljavax/net/ssl/SSLSession;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JString HandshakeCompletedEvent::getCipherSuite()
	{
		return callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		);
	}
	JArray HandshakeCompletedEvent::getLocalCertificates()
	{
		return callObjectMethod(
			"getLocalCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	JObject HandshakeCompletedEvent::getLocalPrincipal()
	{
		return callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	JArray HandshakeCompletedEvent::getPeerCertificateChain()
	{
		return callObjectMethod(
			"getPeerCertificateChain",
			"()[Ljavax/security/cert/X509Certificate;"
		);
	}
	JArray HandshakeCompletedEvent::getPeerCertificates()
	{
		return callObjectMethod(
			"getPeerCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	JObject HandshakeCompletedEvent::getPeerPrincipal()
	{
		return callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	JObject HandshakeCompletedEvent::getSession()
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	javax::net::ssl::SSLSocket HandshakeCompletedEvent::getSocket()
	{
		return callObjectMethod(
			"getSocket",
			"()Ljavax/net/ssl/SSLSocket;"
		);
	}
} // namespace javax::net::ssl

