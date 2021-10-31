#include "./ReadOnlyBufferException.hpp"

namespace java::nio
{
	// Fields
	
	// QJniObject forward
	ReadOnlyBufferException::ReadOnlyBufferException(QJniObject obj) : java::lang::UnsupportedOperationException(obj) {}
	
	// Constructors
	ReadOnlyBufferException::ReadOnlyBufferException()
		: java::lang::UnsupportedOperationException(
			"java.nio.ReadOnlyBufferException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

