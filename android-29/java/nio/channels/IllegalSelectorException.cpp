#include "./IllegalSelectorException.hpp"

namespace java::nio::channels
{
	// Fields
	
	IllegalSelectorException::IllegalSelectorException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalSelectorException::IllegalSelectorException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.IllegalSelectorException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

