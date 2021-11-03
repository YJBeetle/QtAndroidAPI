#include "./KeyFactorySpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyFactorySpi::KeyFactorySpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyFactorySpi::KeyFactorySpi()
		: JObject(
			"java.security.KeyFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

