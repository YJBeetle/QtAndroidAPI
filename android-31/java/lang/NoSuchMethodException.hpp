#pragma once

#include "../../JString.hpp"
#include "./NoSuchMethodException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline NoSuchMethodException::NoSuchMethodException()
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchMethodException",
			"()V"
		) {}
	inline NoSuchMethodException::NoSuchMethodException(JString arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchMethodException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"

