#include "./SecureRandomSpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	SecureRandomSpi::SecureRandomSpi(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SecureRandomSpi::SecureRandomSpi()
		: __JniBaseClass(
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

