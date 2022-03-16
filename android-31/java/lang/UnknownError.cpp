#include "../../JString.hpp"
#include "./UnknownError.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	UnknownError::UnknownError()
		: java::lang::VirtualMachineError(
			"java.lang.UnknownError",
			"()V"
		) {}
	UnknownError::UnknownError(JString arg0)
		: java::lang::VirtualMachineError(
			"java.lang.UnknownError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

