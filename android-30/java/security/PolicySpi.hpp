#pragma once

#include "./CodeSource.def.hpp"
#include "./Permission.def.hpp"
#include "./PermissionCollection.def.hpp"
#include "./ProtectionDomain.def.hpp"
#include "./PolicySpi.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline PolicySpi::PolicySpi()
		: JObject(
			"java.security.PolicySpi",
			"()V"
		) {}
	
	// Methods
} // namespace java::security

// Base class headers

