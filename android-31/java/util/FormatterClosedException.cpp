#include "./FormatterClosedException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	FormatterClosedException::FormatterClosedException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	FormatterClosedException::FormatterClosedException()
		: java::lang::IllegalStateException(
			"java.util.FormatterClosedException",
			"()V"
		) {}
	
	// Methods
} // namespace java::util

