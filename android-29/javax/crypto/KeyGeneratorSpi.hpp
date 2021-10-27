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
		
		KeyGeneratorSpi(QAndroidJniObject obj);
		// Constructors
		KeyGeneratorSpi();
		
		// Methods
	};
} // namespace javax::crypto

