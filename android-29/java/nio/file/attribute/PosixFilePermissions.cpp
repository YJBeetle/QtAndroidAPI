#include "../../../lang/StringBuilder.hpp"
#include "./PosixFilePermissions.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	PosixFilePermissions::PosixFilePermissions(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PosixFilePermissions::asFileAttribute(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"asFileAttribute",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/FileAttribute;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PosixFilePermissions::fromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"fromString",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0
		);
	}
	QAndroidJniObject PosixFilePermissions::fromString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"fromString",
			"(Ljava/lang/String;)Ljava/util/Set;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring PosixFilePermissions::toString(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"toString",
			"(Ljava/util/Set;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
} // namespace java::nio::file::attribute

