#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./UnsupportedOperationException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline UnsupportedOperationException::UnsupportedOperationException()
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"()V"
		) {}
	inline UnsupportedOperationException::UnsupportedOperationException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline UnsupportedOperationException::UnsupportedOperationException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline UnsupportedOperationException::UnsupportedOperationException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

