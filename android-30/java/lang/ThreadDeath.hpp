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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
