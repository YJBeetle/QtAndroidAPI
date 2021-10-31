#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/net/Socket.hpp"

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
		SSLSocket(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addHandshakeCompletedListener(__JniBaseClass arg0);
		jstring getApplicationProtocol();
		jboolean getEnableSessionCreation();
		jarray getEnabledCipherSuites();
		jarray getEnabledProtocols();
		jstring getHandshakeApplicationProtocol();
		QAndroidJniObject getHandshakeApplicationProtocolSelector();
		QAndroidJniObject getHandshakeSession();
		jboolean getNeedClientAuth();
		QAndroidJniObject getSSLParameters();
		QAndroidJniObject getSession();
		jarray getSupportedCipherSuites();
		jarray getSupportedProtocols();
		jboolean getUseClientMode();
		jboolean getWantClientAuth();
		void removeHandshakeCompletedListener(__JniBaseClass arg0);
		void setEnableSessionCreation(jboolean arg0);
		void setEnabledCipherSuites(jarray arg0);
		void setEnabledProtocols(jarray arg0);
		void setHandshakeApplicationProtocolSelector(__JniBaseClass arg0);
		void setNeedClientAuth(jboolean arg0);
		void setSSLParameters(javax::net::ssl::SSLParameters arg0);
		void setUseClientMode(jboolean arg0);
		void setWantClientAuth(jboolean arg0);
		void startHandshake();
	};
} // namespace javax::net::ssl

