#include "./AlgorithmParameters.hpp"
#include "./SecureRandom.hpp"
#include "./AlgorithmParameterGeneratorSpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi()
		: JObject(
			"java.security.AlgorithmParameterGeneratorSpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

