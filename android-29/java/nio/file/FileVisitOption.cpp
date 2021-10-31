#include "./FileVisitOption.hpp"

namespace java::nio::file
{
	// Fields
	java::nio::file::FileVisitOption FileVisitOption::FOLLOW_LINKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.FileVisitOption",
			"FOLLOW_LINKS",
			"Ljava/nio/file/FileVisitOption;"
		);
	}
	
	// QAndroidJniObject forward
	FileVisitOption::FileVisitOption(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::FileVisitOption FileVisitOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileVisitOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/FileVisitOption;",
			arg0
		);
	}
	jarray FileVisitOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileVisitOption",
			"values",
			"()[Ljava/nio/file/FileVisitOption;"
		).object<jarray>();
	}
} // namespace java::nio::file

