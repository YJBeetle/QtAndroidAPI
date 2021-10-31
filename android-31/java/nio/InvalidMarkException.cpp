#include "./InvalidMarkException.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidMarkException::InvalidMarkException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	InvalidMarkException::InvalidMarkException()
		: java::lang::IllegalStateException(
			"java.nio.InvalidMarkException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

