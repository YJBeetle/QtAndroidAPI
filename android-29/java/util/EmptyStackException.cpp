#include "./EmptyStackException.hpp"

namespace java::util
{
	// Fields
	
	EmptyStackException::EmptyStackException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EmptyStackException::EmptyStackException()
	{
		__thiz = QAndroidJniObject(
			"java.util.EmptyStackException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::util

