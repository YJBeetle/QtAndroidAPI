#pragma once

#include "../../JString.hpp"
#include "./InterruptedException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline InterruptedException::InterruptedException()
		: java::lang::Exception(
			"java.lang.InterruptedException",
			"()V"
		) {}
	inline InterruptedException::InterruptedException(JString arg0)
		: java::lang::Exception(
			"java.lang.InterruptedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"

