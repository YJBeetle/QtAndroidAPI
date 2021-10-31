#include "./InvalidPathException.hpp"

namespace java::nio::file
{
	// Fields
	
	InvalidPathException::InvalidPathException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvalidPathException::InvalidPathException(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	InvalidPathException::InvalidPathException(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint InvalidPathException::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jstring InvalidPathException::getInput()
	{
		return __thiz.callObjectMethod(
			"getInput",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InvalidPathException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InvalidPathException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::file

