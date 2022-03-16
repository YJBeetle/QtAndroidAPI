#pragma once

#include "../../JString.hpp"
#include "./AbstractMethodError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline AbstractMethodError::AbstractMethodError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.AbstractMethodError",
			"()V"
		) {}
	inline AbstractMethodError::AbstractMethodError(JString arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.AbstractMethodError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./IncompatibleClassChangeError.hpp"

