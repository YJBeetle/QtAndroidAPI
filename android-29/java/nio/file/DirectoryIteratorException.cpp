#include "../../io/IOException.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "./DirectoryIteratorException.hpp"

namespace java::nio::file
{
	// Fields
	
	DirectoryIteratorException::DirectoryIteratorException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DirectoryIteratorException::DirectoryIteratorException(java::io::IOException arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.DirectoryIteratorException",
			"(Ljava/io/IOException;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DirectoryIteratorException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/io/IOException;"
		);
	}
} // namespace java::nio::file

