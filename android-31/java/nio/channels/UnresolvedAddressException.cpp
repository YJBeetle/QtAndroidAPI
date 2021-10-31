#include "./UnresolvedAddressException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	UnresolvedAddressException::UnresolvedAddressException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	UnresolvedAddressException::UnresolvedAddressException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.UnresolvedAddressException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

