#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./RejectedExecutionException.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline RejectedExecutionException::RejectedExecutionException()
		: java::lang::RuntimeException(
			"java.util.concurrent.RejectedExecutionException",
			"()V"
		) {}
	inline RejectedExecutionException::RejectedExecutionException(JString arg0)
		: java::lang::RuntimeException(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline RejectedExecutionException::RejectedExecutionException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline RejectedExecutionException::RejectedExecutionException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util::concurrent

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"

