#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SSLSocket.hpp"
#include "./HandshakeCompletedEvent.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	HandshakeCompletedEvent::HandshakeCompletedEvent(javax::net::ssl::SSLSocket arg0, JObject arg1)
		: java::util::EventObject(
			"javax.net.ssl.HandshakeCompletedEvent",
			"(Ljavax/net/ssl/SSLSocket;Ljavax/net/ssl/SSLSession;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	JString HandshakeCompletedEvent::getCipherSuite() const
	{
		return callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		);
	}
	JArray HandshakeCompletedEvent::getLocalCertificates() const
	{
		return callObjectMethod(
			"getLocalCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	JObject HandshakeCompletedEvent::getLocalPrincipal() const
	{
		return callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	JArray HandshakeCompletedEvent::getPeerCertificateChain() const
	{
		return callObjectMethod(
			"getPeerCertificateChain",
			"()[Ljavax/security/cert/X509Certificate;"
		);
	}
	JArray HandshakeCompletedEvent::getPeerCertificates() const
	{
		return callObjectMethod(
			"getPeerCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	JObject HandshakeCompletedEvent::getPeerPrincipal() const
	{
		return callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	JObject HandshakeCompletedEvent::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	javax::net::ssl::SSLSocket HandshakeCompletedEvent::getSocket() const
	{
		return callObjectMethod(
			"getSocket",
			"()Ljavax/net/ssl/SSLSocket;"
		);
	}
} // namespace javax::net::ssl

