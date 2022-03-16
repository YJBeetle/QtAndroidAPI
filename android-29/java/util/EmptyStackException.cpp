#include "./EmptyStackException.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	EmptyStackException::EmptyStackException()
		: java::lang::RuntimeException(
			"java.util.EmptyStackException",
			"()V"
		) {}
	
	// Methods
} // namespace java::util

