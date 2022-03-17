#pragma once

#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./NumberFormatException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline NumberFormatException::NumberFormatException()
		: java::lang::IllegalArgumentException(
			"java.lang.NumberFormatException",
			"()V"
		) {}
	inline NumberFormatException::NumberFormatException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.lang.NumberFormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"
#include "./IllegalArgumentException.hpp"

