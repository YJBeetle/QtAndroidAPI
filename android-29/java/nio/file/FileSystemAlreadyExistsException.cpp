#include "./FileSystemAlreadyExistsException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	FileSystemAlreadyExistsException::FileSystemAlreadyExistsException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	FileSystemAlreadyExistsException::FileSystemAlreadyExistsException()
		: java::lang::RuntimeException(
			"java.nio.file.FileSystemAlreadyExistsException",
			"()V"
		) {}
	FileSystemAlreadyExistsException::FileSystemAlreadyExistsException(jstring arg0)
		: java::lang::RuntimeException(
			"java.nio.file.FileSystemAlreadyExistsException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::nio::file

