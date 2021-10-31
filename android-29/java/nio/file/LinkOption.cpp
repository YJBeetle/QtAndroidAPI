#include "./LinkOption.hpp"

namespace java::nio::file
{
	// Fields
	QAndroidJniObject LinkOption::NOFOLLOW_LINKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.LinkOption",
			"NOFOLLOW_LINKS",
			"Ljava/nio/file/LinkOption;"
		);
	}
	
	// QAndroidJniObject forward
	LinkOption::LinkOption(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject LinkOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.LinkOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/LinkOption;",
			arg0
		);
	}
	jarray LinkOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.LinkOption",
			"values",
			"()[Ljava/nio/file/LinkOption;"
		).object<jarray>();
	}
} // namespace java::nio::file

