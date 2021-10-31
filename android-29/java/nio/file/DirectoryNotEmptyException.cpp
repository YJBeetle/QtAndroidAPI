#include "./DirectoryNotEmptyException.hpp"

namespace java::nio::file
{
	// Fields
	
	DirectoryNotEmptyException::DirectoryNotEmptyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DirectoryNotEmptyException::DirectoryNotEmptyException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.DirectoryNotEmptyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::nio::file

