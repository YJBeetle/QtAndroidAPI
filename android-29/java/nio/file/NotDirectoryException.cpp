#include "./NotDirectoryException.hpp"

namespace java::nio::file
{
	// Fields
	
	NotDirectoryException::NotDirectoryException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NotDirectoryException::NotDirectoryException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotDirectoryException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NotDirectoryException::NotDirectoryException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotDirectoryException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::nio::file

