#pragma once

#include "../../../../JString.hpp"
#include "./UserPrincipalLookupService.def.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject UserPrincipalLookupService::lookupPrincipalByGroupName(JString arg0) const
	{
		return callObjectMethod(
			"lookupPrincipalByGroupName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;",
			arg0.object<jstring>()
		);
	}
	inline JObject UserPrincipalLookupService::lookupPrincipalByName(JString arg0) const
	{
		return callObjectMethod(
			"lookupPrincipalByName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;",
			arg0.object<jstring>()
		);
	}
} // namespace java::nio::file::attribute

// Base class headers

