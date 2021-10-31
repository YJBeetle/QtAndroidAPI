#include "./Thread.hpp"
#include "./InheritableThreadLocal.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	InheritableThreadLocal::InheritableThreadLocal(QJniObject obj) : java::lang::ThreadLocal(obj) {}
	
	// Constructors
	InheritableThreadLocal::InheritableThreadLocal()
		: java::lang::ThreadLocal(
			"java.lang.InheritableThreadLocal",
			"()V"
		) {}
	
	// Methods
} // namespace java::lang

