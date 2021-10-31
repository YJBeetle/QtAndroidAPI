#include "./OutOfMemoryError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	OutOfMemoryError::OutOfMemoryError(QAndroidJniObject obj) : java::lang::VirtualMachineError(obj) {}
	
	// Constructors
	OutOfMemoryError::OutOfMemoryError()
		: java::lang::VirtualMachineError(
			"java.lang.OutOfMemoryError",
			"()V"
		) {}
	OutOfMemoryError::OutOfMemoryError(jstring arg0)
		: java::lang::VirtualMachineError(
			"java.lang.OutOfMemoryError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

