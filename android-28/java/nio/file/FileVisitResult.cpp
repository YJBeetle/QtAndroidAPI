#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./FileVisitResult.hpp"

namespace java::nio::file
{
	// Fields
	java::nio::file::FileVisitResult FileVisitResult::CONTINUE()
	{
		return getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"CONTINUE",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	java::nio::file::FileVisitResult FileVisitResult::SKIP_SIBLINGS()
	{
		return getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"SKIP_SIBLINGS",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	java::nio::file::FileVisitResult FileVisitResult::SKIP_SUBTREE()
	{
		return getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"SKIP_SUBTREE",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	java::nio::file::FileVisitResult FileVisitResult::TERMINATE()
	{
		return getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"TERMINATE",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	
	// QAndroidJniObject forward
	FileVisitResult::FileVisitResult(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::FileVisitResult FileVisitResult::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.FileVisitResult",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/FileVisitResult;",
			arg0.object<jstring>()
		);
	}
	JArray FileVisitResult::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.FileVisitResult",
			"values",
			"()[Ljava/nio/file/FileVisitResult;"
		);
	}
} // namespace java::nio::file

