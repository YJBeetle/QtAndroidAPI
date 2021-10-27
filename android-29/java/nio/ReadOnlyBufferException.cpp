#include "./ReadOnlyBufferException.hpp"

namespace java::nio
{
	// Fields
	
	ReadOnlyBufferException::ReadOnlyBufferException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReadOnlyBufferException::ReadOnlyBufferException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.ReadOnlyBufferException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio

