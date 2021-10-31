#include "./FileVisitResult.hpp"

namespace java::nio::file
{
	// Fields
	java::nio::file::FileVisitResult FileVisitResult::CONTINUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"CONTINUE",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	java::nio::file::FileVisitResult FileVisitResult::SKIP_SIBLINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"SKIP_SIBLINGS",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	java::nio::file::FileVisitResult FileVisitResult::SKIP_SUBTREE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"SKIP_SUBTREE",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	java::nio::file::FileVisitResult FileVisitResult::TERMINATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"TERMINATE",
			"Ljava/nio/file/FileVisitResult;"
		);
	}
	
	// QAndroidJniObject forward
	FileVisitResult::FileVisitResult(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::FileVisitResult FileVisitResult::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileVisitResult",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/FileVisitResult;",
			arg0
		);
	}
	jarray FileVisitResult::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileVisitResult",
			"values",
			"()[Ljava/nio/file/FileVisitResult;"
		).object<jarray>();
	}
} // namespace java::nio::file

