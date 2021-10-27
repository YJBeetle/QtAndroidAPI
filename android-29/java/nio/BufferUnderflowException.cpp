#include "./BufferUnderflowException.hpp"

namespace java::nio
{
	// Fields
	
	BufferUnderflowException::BufferUnderflowException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BufferUnderflowException::BufferUnderflowException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.BufferUnderflowException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio

