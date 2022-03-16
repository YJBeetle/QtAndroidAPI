#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./KeyRep_Type.def.hpp"

namespace java::security
{
	// Fields
	inline java::security::KeyRep_Type KeyRep_Type::PRIVATE()
	{
		return getStaticObjectField(
			"java.security.KeyRep$Type",
			"PRIVATE",
			"Ljava/security/KeyRep$Type;"
		);
	}
	inline java::security::KeyRep_Type KeyRep_Type::PUBLIC()
	{
		return getStaticObjectField(
			"java.security.KeyRep$Type",
			"PUBLIC",
			"Ljava/security/KeyRep$Type;"
		);
	}
	inline java::security::KeyRep_Type KeyRep_Type::SECRET()
	{
		return getStaticObjectField(
			"java.security.KeyRep$Type",
			"SECRET",
			"Ljava/security/KeyRep$Type;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::security::KeyRep_Type KeyRep_Type::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.KeyRep$Type",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/KeyRep$Type;",
			arg0.object<jstring>()
		);
	}
	inline JArray KeyRep_Type::values()
	{
		return callStaticObjectMethod(
			"java.security.KeyRep$Type",
			"values",
			"()[Ljava/security/KeyRep$Type;"
		);
	}
} // namespace java::security

// Base class headers
#include "../lang/Enum.hpp"

