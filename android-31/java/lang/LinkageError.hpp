#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./LinkageError.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline LinkageError::LinkageError()
		: java::lang::Error(
			"java.lang.LinkageError",
			"()V"
		) {}
	inline LinkageError::LinkageError(JString arg0)
		: java::lang::Error(
			"java.lang.LinkageError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline LinkageError::LinkageError(JString arg0, JThrowable arg1)
		: java::lang::Error(
			"java.lang.LinkageError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"

