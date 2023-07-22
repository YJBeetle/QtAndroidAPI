#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
class JString;
namespace java::lang::invoke
{
	class VarHandle;
}
namespace java::security
{
	class Provider;
}
namespace java::security
{
	class SecureRandom;
}
namespace javax::net::ssl
{
	class SSLContextSpi;
}
namespace javax::net::ssl
{
	class SSLEngine;
}
namespace javax::net::ssl
{
	class SSLParameters;
}
namespace javax::net::ssl
{
	class SSLServerSocketFactory;
}
namespace javax::net::ssl
{
	class SSLSocketFactory;
}

namespace javax::net::ssl
{
	class SSLContext : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLContext(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static javax::net::ssl::SSLContext getDefault();
		static javax::net::ssl::SSLContext getInstance(JString arg0);
		static javax::net::ssl::SSLContext getInstance(JString arg0, JString arg1);
		static javax::net::ssl::SSLContext getInstance(JString arg0, java::security::Provider arg1);
		static void setDefault(javax::net::ssl::SSLContext arg0);
		javax::net::ssl::SSLEngine createSSLEngine() const;
		javax::net::ssl::SSLEngine createSSLEngine(JString arg0, jint arg1) const;
		JObject getClientSessionContext() const;
		javax::net::ssl::SSLParameters getDefaultSSLParameters() const;
		JString getProtocol() const;
		java::security::Provider getProvider() const;
		JObject getServerSessionContext() const;
		javax::net::ssl::SSLServerSocketFactory getServerSocketFactory() const;
		javax::net::ssl::SSLSocketFactory getSocketFactory() const;
		javax::net::ssl::SSLParameters getSupportedSSLParameters() const;
		void init(JArray arg0, JArray arg1, java::security::SecureRandom arg2) const;
	};
} // namespace javax::net::ssl

