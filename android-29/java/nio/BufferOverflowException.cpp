#include "./BufferOverflowException.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	BufferOverflowException::BufferOverflowException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	BufferOverflowException::BufferOverflowException()
		: java::lang::RuntimeException(
			"java.nio.BufferOverflowException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

