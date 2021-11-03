#pragma once

#include "../../../JObject.hpp"
#include "../../../java/util/EventObject.hpp"

namespace javax::net::ssl
{
	class SSLSocket;
}

namespace javax::net::ssl
{
	class HandshakeCompletedEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HandshakeCompletedEvent(const char *className, const char *sig, Ts...agv) : java::util::EventObject(className, sig, std::forward<Ts>(agv)...) {}
		HandshakeCompletedEvent(QJniObject obj);
		
		// Constructors
		HandshakeCompletedEvent(javax::net::ssl::SSLSocket arg0, JObject arg1);
		
		// Methods
		jstring getCipherSuite();
		jarray getLocalCertificates();
		JObject getLocalPrincipal();
		jarray getPeerCertificateChain();
		jarray getPeerCertificates();
		JObject getPeerPrincipal();
		JObject getSession();
		javax::net::ssl::SSLSocket getSocket();
	};
} // namespace javax::net::ssl

