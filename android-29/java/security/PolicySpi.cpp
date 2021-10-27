#include "./CodeSource.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"
#include "./PolicySpi.hpp"

namespace java::security
{
	// Fields
	
	PolicySpi::PolicySpi(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PolicySpi::PolicySpi()
	{
		__thiz = QAndroidJniObject(
			"java.security.PolicySpi",
			"()V"
		);
	}
	
	// Methods
} // namespace java::security

