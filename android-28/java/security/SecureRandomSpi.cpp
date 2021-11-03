#include "./SecureRandomSpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	SecureRandomSpi::SecureRandomSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SecureRandomSpi::SecureRandomSpi()
		: JObject(
			"java.security.SecureRandomSpi",
			"()V"
		) {}
	
	// Methods
	jstring SecureRandomSpi::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

