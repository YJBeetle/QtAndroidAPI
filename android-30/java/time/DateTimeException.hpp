#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./DateTimeException.def.hpp"

namespace java::time
{
	// Fields
	
	// Constructors
	inline DateTimeException::DateTimeException(JString arg0)
		: java::lang::RuntimeException(
			"java.time.DateTimeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline DateTimeException::DateTimeException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.time.DateTimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::time

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"

