#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./IllegalArgumentException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline IllegalArgumentException::IllegalArgumentException()
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"()V"
		) {}
	inline IllegalArgumentException::IllegalArgumentException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline IllegalArgumentException::IllegalArgumentException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline IllegalArgumentException::IllegalArgumentException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

