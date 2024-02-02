#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./VirtualMachineError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline VirtualMachineError::VirtualMachineError()
		: java::lang::Error(
			"java.lang.VirtualMachineError",
			"()V"
		) {}
	inline VirtualMachineError::VirtualMachineError(JString arg0)
		: java::lang::Error(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline VirtualMachineError::VirtualMachineError(JThrowable arg0)
		: java::lang::Error(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline VirtualMachineError::VirtualMachineError(JString arg0, JThrowable arg1)
		: java::lang::Error(
			"java.lang.VirtualMachineError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
