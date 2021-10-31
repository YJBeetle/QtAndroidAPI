#include "./AlgorithmParametersSpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	AlgorithmParametersSpi::AlgorithmParametersSpi(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AlgorithmParametersSpi::AlgorithmParametersSpi()
		: __JniBaseClass(
			"java.security.AlgorithmParametersSpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

