#pragma once

#include "../../JString.hpp"
#include "./StackOverflowError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline StackOverflowError::StackOverflowError()
		: java::lang::VirtualMachineError(
			"java.lang.StackOverflowError",
			"()V"
		) {}
	inline StackOverflowError::StackOverflowError(JString arg0)
		: java::lang::VirtualMachineError(
			"java.lang.StackOverflowError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"
#include "./VirtualMachineError.hpp"

