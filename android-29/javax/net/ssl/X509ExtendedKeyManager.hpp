#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::net::ssl
{
	class SSLEngine;
}

namespace javax::net::ssl
{
	class X509ExtendedKeyManager : public __JniBaseClass
	{
	public:
		// Fields
		
		X509ExtendedKeyManager(QAndroidJniObject obj);
		// Constructors
		X509ExtendedKeyManager() = default;
		
		// Methods
		jstring chooseEngineClientAlias(jarray arg0, jarray arg1, javax::net::ssl::SSLEngine arg2);
		jstring chooseEngineServerAlias(jstring arg0, jarray arg1, javax::net::ssl::SSLEngine arg2);
	};
} // namespace javax::net::ssl

