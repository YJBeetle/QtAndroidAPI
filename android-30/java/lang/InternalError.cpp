#include "../../JString.hpp"
#include "../../JThrowable.hpp"
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
	InternalError::InternalError(JString arg0)
		: java::lang::VirtualMachineError(
			"java.lang.InternalError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	InternalError::InternalError(JThrowable arg0)
		: java::lang::VirtualMachineError(
			"java.lang.InternalError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	InternalError::InternalError(JString arg0, JThrowable arg1)
		: java::lang::VirtualMachineError(
			"java.lang.InternalError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

