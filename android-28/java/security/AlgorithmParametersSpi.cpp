#include "./AlgorithmParametersSpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	AlgorithmParametersSpi::AlgorithmParametersSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AlgorithmParametersSpi::AlgorithmParametersSpi()
		: JObject(
			"java.security.AlgorithmParametersSpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

