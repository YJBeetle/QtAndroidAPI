#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./AccessMode.def.hpp"

namespace java::nio::file
{
	// Fields
	inline java::nio::file::AccessMode AccessMode::EXECUTE()
	{
		return getStaticObjectField(
			"java.nio.file.AccessMode",
			"EXECUTE",
			"Ljava/nio/file/AccessMode;"
		);
	}
	inline java::nio::file::AccessMode AccessMode::READ()
	{
		return getStaticObjectField(
			"java.nio.file.AccessMode",
			"READ",
			"Ljava/nio/file/AccessMode;"
		);
	}
	inline java::nio::file::AccessMode AccessMode::WRITE()
	{
		return getStaticObjectField(
			"java.nio.file.AccessMode",
			"WRITE",
			"Ljava/nio/file/AccessMode;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::nio::file::AccessMode AccessMode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.AccessMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/AccessMode;",
			arg0.object<jstring>()
		);
	}
	inline JArray AccessMode::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.AccessMode",
			"values",
			"()[Ljava/nio/file/AccessMode;"
		);
	}
} // namespace java::nio::file

// Base class headers
#include "../../lang/Enum.hpp"

