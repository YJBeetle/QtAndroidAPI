#pragma once

#include "../../JString.hpp"
#include "./ArithmeticException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ArithmeticException::ArithmeticException()
		: java::lang::RuntimeException(
			"java.lang.ArithmeticException",
			"()V"
		) {}
	inline ArithmeticException::ArithmeticException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.ArithmeticException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

