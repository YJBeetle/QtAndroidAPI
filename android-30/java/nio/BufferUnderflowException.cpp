#include "./BufferUnderflowException.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	BufferUnderflowException::BufferUnderflowException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	BufferUnderflowException::BufferUnderflowException()
		: java::lang::RuntimeException(
			"java.nio.BufferUnderflowException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

