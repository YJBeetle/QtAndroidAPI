#pragma once

#include "../../../java/net/Socket.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLSocket(const char *className, const char *sig, Ts...agv) : java::net::Socket(className, sig, std::forward<Ts>(agv)...) {}
		SSLSocket(QAndroidJniObject obj) : java::net::Socket(obj) {}
		
		// Constructors
		
		// Methods
		void addHandshakeCompletedListener(JObject arg0) const;
		JString getApplicationProtocol() const;
		jboolean getEnableSessionCreation() const;
		JArray getEnabledCipherSuites() const;
		JArray getEnabledProtocols() const;
		JString getHandshakeApplicationProtocol() const;
		JObject getHandshakeApplicationProtocolSelector() const;
		JObject getHandshakeSession() const;
		jboolean getNeedClientAuth() const;
		javax::net::ssl::SSLParameters getSSLParameters() const;
		JObject getSession() const;
		JArray getSupportedCipherSuites() const;
		JArray getSupportedProtocols() const;
		jboolean getUseClientMode() const;
		jboolean getWantClientAuth() const;
		void removeHandshakeCompletedListener(JObject arg0) const;
		void setEnableSessionCreation(jboolean arg0) const;
		void setEnabledCipherSuites(JArray arg0) const;
		void setEnabledProtocols(JArray arg0) const;
		void setHandshakeApplicationProtocolSelector(JObject arg0) const;
		void setNeedClientAuth(jboolean arg0) const;
		void setSSLParameters(javax::net::ssl::SSLParameters arg0) const;
		void setUseClientMode(jboolean arg0) const;
		void setWantClientAuth(jboolean arg0) const;
		void startHandshake() const;
	};
} // namespace javax::net::ssl

