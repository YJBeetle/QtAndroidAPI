#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class SecureRandom;
}

namespace javax::crypto
{
	class KeyAgreementSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyAgreementSpi(QAndroidJniObject obj);
		// Constructors
		KeyAgreementSpi();
		
		// Methods
	};
} // namespace javax::crypto

