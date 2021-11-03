#pragma once

#include "../../../JObject.hpp"
#include "../../../java/net/ServerSocket.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLServerSocket(const char *className, const char *sig, Ts...agv) : java::net::ServerSocket(className, sig, std::forward<Ts>(agv)...) {}
		SSLServerSocket(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean getEnableSessionCreation();
		jarray getEnabledCipherSuites();
		jarray getEnabledProtocols();
		jboolean getNeedClientAuth();
		javax::net::ssl::SSLParameters getSSLParameters();
		jarray getSupportedCipherSuites();
		jarray getSupportedProtocols();
		jboolean getUseClientMode();
		jboolean getWantClientAuth();
		void setEnableSessionCreation(jboolean arg0);
		void setEnabledCipherSuites(jarray arg0);
		void setEnabledProtocols(jarray arg0);
		void setNeedClientAuth(jboolean arg0);
		void setSSLParameters(javax::net::ssl::SSLParameters arg0);
		void setUseClientMode(jboolean arg0);
		void setWantClientAuth(jboolean arg0);
	};
} // namespace javax::net::ssl

