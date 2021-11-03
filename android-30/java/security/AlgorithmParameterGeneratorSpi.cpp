#include "./AlgorithmParameters.hpp"
#include "./SecureRandom.hpp"
#include "./AlgorithmParameterGeneratorSpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi()
		: JObject(
			"java.security.AlgorithmParameterGeneratorSpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

