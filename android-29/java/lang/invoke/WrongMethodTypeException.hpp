#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./WrongMethodTypeException.def.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	inline WrongMethodTypeException::WrongMethodTypeException()
		: java::lang::RuntimeException(
			"java.lang.invoke.WrongMethodTypeException",
			"()V"
		) {}
	inline WrongMethodTypeException::WrongMethodTypeException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.invoke.WrongMethodTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang::invoke

// Base class headers
#include "../Exception.hpp"
#include "../RuntimeException.hpp"

