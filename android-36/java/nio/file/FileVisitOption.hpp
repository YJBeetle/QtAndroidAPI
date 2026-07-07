#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./FileVisitOption.def.hpp"

namespace java::nio::file
{
	// Fields
	inline java::nio::file::FileVisitOption FileVisitOption::FOLLOW_LINKS()
	{
		return getStaticObjectField(
			"java.nio.file.FileVisitOption",
			"FOLLOW_LINKS",
			"Ljava/nio/file/FileVisitOption;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::nio::file::FileVisitOption FileVisitOption::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.FileVisitOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/FileVisitOption;",
			arg0.object<jstring>()
		);
	}
	inline JArray FileVisitOption::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.FileVisitOption",
			"values",
			"()[Ljava/nio/file/FileVisitOption;"
		);
	}
} // namespace java::nio::file

// Base class headers
#include "../../lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif
