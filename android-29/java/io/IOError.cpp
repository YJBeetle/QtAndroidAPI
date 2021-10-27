#include "./IOError.hpp"

namespace java::io
{
	// Fields
	
	IOError::IOError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IOError::IOError(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.IOError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::io

