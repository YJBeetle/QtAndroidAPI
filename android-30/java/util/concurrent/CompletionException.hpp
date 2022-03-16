#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CompletionException.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline CompletionException::CompletionException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.util.concurrent.CompletionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline CompletionException::CompletionException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.util.concurrent.CompletionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util::concurrent

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"

