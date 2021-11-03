#pragma once

#include "../../../JObject.hpp"

namespace java::security
{
	class KeyStore_Builder;
}

namespace javax::net::ssl
{
	class KeyStoreBuilderParameters : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStoreBuilderParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreBuilderParameters(QJniObject obj);
		
		// Constructors
		KeyStoreBuilderParameters(java::security::KeyStore_Builder arg0);
		KeyStoreBuilderParameters(JObject arg0);
		
		// Methods
		JObject getParameters() const;
	};
} // namespace javax::net::ssl

