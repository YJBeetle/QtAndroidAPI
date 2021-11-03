#pragma once

#include "../../../JObject.hpp"

namespace java::security
{
	class KeyStore;
}
namespace java::security
{
	class Provider;
}
namespace javax::net::ssl
{
	class TrustManagerFactorySpi;
}

namespace javax::net::ssl
{
	class TrustManagerFactory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TrustManagerFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrustManagerFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getDefaultAlgorithm();
		static javax::net::ssl::TrustManagerFactory getInstance(jstring arg0);
		static javax::net::ssl::TrustManagerFactory getInstance(jstring arg0, jstring arg1);
		static javax::net::ssl::TrustManagerFactory getInstance(jstring arg0, java::security::Provider arg1);
		jstring getAlgorithm();
		java::security::Provider getProvider();
		jarray getTrustManagers();
		void init(java::security::KeyStore arg0);
		void init(JObject arg0);
	};
} // namespace javax::net::ssl

