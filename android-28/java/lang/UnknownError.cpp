#include "./UnknownError.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	UnknownError::UnknownError(QJniObject obj) : java::lang::VirtualMachineError(obj) {}
	
	// Constructors
	UnknownError::UnknownError()
		: java::lang::VirtualMachineError(
			"java.lang.UnknownError",
			"()V"
		) {}
	UnknownError::UnknownError(jstring arg0)
		: java::lang::VirtualMachineError(
			"java.lang.UnknownError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

