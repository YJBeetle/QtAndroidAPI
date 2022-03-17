#pragma once

#include "../../../JString.hpp"
#include "./MalformedParameterizedTypeException.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	inline MalformedParameterizedTypeException::MalformedParameterizedTypeException()
		: java::lang::RuntimeException(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"()V"
		) {}
	inline MalformedParameterizedTypeException::MalformedParameterizedTypeException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.reflect.MalformedParameterizedTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang::reflect

// Base class headers
#include "../Exception.hpp"
#include "../RuntimeException.hpp"

