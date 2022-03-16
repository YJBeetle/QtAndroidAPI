#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./BootstrapMethodError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline BootstrapMethodError::BootstrapMethodError()
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"()V"
		) {}
	inline BootstrapMethodError::BootstrapMethodError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline BootstrapMethodError::BootstrapMethodError(JThrowable arg0)
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline BootstrapMethodError::BootstrapMethodError(JString arg0, JThrowable arg1)
		: java::lang::LinkageError(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"
#include "./LinkageError.hpp"

