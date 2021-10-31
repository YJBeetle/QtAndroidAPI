#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class KeyManagerFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyManagerFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyManagerFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getDefaultAlgorithm();
		static javax::net::ssl::KeyManagerFactory getInstance(jstring arg0);
		static javax::net::ssl::KeyManagerFactory getInstance(jstring arg0, jstring arg1);
		static javax::net::ssl::KeyManagerFactory getInstance(jstring arg0, java::security::Provider arg1);
		jstring getAlgorithm();
		jarray getKeyManagers();
		java::security::Provider getProvider();
		void init(__JniBaseClass arg0);
		void init(java::security::KeyStore arg0, jcharArray arg1);
	};
} // namespace javax::net::ssl

