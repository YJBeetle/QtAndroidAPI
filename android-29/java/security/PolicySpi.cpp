#include "./CodeSource.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"
#include "./PolicySpi.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	PolicySpi::PolicySpi(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PolicySpi::PolicySpi()
		: JObject(
			"java.security.PolicySpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

