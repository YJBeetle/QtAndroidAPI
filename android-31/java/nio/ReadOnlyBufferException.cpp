#include "./ReadOnlyBufferException.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	ReadOnlyBufferException::ReadOnlyBufferException()
		: java::lang::UnsupportedOperationException(
			"java.nio.ReadOnlyBufferException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

