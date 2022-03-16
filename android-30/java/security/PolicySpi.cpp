#include "./CodeSource.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"
#include "./PolicySpi.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	PolicySpi::PolicySpi()
		: JObject(
			"java.security.PolicySpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

