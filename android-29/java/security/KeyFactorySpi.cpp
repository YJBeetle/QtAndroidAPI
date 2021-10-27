#include "./KeyFactorySpi.hpp"

namespace java::security
{
	// Fields
	
	KeyFactorySpi::KeyFactorySpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyFactorySpi::KeyFactorySpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyFactorySpi",
			"()V"
		);
	}
	
	// Methods
} // namespace java::security

