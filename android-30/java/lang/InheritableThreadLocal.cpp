#include "../../JObject.hpp"
#include "./Thread.hpp"
#include "./InheritableThreadLocal.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	InheritableThreadLocal::InheritableThreadLocal(QAndroidJniObject obj) : java::lang::ThreadLocal(obj) {}
	
	// Constructors
	InheritableThreadLocal::InheritableThreadLocal()
		: java::lang::ThreadLocal(
			"java.lang.InheritableThreadLocal",
			"()V"
		) {}
	
	// Methods
} // namespace java::lang

