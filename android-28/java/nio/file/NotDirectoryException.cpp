#include "../../../JString.hpp"
#include "./NotDirectoryException.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	NotDirectoryException::NotDirectoryException(JString arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.NotDirectoryException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

