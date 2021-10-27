#include "./SecureRandomSpi.hpp"

namespace java::security
{
	// Fields
	
	SecureRandomSpi::SecureRandomSpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SecureRandomSpi::SecureRandomSpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.SecureRandomSpi",
			"()V"
		);
	}
	
	// Methods
	jstring SecureRandomSpi::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

