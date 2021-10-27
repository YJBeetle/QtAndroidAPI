#include "./FormatterClosedException.hpp"

namespace java::util
{
	// Fields
	
	FormatterClosedException::FormatterClosedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FormatterClosedException::FormatterClosedException()
	{
		__thiz = QAndroidJniObject(
			"java.util.FormatterClosedException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::util

