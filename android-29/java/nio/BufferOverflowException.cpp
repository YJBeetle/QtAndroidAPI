#include "./BufferOverflowException.hpp"

namespace java::nio
{
	// Fields
	
	BufferOverflowException::BufferOverflowException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BufferOverflowException::BufferOverflowException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.BufferOverflowException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio

