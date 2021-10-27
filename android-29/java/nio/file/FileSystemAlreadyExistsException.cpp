#include "./FileSystemAlreadyExistsException.hpp"

namespace java::nio::file
{
	// Fields
	
	FileSystemAlreadyExistsException::FileSystemAlreadyExistsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileSystemAlreadyExistsException::FileSystemAlreadyExistsException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemAlreadyExistsException",
			"()V"
		);
	}
	FileSystemAlreadyExistsException::FileSystemAlreadyExistsException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemAlreadyExistsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FileSystemAlreadyExistsException::FileSystemAlreadyExistsException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemAlreadyExistsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::nio::file

