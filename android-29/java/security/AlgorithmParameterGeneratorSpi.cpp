#include "./AlgorithmParameters.hpp"
#include "./SecureRandom.hpp"
#include "./AlgorithmParameterGeneratorSpi.hpp"

namespace java::security
{
	// Fields
	
	AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.AlgorithmParameterGeneratorSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace java::security

