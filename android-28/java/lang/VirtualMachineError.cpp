#include "./VirtualMachineError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	VirtualMachineError::VirtualMachineError(QJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	VirtualMachineError::VirtualMachineError()
		: java::lang::Error(
			"java.lang.VirtualMachineError",
			"()V"
		) {}
	VirtualMachineError::VirtualMachineError(jstring arg0)
		: java::lang::Error(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	VirtualMachineError::VirtualMachineError(jthrowable arg0)
		: java::lang::Error(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	VirtualMachineError::VirtualMachineError(jstring arg0, jthrowable arg1)
		: java::lang::Error(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

