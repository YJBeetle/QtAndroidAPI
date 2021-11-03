#include "../../../JString.hpp"
#include "./DirectoryNotEmptyException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	DirectoryNotEmptyException::DirectoryNotEmptyException(QJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	DirectoryNotEmptyException::DirectoryNotEmptyException(JString arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.DirectoryNotEmptyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

