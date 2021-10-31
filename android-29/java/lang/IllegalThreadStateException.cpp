#include "./IllegalThreadStateException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalThreadStateException::IllegalThreadStateException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	IllegalThreadStateException::IllegalThreadStateException()
		: java::lang::IllegalArgumentException(
			"java.lang.IllegalThreadStateException",
			"()V"
		) {}
	IllegalThreadStateException::IllegalThreadStateException(jstring arg0)
		: java::lang::IllegalArgumentException(
			"java.lang.IllegalThreadStateException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

