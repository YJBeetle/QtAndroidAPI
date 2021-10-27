#include "./MalformedParameterizedTypeException.hpp"

namespace java::lang::reflect
{
	// Fields
	
	MalformedParameterizedTypeException::MalformedParameterizedTypeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MalformedParameterizedTypeException::MalformedParameterizedTypeException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"()V"
		);
	}
	MalformedParameterizedTypeException::MalformedParameterizedTypeException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	MalformedParameterizedTypeException::MalformedParameterizedTypeException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang::reflect

