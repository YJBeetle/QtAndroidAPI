#include "./KeyFactorySpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyFactorySpi::KeyFactorySpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyFactorySpi::KeyFactorySpi()
		: __JniBaseClass(
			"java.security.KeyFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

