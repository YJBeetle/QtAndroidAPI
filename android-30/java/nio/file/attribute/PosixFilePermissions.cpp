#include "../../../lang/StringBuilder.hpp"
#include "./PosixFilePermissions.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// QJniObject forward
	PosixFilePermissions::PosixFilePermissions(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass PosixFilePermissions::asFileAttribute(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"asFileAttribute",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/FileAttribute;",
			arg0.object()
		);
	}
	__JniBaseClass PosixFilePermissions::fromString(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"fromString",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0
		);
	}
	jstring PosixFilePermissions::toString(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"toString",
			"(Ljava/util/Set;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
} // namespace java::nio::file::attribute

