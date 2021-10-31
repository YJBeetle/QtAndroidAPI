#include "./FileAlreadyExistsException.hpp"

namespace java::nio::file
{
	// Fields
	
	FileAlreadyExistsException::FileAlreadyExistsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileAlreadyExistsException::FileAlreadyExistsException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FileAlreadyExistsException::FileAlreadyExistsException(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace java::nio::file

