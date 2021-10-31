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
		
		KeyManagerFactory(QAndroidJniObject obj);
		// Constructors
		KeyManagerFactory() = default;
		
		// Methods
		static jstring getDefaultAlgorithm();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		jstring getAlgorithm();
		jarray getKeyManagers();
		QAndroidJniObject getProvider();
		void init(__JniBaseClass arg0);
		void init(java::security::KeyStore arg0, jcharArray arg1);
	};
} // namespace javax::net::ssl

