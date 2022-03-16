#include "../../JString.hpp"
#include "./StackOverflowError.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	StackOverflowError::StackOverflowError()
		: java::lang::VirtualMachineError(
			"java.lang.StackOverflowError",
			"()V"
		) {}
	StackOverflowError::StackOverflowError(JString arg0)
		: java::lang::VirtualMachineError(
			"java.lang.StackOverflowError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

