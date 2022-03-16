#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ConcurrentModificationException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline ConcurrentModificationException::ConcurrentModificationException()
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"()V"
		) {}
	inline ConcurrentModificationException::ConcurrentModificationException(JString arg0)
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ConcurrentModificationException::ConcurrentModificationException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline ConcurrentModificationException::ConcurrentModificationException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"

