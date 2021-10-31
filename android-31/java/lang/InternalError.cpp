#include "./InternalError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	InternalError::InternalError(QJniObject obj) : java::lang::VirtualMachineError(obj) {}
	
	// Constructors
	InternalError::InternalError()
		: java::lang::VirtualMachineError(
			"java.lang.InternalError",
			"()V"
		) {}
	InternalError::InternalError(jstring arg0)
		: java::lang::VirtualMachineError(
			"java.lang.InternalError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	InternalError::InternalError(jthrowable arg0)
		: java::lang::VirtualMachineError(
			"java.lang.InternalError",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	InternalError::InternalError(jstring arg0, jthrowable arg1)
		: java::lang::VirtualMachineError(
			"java.lang.InternalError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

