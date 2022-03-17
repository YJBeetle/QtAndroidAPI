#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./StandardCopyOption.def.hpp"

namespace java::nio::file
{
	// Fields
	inline java::nio::file::StandardCopyOption StandardCopyOption::ATOMIC_MOVE()
	{
		return getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"ATOMIC_MOVE",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	inline java::nio::file::StandardCopyOption StandardCopyOption::COPY_ATTRIBUTES()
	{
		return getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"COPY_ATTRIBUTES",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	inline java::nio::file::StandardCopyOption StandardCopyOption::REPLACE_EXISTING()
	{
		return getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"REPLACE_EXISTING",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::nio::file::StandardCopyOption StandardCopyOption::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.StandardCopyOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/StandardCopyOption;",
			arg0.object<jstring>()
		);
	}
	inline JArray StandardCopyOption::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.StandardCopyOption",
			"values",
			"()[Ljava/nio/file/StandardCopyOption;"
		);
	}
} // namespace java::nio::file

// Base class headers
#include "../../lang/Enum.hpp"

