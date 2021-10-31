#include "./SecurityException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	SecurityException::SecurityException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	SecurityException::SecurityException()
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"()V"
		) {}
	SecurityException::SecurityException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SecurityException::SecurityException(jthrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SecurityException::SecurityException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

