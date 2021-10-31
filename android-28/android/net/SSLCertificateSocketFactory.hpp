#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../javax/net/SocketFactory.hpp"
#include "../../javax/net/ssl/SSLSocketFactory.hpp"

namespace android::net
{
	class SSLSessionCache;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class Socket;
}
namespace javax::net
{
	class SocketFactory;
}
namespace javax::net::ssl
{
	class SSLSocketFactory;
}

namespace android::net
{
	class SSLCertificateSocketFactory : public javax::net::ssl::SSLSocketFactory
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLCertificateSocketFactory(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLSocketFactory(className, sig, std::forward<Ts>(agv)...) {}
		SSLCertificateSocketFactory(QAndroidJniObject obj);
		
		// Constructors
		SSLCertificateSocketFactory(jint arg0);
		
		// Methods
		static javax::net::SocketFactory getDefault(jint arg0);
		static javax::net::ssl::SSLSocketFactory getDefault(jint arg0, android::net::SSLSessionCache arg1);
		static javax::net::ssl::SSLSocketFactory getInsecure(jint arg0, android::net::SSLSessionCache arg1);
		java::net::Socket createSocket();
		java::net::Socket createSocket(jstring arg0, jint arg1);
		java::net::Socket createSocket(java::net::InetAddress arg0, jint arg1);
		java::net::Socket createSocket(jstring arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
		java::net::Socket createSocket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
		java::net::Socket createSocket(java::net::Socket arg0, jstring arg1, jint arg2, jboolean arg3);
		jarray getDefaultCipherSuites();
		jbyteArray getNpnSelectedProtocol(java::net::Socket arg0);
		jarray getSupportedCipherSuites();
		void setHostname(java::net::Socket arg0, jstring arg1);
		void setKeyManagers(jarray arg0);
		void setNpnProtocols(jarray arg0);
		void setTrustManagers(jarray arg0);
		void setUseSessionTickets(java::net::Socket arg0, jboolean arg1);
	};
} // namespace android::net

