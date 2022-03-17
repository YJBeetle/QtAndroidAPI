#pragma once

#include "../../JString.hpp"
#include "./NoSuchFieldException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline NoSuchFieldException::NoSuchFieldException()
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchFieldException",
			"()V"
		) {}
	inline NoSuchFieldException::NoSuchFieldException(JString arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchFieldException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"

