#include "./FormatterClosedException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	FormatterClosedException::FormatterClosedException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	FormatterClosedException::FormatterClosedException()
		: java::lang::IllegalStateException(
			"java.util.FormatterClosedException",
			"()V"
		) {}
	
	// Methods
} // namespace java::util

