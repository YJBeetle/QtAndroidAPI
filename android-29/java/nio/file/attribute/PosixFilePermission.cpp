#include "./PosixFilePermission.hpp"

namespace java::nio::file::attribute
{
	// Fields
	QAndroidJniObject PosixFilePermission::GROUP_EXECUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	QAndroidJniObject PosixFilePermission::GROUP_READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	QAndroidJniObject PosixFilePermission::GROUP_WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	QAndroidJniObject PosixFilePermission::OTHERS_EXECUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	QAndroidJniObject PosixFilePermission::OTHERS_READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	QAndroidJniObject PosixFilePermission::OTHERS_WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	QAndroidJniObject PosixFilePermission::OWNER_EXECUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	QAndroidJniObject PosixFilePermission::OWNER_READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	QAndroidJniObject PosixFilePermission::OWNER_WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;"
		);
	}
	
	PosixFilePermission::PosixFilePermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PosixFilePermission::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermission",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/PosixFilePermission;",
			arg0
		);
	}
	QAndroidJniObject PosixFilePermission::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermission",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/PosixFilePermission;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray PosixFilePermission::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermission",
			"values",
			"()[Ljava/nio/file/attribute/PosixFilePermission;"
		).object<jarray>();
	}
} // namespace java::nio::file::attribute

