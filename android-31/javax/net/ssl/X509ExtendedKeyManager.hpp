#pragma once

#include "../../../JObject.hpp"

namespace javax::net::ssl
{
	class SSLEngine;
}

namespace javax::net::ssl
{
	class X509ExtendedKeyManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit X509ExtendedKeyManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		X509ExtendedKeyManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring chooseEngineClientAlias(jarray arg0, jarray arg1, javax::net::ssl::SSLEngine arg2);
		jstring chooseEngineServerAlias(jstring arg0, jarray arg1, javax::net::ssl::SSLEngine arg2);
	};
} // namespace javax::net::ssl

