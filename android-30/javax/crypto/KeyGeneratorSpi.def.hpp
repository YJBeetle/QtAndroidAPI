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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyGeneratorSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyGeneratorSpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		KeyGeneratorSpi();
		
		// Methods
	};
} // namespace javax::crypto

