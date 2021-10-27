#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class KeyPair;
}
namespace java::security
{
	class SecureRandom;
}

namespace java::security
{
	class KeyPairGeneratorSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyPairGeneratorSpi(QAndroidJniObject obj);
		// Constructors
		KeyPairGeneratorSpi();
		
		// Methods
		QAndroidJniObject generateKeyPair();
		void initialize(jint arg0, java::security::SecureRandom arg1);
		void initialize(__JniBaseClass arg0, java::security::SecureRandom arg1);
	};
} // namespace java::security

