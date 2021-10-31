#include "./NotDirectoryException.hpp"

namespace java::nio::file
{
	// Fields
	
	NotDirectoryException::NotDirectoryException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NotDirectoryException::NotDirectoryException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotDirectoryException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::nio::file

