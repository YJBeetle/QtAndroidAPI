#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./FileVisitOption.hpp"

namespace java::nio::file
{
	// Fields
	java::nio::file::FileVisitOption FileVisitOption::FOLLOW_LINKS()
	{
		return getStaticObjectField(
			"java.nio.file.FileVisitOption",
			"FOLLOW_LINKS",
			"Ljava/nio/file/FileVisitOption;"
		);
	}
	
	// Constructors
	
	// Methods
	java::nio::file::FileVisitOption FileVisitOption::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.FileVisitOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/FileVisitOption;",
			arg0.object<jstring>()
		);
	}
	JArray FileVisitOption::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.FileVisitOption",
			"values",
			"()[Ljava/nio/file/FileVisitOption;"
		);
	}
} // namespace java::nio::file

