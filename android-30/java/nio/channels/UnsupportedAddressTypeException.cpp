#include "./UnsupportedAddressTypeException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	UnsupportedAddressTypeException::UnsupportedAddressTypeException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.UnsupportedAddressTypeException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

