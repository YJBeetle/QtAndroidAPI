#include "../../../JString.hpp"
#include "./FileAlreadyExistsException.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	FileAlreadyExistsException::FileAlreadyExistsException(JString arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	FileAlreadyExistsException::FileAlreadyExistsException(JString arg0, JString arg1, JString arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

