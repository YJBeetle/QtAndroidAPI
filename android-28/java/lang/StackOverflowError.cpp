#include "./StackOverflowError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	StackOverflowError::StackOverflowError(QAndroidJniObject obj) : java::lang::VirtualMachineError(obj) {}
	
	// Constructors
	StackOverflowError::StackOverflowError()
		: java::lang::VirtualMachineError(
			"java.lang.StackOverflowError",
			"()V"
		) {}
	StackOverflowError::StackOverflowError(jstring arg0)
		: java::lang::VirtualMachineError(
			"java.lang.StackOverflowError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

