#include "./InvalidMarkException.hpp"

namespace java::nio
{
	// Fields
	
	InvalidMarkException::InvalidMarkException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvalidMarkException::InvalidMarkException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.InvalidMarkException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio

