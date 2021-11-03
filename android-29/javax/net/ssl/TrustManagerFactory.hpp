#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TrustManagerFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrustManagerFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JString getDefaultAlgorithm();
		static javax::net::ssl::TrustManagerFactory getInstance(JString arg0);
		static javax::net::ssl::TrustManagerFactory getInstance(JString arg0, JString arg1);
		static javax::net::ssl::TrustManagerFactory getInstance(JString arg0, java::security::Provider arg1);
		JString getAlgorithm() const;
		java::security::Provider getProvider() const;
		JArray getTrustManagers() const;
		void init(java::security::KeyStore arg0) const;
		void init(JObject arg0) const;
	};
} // namespace javax::net::ssl

