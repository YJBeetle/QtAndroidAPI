#include "./MalformedParametersException.hpp"

namespace java::lang::reflect
{
	// Fields
	
	MalformedParametersException::MalformedParametersException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MalformedParametersException::MalformedParametersException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParametersException",
			"()V"
		);
	}
	MalformedParametersException::MalformedParametersException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParametersException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	MalformedParametersException::MalformedParametersException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParametersException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang::reflect

