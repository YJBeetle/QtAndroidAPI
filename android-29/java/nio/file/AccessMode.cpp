#include "./AccessMode.hpp"

namespace java::nio::file
{
	// Fields
	java::nio::file::AccessMode AccessMode::EXECUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.AccessMode",
			"EXECUTE",
			"Ljava/nio/file/AccessMode;"
		);
	}
	java::nio::file::AccessMode AccessMode::READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.AccessMode",
			"READ",
			"Ljava/nio/file/AccessMode;"
		);
	}
	java::nio::file::AccessMode AccessMode::WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.AccessMode",
			"WRITE",
			"Ljava/nio/file/AccessMode;"
		);
	}
	
	// QAndroidJniObject forward
	AccessMode::AccessMode(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::AccessMode AccessMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.AccessMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/AccessMode;",
			arg0
		);
	}
	jarray AccessMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.AccessMode",
			"values",
			"()[Ljava/nio/file/AccessMode;"
		).object<jarray>();
	}
} // namespace java::nio::file

