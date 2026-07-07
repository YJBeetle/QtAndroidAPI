#pragma once

#include "../../../../JArray.hpp"
#include "../../../../JString.hpp"
#include "./PosixFilePermission.def.hpp"

namespace java::nio::file::attribute
{
	// Fields
	inline java::nio::file::attribute::PosixFilePermission PosixFilePermission::GROUP_EXECUTE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	inline java::nio::file::attribute::PosixFilePermission PosixFilePermission::GROUP_READ()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	inline java::nio::file::attribute::PosixFilePermission PosixFilePermission::GROUP_WRITE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	inline java::nio::file::attribute::PosixFilePermission PosixFilePermission::OTHERS_EXECUTE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	inline java::nio::file::attribute::PosixFilePermission PosixFilePermission::OTHERS_READ()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	inline java::nio::file::attribute::PosixFilePermission PosixFilePermission::OTHERS_WRITE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	inline java::nio::file::attribute::PosixFilePermission PosixFilePermission::OWNER_EXECUTE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	inline java::nio::file::attribute::PosixFilePermission PosixFilePermission::OWNER_READ()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	inline java::nio::file::attribute::PosixFilePermission PosixFilePermission::OWNER_WRITE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::nio::file::attribute::PosixFilePermission PosixFilePermission::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermission",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/PosixFilePermission;",
			arg0.object<jstring>()
		);
	}
	inline JArray PosixFilePermission::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermission",
			"values",
			"()[Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
} // namespace java::nio::file::attribute

// Base class headers
#include "../../../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file::attribute;
#endif
