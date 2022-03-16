#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class SecureRandom;
}

namespace javax::crypto
{
	class KeyGeneratorSpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyGeneratorSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyGeneratorSpi(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		KeyGeneratorSpi();
		
		// Methods
	};
} // namespace javax::crypto

