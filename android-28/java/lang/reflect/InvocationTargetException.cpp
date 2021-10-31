#include "./InvocationTargetException.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QAndroidJniObject forward
	InvocationTargetException::InvocationTargetException(QAndroidJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
	
	// Constructors
	InvocationTargetException::InvocationTargetException(jthrowable arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	InvocationTargetException::InvocationTargetException(jthrowable arg0, jstring arg1)
		: java::lang::ReflectiveOperationException(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jthrowable InvocationTargetException::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jthrowable InvocationTargetException::getTargetException()
	{
		return callObjectMethod(
			"getTargetException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
} // namespace java::lang::reflect

