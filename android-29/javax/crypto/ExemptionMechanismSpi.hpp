#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class AlgorithmParameters;
}

namespace javax::crypto
{
	class ExemptionMechanismSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		ExemptionMechanismSpi(QAndroidJniObject obj);
		// Constructors
		ExemptionMechanismSpi();
		
		// Methods
	};
} // namespace javax::crypto

