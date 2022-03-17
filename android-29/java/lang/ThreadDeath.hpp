#pragma once

#include "./ThreadDeath.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ThreadDeath::ThreadDeath()
		: java::lang::Error(
			"java.lang.ThreadDeath",
			"()V"
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./Error.hpp"

