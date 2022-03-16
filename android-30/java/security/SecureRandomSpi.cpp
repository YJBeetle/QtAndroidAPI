#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./SecureRandomSpi.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	SecureRandomSpi::SecureRandomSpi()
		: JObject(
			"java.security.SecureRandomSpi",
			"()V"
		) {}
	
	// Methods
	JString SecureRandomSpi::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

