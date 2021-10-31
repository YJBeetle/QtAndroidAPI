#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./ExceptionInInitializerError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	ExceptionInInitializerError::ExceptionInInitializerError(QAndroidJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	ExceptionInInitializerError::ExceptionInInitializerError()
		: java::lang::LinkageError(
			"java.lang.ExceptionInInitializerError",
			"()V"
		) {}
	ExceptionInInitializerError::ExceptionInInitializerError(jstring arg0)
		: java::lang::LinkageError(
			"java.lang.ExceptionInInitializerError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ExceptionInInitializerError::ExceptionInInitializerError(jthrowable arg0)
		: java::lang::LinkageError(
			"java.lang.ExceptionInInitializerError",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	
	// Methods
	jthrowable ExceptionInInitializerError::getException()
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
} // namespace java::lang

