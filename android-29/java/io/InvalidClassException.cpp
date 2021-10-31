#include "./InvalidClassException.hpp"

namespace java::io
{
	// Fields
	jstring InvalidClassException::classname()
	{
		return __thiz.getObjectField(
			"classname",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	InvalidClassException::InvalidClassException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvalidClassException::InvalidClassException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InvalidClassException::InvalidClassException(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jstring InvalidClassException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::io

