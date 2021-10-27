#include "./InvocationTargetException.hpp"

namespace java::lang::reflect
{
	// Fields
	
	InvocationTargetException::InvocationTargetException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvocationTargetException::InvocationTargetException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	InvocationTargetException::InvocationTargetException(jthrowable &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	InvocationTargetException::InvocationTargetException(jthrowable &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jthrowable InvocationTargetException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jthrowable InvocationTargetException::getTargetException()
	{
		return __thiz.callObjectMethod(
			"getTargetException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
} // namespace java::lang::reflect

