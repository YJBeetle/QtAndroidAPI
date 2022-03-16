#include "./BufferOverflowException.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	BufferOverflowException::BufferOverflowException()
		: java::lang::RuntimeException(
			"java.nio.BufferOverflowException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

