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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLServerSocket(const char *className, const char *sig, Ts...agv) : java::net::ServerSocket(className, sig, std::forward<Ts>(agv)...) {}
		SSLServerSocket(QAndroidJniObject obj) : java::net::ServerSocket(obj) {}
		
		// Constructors
		
		// Methods
		jboolean getEnableSessionCreation() const;
		JArray getEnabledCipherSuites() const;
		JArray getEnabledProtocols() const;
		jboolean getNeedClientAuth() const;
		javax::net::ssl::SSLParameters getSSLParameters() const;
		JArray getSupportedCipherSuites() const;
		JArray getSupportedProtocols() const;
		jboolean getUseClientMode() const;
		jboolean getWantClientAuth() const;
		void setEnableSessionCreation(jboolean arg0) const;
		void setEnabledCipherSuites(JArray arg0) const;
		void setEnabledProtocols(JArray arg0) const;
		void setNeedClientAuth(jboolean arg0) const;
		void setSSLParameters(javax::net::ssl::SSLParameters arg0) const;
		void setUseClientMode(jboolean arg0) const;
		void setWantClientAuth(jboolean arg0) const;
	};
} // namespace javax::net::ssl

