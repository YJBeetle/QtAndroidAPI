#include "./UnsupportedAddressTypeException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	UnsupportedAddressTypeException::UnsupportedAddressTypeException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	UnsupportedAddressTypeException::UnsupportedAddressTypeException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.UnsupportedAddressTypeException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

