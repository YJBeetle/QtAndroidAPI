#pragma once

#include "../../../java/net/Socket.hpp"

class JArray;
class JString;
namespace java::net
{
	class InetAddress;
}
namespace javax::net::ssl
{
	class SSLParameters;
}

namespace javax::net::ssl
{
	class SSLSocket : public java::net::Socket
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLSocket(const char *className, const char *sig, Ts...agv) : java::net::Socket(className, sig, std::forward<Ts>(agv)...) {}
		SSLSocket(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addHandshakeCompletedListener(JObject arg0);
		JString getApplicationProtocol();
		jboolean getEnableSessionCreation();
		JArray getEnabledCipherSuites();
		JArray getEnabledProtocols();
		JString getHandshakeApplicationProtocol();
		JObject getHandshakeApplicationProtocolSelector();
		JObject getHandshakeSession();
		jboolean getNeedClientAuth();
		javax::net::ssl::SSLParameters getSSLParameters();
		JObject getSession();
		JArray getSupportedCipherSuites();
		JArray getSupportedProtocols();
		jboolean getUseClientMode();
		jboolean getWantClientAuth();
		void removeHandshakeCompletedListener(JObject arg0);
		void setEnableSessionCreation(jboolean arg0);
		void setEnabledCipherSuites(JArray arg0);
		void setEnabledProtocols(JArray arg0);
		void setHandshakeApplicationProtocolSelector(JObject arg0);
		void setNeedClientAuth(jboolean arg0);
		void setSSLParameters(javax::net::ssl::SSLParameters arg0);
		void setUseClientMode(jboolean arg0);
		void setWantClientAuth(jboolean arg0);
		void startHandshake();
	};
} // namespace javax::net::ssl

