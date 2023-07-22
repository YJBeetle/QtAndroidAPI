#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
class JString;
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
		X509ExtendedKeyManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString chooseEngineClientAlias(JArray arg0, JArray arg1, javax::net::ssl::SSLEngine arg2) const;
		JString chooseEngineServerAlias(JString arg0, JArray arg1, javax::net::ssl::SSLEngine arg2) const;
	};
} // namespace javax::net::ssl

