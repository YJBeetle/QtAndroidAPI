#pragma once

#include "../../JString.hpp"
#include "./IllegalAccessException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline IllegalAccessException::IllegalAccessException()
		: java::lang::ReflectiveOperationException(
			"java.lang.IllegalAccessException",
			"()V"
		) {}
	inline IllegalAccessException::IllegalAccessException(JString arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.IllegalAccessException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"

