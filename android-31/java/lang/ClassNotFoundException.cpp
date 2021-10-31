#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./ClassNotFoundException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	ClassNotFoundException::ClassNotFoundException(QAndroidJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
	
	// Constructors
	ClassNotFoundException::ClassNotFoundException()
		: java::lang::ReflectiveOperationException(
			"java.lang.ClassNotFoundException",
			"()V"
		) {}
	ClassNotFoundException::ClassNotFoundException(jstring arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ClassNotFoundException::ClassNotFoundException(jstring arg0, jthrowable arg1)
		: java::lang::ReflectiveOperationException(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jthrowable ClassNotFoundException::getException()
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
} // namespace java::lang

