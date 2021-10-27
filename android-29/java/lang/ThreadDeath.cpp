#include "./ThreadDeath.hpp"

namespace java::lang
{
	// Fields
	
	ThreadDeath::ThreadDeath(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ThreadDeath::ThreadDeath()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ThreadDeath",
			"()V"
		);
	}
	
	// Methods
} // namespace java::lang

