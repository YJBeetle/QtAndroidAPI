#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security
{
	class KeyStore;
}

namespace javax::net::ssl
{
	class KeyManagerFactorySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyManagerFactorySpi(QAndroidJniObject obj);
		// Constructors
		KeyManagerFactorySpi();
		
		// Methods
	};
} // namespace javax::net::ssl

