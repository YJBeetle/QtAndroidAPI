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
	InvalidClassException::InvalidClassException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InvalidClassException::InvalidClassException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	InvalidClassException::InvalidClassException(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	InvalidClassException::InvalidClassException(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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

