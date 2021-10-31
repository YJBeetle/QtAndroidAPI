#include "./FileSystemException.hpp"

namespace java::nio::file
{
	// Fields
	
	FileSystemException::FileSystemException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileSystemException::FileSystemException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FileSystemException::FileSystemException(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jstring FileSystemException::getFile()
	{
		return __thiz.callObjectMethod(
			"getFile",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FileSystemException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FileSystemException::getOtherFile()
	{
		return __thiz.callObjectMethod(
			"getOtherFile",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FileSystemException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::file

