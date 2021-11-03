#pragma once

#include "../../../../../JObject.hpp"

class JString;
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class Socket;
}
namespace java::security
{
	class KeyStore;
}
namespace java::security
{
	class SecureRandom;
}

namespace org::apache::http::conn::ssl
{
	class SSLSocketFactory : public JObject
	{
	public:
		// Fields
		static JObject ALLOW_ALL_HOSTNAME_VERIFIER();
		static JObject BROWSER_COMPATIBLE_HOSTNAME_VERIFIER();
		static JString SSL();
		static JString SSLV2();
		static JObject STRICT_HOSTNAME_VERIFIER();
		static JString TLS();
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLSocketFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLSocketFactory(QJniObject obj);
		
		// Constructors
		SSLSocketFactory(java::security::KeyStore arg0);
		SSLSocketFactory(java::security::KeyStore arg0, JString arg1);
		SSLSocketFactory(java::security::KeyStore arg0, JString arg1, java::security::KeyStore arg2);
		SSLSocketFactory(JString arg0, java::security::KeyStore arg1, JString arg2, java::security::KeyStore arg3, java::security::SecureRandom arg4, JObject arg5);
		
		// Methods
		static org::apache::http::conn::ssl::SSLSocketFactory getSocketFactory();
		java::net::Socket connectSocket(java::net::Socket arg0, JString arg1, jint arg2, java::net::InetAddress arg3, jint arg4, JObject arg5);
		java::net::Socket createSocket();
		java::net::Socket createSocket(java::net::Socket arg0, JString arg1, jint arg2, jboolean arg3);
		JObject getHostnameVerifier();
		jboolean isSecure(java::net::Socket arg0);
		void setHostnameVerifier(JObject arg0);
	};
} // namespace org::apache::http::conn::ssl

