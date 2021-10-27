#include "./DirectoryNotEmptyException.hpp"

namespace java::nio::file
{
	// Fields
	
	DirectoryNotEmptyException::DirectoryNotEmptyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DirectoryNotEmptyException::DirectoryNotEmptyException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.DirectoryNotEmptyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	DirectoryNotEmptyException::DirectoryNotEmptyException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.DirectoryNotEmptyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::nio::file

