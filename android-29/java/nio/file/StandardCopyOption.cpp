#include "./StandardCopyOption.hpp"

namespace java::nio::file
{
	// Fields
	QAndroidJniObject StandardCopyOption::ATOMIC_MOVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"ATOMIC_MOVE",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	QAndroidJniObject StandardCopyOption::COPY_ATTRIBUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"COPY_ATTRIBUTES",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	QAndroidJniObject StandardCopyOption::REPLACE_EXISTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"REPLACE_EXISTING",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	
	// QAndroidJniObject forward
	StandardCopyOption::StandardCopyOption(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject StandardCopyOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.StandardCopyOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/StandardCopyOption;",
			arg0
		);
	}
	jarray StandardCopyOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.StandardCopyOption",
			"values",
			"()[Ljava/nio/file/StandardCopyOption;"
		).object<jarray>();
	}
} // namespace java::nio::file

