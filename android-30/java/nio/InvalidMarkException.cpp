#include "./InvalidMarkException.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	InvalidMarkException::InvalidMarkException()
		: java::lang::IllegalStateException(
			"java.nio.InvalidMarkException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

