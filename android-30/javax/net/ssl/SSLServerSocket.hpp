#pragma once

#include "../../../java/net/ServerSocket.hpp"

class JArray;
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
	class SSLServerSocket : public java::net::ServerSocket
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLServerSocket(const char *className, const char *sig, Ts...agv) : java::net::ServerSocket(className, sig, std::forward<Ts>(agv)...) {}
		SSLServerSocket(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean getEnableSessionCreation();
		JArray getEnabledCipherSuites();
		JArray getEnabledProtocols();
		jboolean getNeedClientAuth();
		javax::net::ssl::SSLParameters getSSLParameters();
		JArray getSupportedCipherSuites();
		JArray getSupportedProtocols();
		jboolean getUseClientMode();
		jboolean getWantClientAuth();
		void setEnableSessionCreation(jboolean arg0);
		void setEnabledCipherSuites(JArray arg0);
		void setEnabledProtocols(JArray arg0);
		void setNeedClientAuth(jboolean arg0);
		void setSSLParameters(javax::net::ssl::SSLParameters arg0);
		void setUseClientMode(jboolean arg0);
		void setWantClientAuth(jboolean arg0);
	};
} // namespace javax::net::ssl

