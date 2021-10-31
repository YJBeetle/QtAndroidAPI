#include "./IOError.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	IOError::IOError(QAndroidJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	IOError::IOError(jthrowable arg0)
		: java::lang::Error(
			"java.io.IOError",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

