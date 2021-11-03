#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./InvocationTargetException.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QJniObject forward
	InvocationTargetException::InvocationTargetException(QJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
	
	// Constructors
	InvocationTargetException::InvocationTargetException(JThrowable arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	InvocationTargetException::InvocationTargetException(JThrowable arg0, JString arg1)
		: java::lang::ReflectiveOperationException(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0.object<jthrowable>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JThrowable InvocationTargetException::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	JThrowable InvocationTargetException::getTargetException()
	{
		return callObjectMethod(
			"getTargetException",
			"()Ljava/lang/Throwable;"
		);
	}
} // namespace java::lang::reflect

