#include "../../JObject.hpp"
#include "./Thread.hpp"
#include "./InheritableThreadLocal.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	InheritableThreadLocal::InheritableThreadLocal()
		: java::lang::ThreadLocal(
			"java.lang.InheritableThreadLocal",
			"()V"
		) {}
	
	// Methods
} // namespace java::lang

