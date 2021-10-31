#include "./IllegalArgumentException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalArgumentException::IllegalArgumentException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IllegalArgumentException::IllegalArgumentException()
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"()V"
		) {}
	IllegalArgumentException::IllegalArgumentException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	IllegalArgumentException::IllegalArgumentException(jthrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	IllegalArgumentException::IllegalArgumentException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

