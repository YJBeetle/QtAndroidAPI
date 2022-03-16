#include "../../../JString.hpp"
#include "./FileSystemAlreadyExistsException.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	FileSystemAlreadyExistsException::FileSystemAlreadyExistsException()
		: java::lang::RuntimeException(
			"java.nio.file.FileSystemAlreadyExistsException",
			"()V"
		) {}
	FileSystemAlreadyExistsException::FileSystemAlreadyExistsException(JString arg0)
		: java::lang::RuntimeException(
			"java.nio.file.FileSystemAlreadyExistsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

