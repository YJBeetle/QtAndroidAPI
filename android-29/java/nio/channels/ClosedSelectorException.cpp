#include "./ClosedSelectorException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	ClosedSelectorException::ClosedSelectorException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	ClosedSelectorException::ClosedSelectorException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ClosedSelectorException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

