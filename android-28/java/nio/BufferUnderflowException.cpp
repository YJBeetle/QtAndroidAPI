#include "./BufferUnderflowException.hpp"

namespace java::nio
{
	// Fields
	
	// QJniObject forward
	BufferUnderflowException::BufferUnderflowException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	BufferUnderflowException::BufferUnderflowException()
		: java::lang::RuntimeException(
			"java.nio.BufferUnderflowException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

