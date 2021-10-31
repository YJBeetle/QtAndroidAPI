#include "./ThreadDeath.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	ThreadDeath::ThreadDeath(QJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	ThreadDeath::ThreadDeath()
		: java::lang::Error(
			"java.lang.ThreadDeath",
			"()V"
		) {}
	
	// Methods
} // namespace java::lang

