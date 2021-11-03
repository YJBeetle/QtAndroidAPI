#pragma once

#include "../../javax/net/ssl/SSLSocketFactory.hpp"

class JByteArray;
class JArray;
class JArray;
class JArray;
class JArray;
namespace android::net
{
	class SSLSessionCache;
}
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLCertificateSocketFactory(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLSocketFactory(className, sig, std::forward<Ts>(agv)...) {}
		SSLCertificateSocketFactory(QJniObject obj);
		
		// Constructors
		SSLCertificateSocketFactory(jint arg0);
		
		// Methods
		static javax::net::SocketFactory getDefault(jint arg0);
		static javax::net::ssl::SSLSocketFactory getDefault(jint arg0, android::net::SSLSessionCache arg1);
		static javax::net::ssl::SSLSocketFactory getInsecure(jint arg0, android::net::SSLSessionCache arg1);
		java::net::Socket createSocket();
		java::net::Socket createSocket(JString arg0, jint arg1);
		java::net::Socket createSocket(java::net::InetAddress arg0, jint arg1);
		java::net::Socket createSocket(JString arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
		java::net::Socket createSocket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
		java::net::Socket createSocket(java::net::Socket arg0, JString arg1, jint arg2, jboolean arg3);
		JArray getDefaultCipherSuites();
		JByteArray getNpnSelectedProtocol(java::net::Socket arg0);
		JArray getSupportedCipherSuites();
		void setHostname(java::net::Socket arg0, JString arg1);
		void setKeyManagers(JArray arg0);
		void setNpnProtocols(JArray arg0);
		void setTrustManagers(JArray arg0);
		void setUseSessionTickets(java::net::Socket arg0, jboolean arg1);
	};
} // namespace android::net

