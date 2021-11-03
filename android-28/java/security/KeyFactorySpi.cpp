#include "./KeyFactorySpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyFactorySpi::KeyFactorySpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyFactorySpi::KeyFactorySpi()
		: JObject(
			"java.security.KeyFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

