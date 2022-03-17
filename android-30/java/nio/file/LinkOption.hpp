#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./LinkOption.def.hpp"

namespace java::nio::file
{
	// Fields
	inline java::nio::file::LinkOption LinkOption::NOFOLLOW_LINKS()
	{
		return getStaticObjectField(
			"java.nio.file.LinkOption",
			"NOFOLLOW_LINKS",
			"Ljava/nio/file/LinkOption;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::nio::file::LinkOption LinkOption::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.LinkOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/LinkOption;",
			arg0.object<jstring>()
		);
	}
	inline JArray LinkOption::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.LinkOption",
			"values",
			"()[Ljava/nio/file/LinkOption;"
		);
	}
} // namespace java::nio::file

// Base class headers
#include "../../lang/Enum.hpp"

