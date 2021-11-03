#pragma once

#include "../../../JObject.hpp"

namespace java::security
{
	class KeyStore;
}

namespace javax::net::ssl
{
	class TrustManagerFactorySpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TrustManagerFactorySpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrustManagerFactorySpi(QAndroidJniObject obj);
		
		// Constructors
		TrustManagerFactorySpi();
		
		// Methods
	};
} // namespace javax::net::ssl

