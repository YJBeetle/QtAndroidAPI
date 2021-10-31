#include "./EmptyStackException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	EmptyStackException::EmptyStackException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	EmptyStackException::EmptyStackException()
		: java::lang::RuntimeException(
			"java.util.EmptyStackException",
			"()V"
		) {}
	
	// Methods
} // namespace java::util

