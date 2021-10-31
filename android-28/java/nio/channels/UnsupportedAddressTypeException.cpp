#include "./UnsupportedAddressTypeException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	UnsupportedAddressTypeException::UnsupportedAddressTypeException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	UnsupportedAddressTypeException::UnsupportedAddressTypeException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.UnsupportedAddressTypeException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

