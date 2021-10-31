#include "./ReadOnlyBufferException.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	ReadOnlyBufferException::ReadOnlyBufferException(QAndroidJniObject obj) : java::lang::UnsupportedOperationException(obj) {}
	
	// Constructors
	ReadOnlyBufferException::ReadOnlyBufferException()
		: java::lang::UnsupportedOperationException(
			"java.nio.ReadOnlyBufferException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

