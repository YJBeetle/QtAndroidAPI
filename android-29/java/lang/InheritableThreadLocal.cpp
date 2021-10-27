#include "./Thread.hpp"
#include "./InheritableThreadLocal.hpp"

namespace java::lang
{
	// Fields
	
	InheritableThreadLocal::InheritableThreadLocal(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InheritableThreadLocal::InheritableThreadLocal()
	{
		__thiz = QAndroidJniObject(
			"java.lang.InheritableThreadLocal",
			"()V"
		);
	}
	
	// Methods
} // namespace java::lang

