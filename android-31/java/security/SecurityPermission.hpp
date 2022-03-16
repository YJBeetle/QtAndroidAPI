#pragma once

#include "../../JString.hpp"
#include "./SecurityPermission.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline SecurityPermission::SecurityPermission(JString arg0)
		: java::security::BasicPermission(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SecurityPermission::SecurityPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"java.security.SecurityPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security

// Base class headers
#include "./Permission.hpp"
#include "./BasicPermission.hpp"

