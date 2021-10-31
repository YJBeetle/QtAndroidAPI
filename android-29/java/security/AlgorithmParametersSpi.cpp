#include "./AlgorithmParametersSpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	AlgorithmParametersSpi::AlgorithmParametersSpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AlgorithmParametersSpi::AlgorithmParametersSpi()
		: __JniBaseClass(
			"java.security.AlgorithmParametersSpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

