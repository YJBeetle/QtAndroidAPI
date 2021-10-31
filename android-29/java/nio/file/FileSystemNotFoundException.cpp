#include "./FileSystemNotFoundException.hpp"

namespace java::nio::file
{
	// Fields
	
	FileSystemNotFoundException::FileSystemNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileSystemNotFoundException::FileSystemNotFoundException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemNotFoundException",
			"()V"
		);
	}
	FileSystemNotFoundException::FileSystemNotFoundException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::nio::file

