#include "./UnresolvedAddressException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	UnresolvedAddressException::UnresolvedAddressException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.UnresolvedAddressException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

