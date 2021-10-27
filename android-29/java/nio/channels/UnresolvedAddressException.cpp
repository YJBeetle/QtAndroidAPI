#include "./UnresolvedAddressException.hpp"

namespace java::nio::channels
{
	// Fields
	
	UnresolvedAddressException::UnresolvedAddressException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnresolvedAddressException::UnresolvedAddressException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.UnresolvedAddressException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

