#pragma once

#include "../../JString.hpp"
#include "./ClassCastException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ClassCastException::ClassCastException()
		: java::lang::RuntimeException(
			"java.lang.ClassCastException",
			"()V"
		) {}
	inline ClassCastException::ClassCastException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.ClassCastException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

