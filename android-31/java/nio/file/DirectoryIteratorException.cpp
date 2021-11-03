#include "../../io/IOException.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../../JThrowable.hpp"
#include "./DirectoryIteratorException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	DirectoryIteratorException::DirectoryIteratorException(QAndroidJniObject obj) : java::util::ConcurrentModificationException(obj) {}
	
	// Constructors
	DirectoryIteratorException::DirectoryIteratorException(java::io::IOException arg0)
		: java::util::ConcurrentModificationException(
			"java.nio.file.DirectoryIteratorException",
			"(Ljava/io/IOException;)V",
			arg0.object()
		) {}
	
	// Methods
	java::io::IOException DirectoryIteratorException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/io/IOException;"
		);
	}
} // namespace java::nio::file

