#include "./FileAlreadyExistsException.hpp"

namespace java::nio::file
{
	// Fields
	
	FileAlreadyExistsException::FileAlreadyExistsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileAlreadyExistsException::FileAlreadyExistsException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FileAlreadyExistsException::FileAlreadyExistsException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	FileAlreadyExistsException::FileAlreadyExistsException(jstring &arg0, jstring &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	FileAlreadyExistsException::FileAlreadyExistsException(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::nio::file

