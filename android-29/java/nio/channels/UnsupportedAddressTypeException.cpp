#include "./UnsupportedAddressTypeException.hpp"

namespace java::nio::channels
{
	// Fields
	
	UnsupportedAddressTypeException::UnsupportedAddressTypeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnsupportedAddressTypeException::UnsupportedAddressTypeException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.UnsupportedAddressTypeException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

