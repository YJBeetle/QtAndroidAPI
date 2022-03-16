#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./RuntimeException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline RuntimeException::RuntimeException()
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"()V"
		) {}
	inline RuntimeException::RuntimeException(JString arg0)
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline RuntimeException::RuntimeException(JThrowable arg0)
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline RuntimeException::RuntimeException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"

