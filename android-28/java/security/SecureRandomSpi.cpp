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
	jstring SecureRandomSpi::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

