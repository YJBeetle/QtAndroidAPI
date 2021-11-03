#include "../../../JString.hpp"
#include "./FileSystemNotFoundException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	FileSystemNotFoundException::FileSystemNotFoundException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	FileSystemNotFoundException::FileSystemNotFoundException()
		: java::lang::RuntimeException(
			"java.nio.file.FileSystemNotFoundException",
			"()V"
		) {}
	FileSystemNotFoundException::FileSystemNotFoundException(JString arg0)
		: java::lang::RuntimeException(
			"java.nio.file.FileSystemNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

