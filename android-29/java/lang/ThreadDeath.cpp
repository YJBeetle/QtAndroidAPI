#include "./ThreadDeath.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	ThreadDeath::ThreadDeath(QAndroidJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	ThreadDeath::ThreadDeath()
		: java::lang::Error(
			"java.lang.ThreadDeath",
			"()V"
		) {}
	
	// Methods
} // namespace java::lang

