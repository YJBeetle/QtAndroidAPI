#include "./AlgorithmParametersSpi.hpp"

namespace java::security
{
	// Fields
	
	AlgorithmParametersSpi::AlgorithmParametersSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AlgorithmParametersSpi::AlgorithmParametersSpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.AlgorithmParametersSpi",
			"()V"
		);
	}
	
	// Methods
} // namespace java::security

