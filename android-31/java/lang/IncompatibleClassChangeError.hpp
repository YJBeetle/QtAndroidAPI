#pragma once

#include "../../JString.hpp"
#include "./IncompatibleClassChangeError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline IncompatibleClassChangeError::IncompatibleClassChangeError()
		: java::lang::LinkageError(
			"java.lang.IncompatibleClassChangeError",
			"()V"
		) {}
	inline IncompatibleClassChangeError::IncompatibleClassChangeError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.IncompatibleClassChangeError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"
#include "./LinkageError.hpp"

