#pragma once

#include "../../JString.hpp"
#include "./OutOfMemoryError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline OutOfMemoryError::OutOfMemoryError()
		: java::lang::VirtualMachineError(
			"java.lang.OutOfMemoryError",
			"()V"
		) {}
	inline OutOfMemoryError::OutOfMemoryError(JString arg0)
		: java::lang::VirtualMachineError(
			"java.lang.OutOfMemoryError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"
#include "./VirtualMachineError.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
