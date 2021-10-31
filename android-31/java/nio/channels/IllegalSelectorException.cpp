#include "./IllegalSelectorException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalSelectorException::IllegalSelectorException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	IllegalSelectorException::IllegalSelectorException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.IllegalSelectorException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

