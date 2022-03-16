#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./IllegalStateException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline IllegalStateException::IllegalStateException()
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"()V"
		) {}
	inline IllegalStateException::IllegalStateException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline IllegalStateException::IllegalStateException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline IllegalStateException::IllegalStateException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

