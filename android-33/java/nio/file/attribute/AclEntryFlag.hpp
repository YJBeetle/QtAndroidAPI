#pragma once

#include "../../../../JArray.hpp"
#include "../../../../JString.hpp"
#include "./AclEntryFlag.def.hpp"

namespace java::nio::file::attribute
{
	// Fields
	inline java::nio::file::attribute::AclEntryFlag AclEntryFlag::DIRECTORY_INHERIT()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"DIRECTORY_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	inline java::nio::file::attribute::AclEntryFlag AclEntryFlag::FILE_INHERIT()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"FILE_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	inline java::nio::file::attribute::AclEntryFlag AclEntryFlag::INHERIT_ONLY()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"INHERIT_ONLY",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	inline java::nio::file::attribute::AclEntryFlag AclEntryFlag::NO_PROPAGATE_INHERIT()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"NO_PROPAGATE_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::nio::file::attribute::AclEntryFlag AclEntryFlag::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryFlag",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryFlag;",
			arg0.object<jstring>()
		);
	}
	inline JArray AclEntryFlag::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryFlag",
			"values",
			"()[Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
} // namespace java::nio::file::attribute

// Base class headers
#include "../../../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file::attribute;
#endif
