#pragma once

#include "../../../JObject.hpp"

class JCharArray;
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
	class KeyManagerFactorySpi;
}

namespace javax::net::ssl
{
	class KeyManagerFactory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyManagerFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyManagerFactory(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getDefaultAlgorithm();
		static javax::net::ssl::KeyManagerFactory getInstance(JString arg0);
		static javax::net::ssl::KeyManagerFactory getInstance(JString arg0, JString arg1);
		static javax::net::ssl::KeyManagerFactory getInstance(JString arg0, java::security::Provider arg1);
		JString getAlgorithm() const;
		JArray getKeyManagers() const;
		java::security::Provider getProvider() const;
		void init(JObject arg0) const;
		void init(java::security::KeyStore arg0, JCharArray arg1) const;
	};
} // namespace javax::net::ssl

