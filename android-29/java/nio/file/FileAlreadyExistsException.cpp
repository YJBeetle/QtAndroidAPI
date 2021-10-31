#include "./FileAlreadyExistsException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	FileAlreadyExistsException::FileAlreadyExistsException(QAndroidJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	FileAlreadyExistsException::FileAlreadyExistsException(jstring arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	FileAlreadyExistsException::FileAlreadyExistsException(jstring arg0, jstring arg1, jstring arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace java::nio::file

