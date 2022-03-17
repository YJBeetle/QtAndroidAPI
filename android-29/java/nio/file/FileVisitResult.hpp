#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./FileVisitResult.def.hpp"

namespace java::nio::file
{
	// Fields
	inline java::nio::file::FileVisitResult FileVisitResult::CONTINUE()
	{
		return getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"CONTINUE",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	inline java::nio::file::FileVisitResult FileVisitResult::SKIP_SIBLINGS()
	{
		return getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"SKIP_SIBLINGS",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	inline java::nio::file::FileVisitResult FileVisitResult::SKIP_SUBTREE()
	{
		return getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"SKIP_SUBTREE",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	inline java::nio::file::FileVisitResult FileVisitResult::TERMINATE()
	{
		return getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"TERMINATE",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::nio::file::FileVisitResult FileVisitResult::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.FileVisitResult",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/FileVisitResult;",
			arg0.object<jstring>()
		);
	}
	inline JArray FileVisitResult::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.FileVisitResult",
			"values",
			"()[Ljava/nio/file/FileVisitResult;"
		);
	}
} // namespace java::nio::file

// Base class headers
#include "../../lang/Enum.hpp"

