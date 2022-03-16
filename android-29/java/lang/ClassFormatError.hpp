#pragma once

#include "../../JString.hpp"
#include "./ClassFormatError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ClassFormatError::ClassFormatError()
		: java::lang::LinkageError(
			"java.lang.ClassFormatError",
			"()V"
		) {}
	inline ClassFormatError::ClassFormatError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.ClassFormatError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"
#include "./LinkageError.hpp"

