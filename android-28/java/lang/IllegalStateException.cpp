#include "./IllegalStateException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalStateException::IllegalStateException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IllegalStateException::IllegalStateException()
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"()V"
		) {}
	IllegalStateException::IllegalStateException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	IllegalStateException::IllegalStateException(jthrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	IllegalStateException::IllegalStateException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

