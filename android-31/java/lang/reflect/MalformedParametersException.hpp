#pragma once

#include "../../../JString.hpp"
#include "./MalformedParametersException.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	inline MalformedParametersException::MalformedParametersException()
		: java::lang::RuntimeException(
			"java.lang.reflect.MalformedParametersException",
			"()V"
		) {}
	inline MalformedParametersException::MalformedParametersException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.reflect.MalformedParametersException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang::reflect

// Base class headers
#include "../Exception.hpp"
#include "../RuntimeException.hpp"

