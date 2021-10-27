#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class AlgorithmParameters;
}
namespace java::security
{
	class SecureRandom;
}

namespace java::security
{
	class AlgorithmParameterGeneratorSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		AlgorithmParameterGeneratorSpi(QAndroidJniObject obj);
		// Constructors
		AlgorithmParameterGeneratorSpi();
		
		// Methods
	};
} // namespace java::security

