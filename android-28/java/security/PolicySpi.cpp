#include "./CodeSource.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"
#include "./PolicySpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	PolicySpi::PolicySpi(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PolicySpi::PolicySpi()
		: __JniBaseClass(
			"java.security.PolicySpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

