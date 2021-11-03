#include "../../JByteArray.hpp"
#include "../../JClass.hpp"
#include "../../JString.hpp"
#include "./AlgorithmParametersSpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	AlgorithmParametersSpi::AlgorithmParametersSpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AlgorithmParametersSpi::AlgorithmParametersSpi()
		: JObject(
			"java.security.AlgorithmParametersSpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

