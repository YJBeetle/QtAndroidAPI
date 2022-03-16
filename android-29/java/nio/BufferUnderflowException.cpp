#include "./BufferUnderflowException.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	BufferUnderflowException::BufferUnderflowException()
		: java::lang::RuntimeException(
			"java.nio.BufferUnderflowException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

