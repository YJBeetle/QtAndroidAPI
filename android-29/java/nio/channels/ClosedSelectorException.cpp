#include "./ClosedSelectorException.hpp"

namespace java::nio::channels
{
	// Fields
	
	ClosedSelectorException::ClosedSelectorException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClosedSelectorException::ClosedSelectorException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ClosedSelectorException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

