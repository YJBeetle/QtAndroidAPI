#include "../../JString.hpp"
#include "../../JThrowable.hpp"
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
	VirtualMachineError::VirtualMachineError(JString arg0)
		: java::lang::Error(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	VirtualMachineError::VirtualMachineError(JThrowable arg0)
		: java::lang::Error(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	VirtualMachineError::VirtualMachineError(JString arg0, JThrowable arg1)
		: java::lang::Error(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

