#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./InternalError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline InternalError::InternalError()
		: java::lang::VirtualMachineError(
			"java.lang.InternalError",
			"()V"
		) {}
	inline InternalError::InternalError(JString arg0)
		: java::lang::VirtualMachineError(
			"java.lang.InternalError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline InternalError::InternalError(JThrowable arg0)
		: java::lang::VirtualMachineError(
			"java.lang.InternalError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline InternalError::InternalError(JString arg0, JThrowable arg1)
		: java::lang::VirtualMachineError(
			"java.lang.InternalError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"
#include "./VirtualMachineError.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
