#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./SecureRandomSpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	SecureRandomSpi::SecureRandomSpi(QAndroidJniObject obj) : JObject(obj) {}
	
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

