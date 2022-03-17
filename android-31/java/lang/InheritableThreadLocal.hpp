#pragma once

#include "../../JObject.hpp"
#include "./Thread.def.hpp"
#include "./InheritableThreadLocal.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline InheritableThreadLocal::InheritableThreadLocal()
		: java::lang::ThreadLocal(
			"java.lang.InheritableThreadLocal",
			"()V"
		) {}
	
	// Methods
} // namespace java::lang

// Base class headers
#include "./ThreadLocal.hpp"

