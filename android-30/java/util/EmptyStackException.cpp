#include "./EmptyStackException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	EmptyStackException::EmptyStackException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	EmptyStackException::EmptyStackException()
		: java::lang::RuntimeException(
			"java.util.EmptyStackException",
			"()V"
		) {}
	
	// Methods
} // namespace java::util

