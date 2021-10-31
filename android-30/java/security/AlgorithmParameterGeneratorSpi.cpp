#include "./AlgorithmParameters.hpp"
#include "./SecureRandom.hpp"
#include "./AlgorithmParameterGeneratorSpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi()
		: __JniBaseClass(
			"java.security.AlgorithmParameterGeneratorSpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

