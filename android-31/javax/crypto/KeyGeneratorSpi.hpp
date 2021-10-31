#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class SecureRandom;
}

namespace javax::crypto
{
	class KeyGeneratorSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyGeneratorSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyGeneratorSpi(QJniObject obj);
		
		// Constructors
		KeyGeneratorSpi();
		
		// Methods
	};
} // namespace javax::crypto

