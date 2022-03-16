#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SSLSocket.def.hpp"
#include "./HandshakeCompletedEvent.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline HandshakeCompletedEvent::HandshakeCompletedEvent(javax::net::ssl::SSLSocket arg0, JObject arg1)
		: java::util::EventObject(
			"javax.net.ssl.HandshakeCompletedEvent",
			"(Ljavax/net/ssl/SSLSocket;Ljavax/net/ssl/SSLSession;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JString HandshakeCompletedEvent::getCipherSuite() const
	{
		return callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		);
	}
	inline JArray HandshakeCompletedEvent::getLocalCertificates() const
	{
		return callObjectMethod(
			"getLocalCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	inline JObject HandshakeCompletedEvent::getLocalPrincipal() const
	{
		return callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	inline JArray HandshakeCompletedEvent::getPeerCertificateChain() const
	{
		return callObjectMethod(
			"getPeerCertificateChain",
			"()[Ljavax/security/cert/X509Certificate;"
		);
	}
	inline JArray HandshakeCompletedEvent::getPeerCertificates() const
	{
		return callObjectMethod(
			"getPeerCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	inline JObject HandshakeCompletedEvent::getPeerPrincipal() const
	{
		return callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	inline JObject HandshakeCompletedEvent::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	inline javax::net::ssl::SSLSocket HandshakeCompletedEvent::getSocket() const
	{
		return callObjectMethod(
			"getSocket",
			"()Ljavax/net/ssl/SSLSocket;"
		);
	}
} // namespace javax::net::ssl

// Base class headers
#include "../../../java/util/EventObject.hpp"

