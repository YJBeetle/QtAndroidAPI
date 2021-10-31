#include "./ClosedSelectorException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	ClosedSelectorException::ClosedSelectorException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	ClosedSelectorException::ClosedSelectorException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ClosedSelectorException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

