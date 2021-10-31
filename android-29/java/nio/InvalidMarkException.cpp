#include "./InvalidMarkException.hpp"

namespace java::nio
{
	// Fields
	
	// QJniObject forward
	InvalidMarkException::InvalidMarkException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	InvalidMarkException::InvalidMarkException()
		: java::lang::IllegalStateException(
			"java.nio.InvalidMarkException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

