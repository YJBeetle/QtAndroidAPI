#include "./IllegalMonitorStateException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalMonitorStateException::IllegalMonitorStateException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IllegalMonitorStateException::IllegalMonitorStateException()
		: java::lang::RuntimeException(
			"java.lang.IllegalMonitorStateException",
			"()V"
		) {}
	IllegalMonitorStateException::IllegalMonitorStateException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalMonitorStateException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

