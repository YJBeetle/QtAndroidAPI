#include "./BufferOverflowException.hpp"

namespace java::nio
{
	// Fields
	
	// QJniObject forward
	BufferOverflowException::BufferOverflowException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	BufferOverflowException::BufferOverflowException()
		: java::lang::RuntimeException(
			"java.nio.BufferOverflowException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

