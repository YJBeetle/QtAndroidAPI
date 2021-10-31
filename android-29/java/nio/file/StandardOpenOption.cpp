#include "./StandardOpenOption.hpp"

namespace java::nio::file
{
	// Fields
	java::nio::file::StandardOpenOption StandardOpenOption::APPEND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"APPEND",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	java::nio::file::StandardOpenOption StandardOpenOption::CREATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"CREATE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	java::nio::file::StandardOpenOption StandardOpenOption::CREATE_NEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"CREATE_NEW",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	java::nio::file::StandardOpenOption StandardOpenOption::DELETE_ON_CLOSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"DELETE_ON_CLOSE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	java::nio::file::StandardOpenOption StandardOpenOption::DSYNC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"DSYNC",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	java::nio::file::StandardOpenOption StandardOpenOption::READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"READ",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	java::nio::file::StandardOpenOption StandardOpenOption::SPARSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"SPARSE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	java::nio::file::StandardOpenOption StandardOpenOption::SYNC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"SYNC",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	java::nio::file::StandardOpenOption StandardOpenOption::TRUNCATE_EXISTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"TRUNCATE_EXISTING",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	java::nio::file::StandardOpenOption StandardOpenOption::WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"WRITE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	
	// QAndroidJniObject forward
	StandardOpenOption::StandardOpenOption(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::StandardOpenOption StandardOpenOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.StandardOpenOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/StandardOpenOption;",
			arg0
		);
	}
	jarray StandardOpenOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.StandardOpenOption",
			"values",
			"()[Ljava/nio/file/StandardOpenOption;"
		).object<jarray>();
	}
} // namespace java::nio::file

