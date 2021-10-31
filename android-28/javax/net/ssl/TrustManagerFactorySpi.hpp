#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security
{
	class KeyStore;
}

namespace javax::net::ssl
{
	class TrustManagerFactorySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TrustManagerFactorySpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TrustManagerFactorySpi(QJniObject obj);
		
		// Constructors
		TrustManagerFactorySpi();
		
		// Methods
	};
} // namespace javax::net::ssl

