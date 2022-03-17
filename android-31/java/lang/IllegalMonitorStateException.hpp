#pragma once

#include "../../JString.hpp"
#include "./IllegalMonitorStateException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline IllegalMonitorStateException::IllegalMonitorStateException()
		: java::lang::RuntimeException(
			"java.lang.IllegalMonitorStateException",
			"()V"
		) {}
	inline IllegalMonitorStateException::IllegalMonitorStateException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalMonitorStateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

