#include "./KeyFactorySpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyFactorySpi::KeyFactorySpi(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyFactorySpi::KeyFactorySpi()
		: __JniBaseClass(
			"java.security.KeyFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

