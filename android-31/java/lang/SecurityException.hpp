#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SecurityException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline SecurityException::SecurityException()
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"()V"
		) {}
	inline SecurityException::SecurityException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SecurityException::SecurityException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline SecurityException::SecurityException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.SecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

