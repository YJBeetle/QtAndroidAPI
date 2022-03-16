#pragma once

#include "../../../../JArray.hpp"
#include "../../../../JString.hpp"
#include "./AclEntryType.def.hpp"

namespace java::nio::file::attribute
{
	// Fields
	inline java::nio::file::attribute::AclEntryType AclEntryType::ALARM()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"ALARM",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	inline java::nio::file::attribute::AclEntryType AclEntryType::ALLOW()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"ALLOW",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	inline java::nio::file::attribute::AclEntryType AclEntryType::AUDIT()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"AUDIT",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	inline java::nio::file::attribute::AclEntryType AclEntryType::DENY()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"DENY",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::nio::file::attribute::AclEntryType AclEntryType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryType;",
			arg0.object<jstring>()
		);
	}
	inline JArray AclEntryType::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryType",
			"values",
			"()[Ljava/nio/file/attribute/AclEntryType;"
		);
	}
} // namespace java::nio::file::attribute

// Base class headers
#include "../../../lang/Enum.hpp"

