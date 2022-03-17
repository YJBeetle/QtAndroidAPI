#pragma once

#include "../../JString.hpp"
#include "./InstantiationException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline InstantiationException::InstantiationException()
		: java::lang::ReflectiveOperationException(
			"java.lang.InstantiationException",
			"()V"
		) {}
	inline InstantiationException::InstantiationException(JString arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.InstantiationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"

