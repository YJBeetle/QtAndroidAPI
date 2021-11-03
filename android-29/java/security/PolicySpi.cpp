#include "./CodeSource.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"
#include "./PolicySpi.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	PolicySpi::PolicySpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PolicySpi::PolicySpi()
		: JObject(
			"java.security.PolicySpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

