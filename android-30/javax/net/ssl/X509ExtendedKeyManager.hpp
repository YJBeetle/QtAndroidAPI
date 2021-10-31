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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit X509ExtendedKeyManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		X509ExtendedKeyManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring chooseEngineClientAlias(jarray arg0, jarray arg1, javax::net::ssl::SSLEngine arg2);
		jstring chooseEngineServerAlias(jstring arg0, jarray arg1, javax::net::ssl::SSLEngine arg2);
	};
} // namespace javax::net::ssl

