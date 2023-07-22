#pragma once

#include "../../javax/net/ssl/SSLSocketFactory.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLCertificateSocketFactory(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLSocketFactory(className, sig, std::forward<Ts>(agv)...) {}
		SSLCertificateSocketFactory(QAndroidJniObject obj) : javax::net::ssl::SSLSocketFactory(obj) {}
		
		// Constructors
		SSLCertificateSocketFactory(jint arg0);
		
		// Methods
		static javax::net::SocketFactory getDefault(jint arg0);
		static javax::net::ssl::SSLSocketFactory getDefault(jint arg0, android::net::SSLSessionCache arg1);
		static javax::net::ssl::SSLSocketFactory getInsecure(jint arg0, android::net::SSLSessionCache arg1);
		java::net::Socket createSocket() const;
		java::net::Socket createSocket(JString arg0, jint arg1) const;
		java::net::Socket createSocket(java::net::InetAddress arg0, jint arg1) const;
		java::net::Socket createSocket(JString arg0, jint arg1, java::net::InetAddress arg2, jint arg3) const;
		java::net::Socket createSocket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3) const;
		java::net::Socket createSocket(java::net::Socket arg0, JString arg1, jint arg2, jboolean arg3) const;
		JArray getDefaultCipherSuites() const;
		JByteArray getNpnSelectedProtocol(java::net::Socket arg0) const;
		JArray getSupportedCipherSuites() const;
		void setHostname(java::net::Socket arg0, JString arg1) const;
		void setKeyManagers(JArray arg0) const;
		void setNpnProtocols(JArray arg0) const;
		void setTrustManagers(JArray arg0) const;
		void setUseSessionTickets(java::net::Socket arg0, jboolean arg1) const;
	};
} // namespace android::net

