#include "./FileSystemNotFoundException.hpp"

namespace java::nio::file
{
	// Fields
	
	FileSystemNotFoundException::FileSystemNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileSystemNotFoundException::FileSystemNotFoundException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemNotFoundException",
			"()V"
		);
	}
	FileSystemNotFoundException::FileSystemNotFoundException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FileSystemNotFoundException::FileSystemNotFoundException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemNotFoundException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::nio::file

