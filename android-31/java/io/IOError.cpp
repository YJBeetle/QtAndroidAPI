#include "../../JThrowable.hpp"
#include "./IOError.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	IOError::IOError(QAndroidJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	IOError::IOError(JThrowable arg0)
		: java::lang::Error(
			"java.io.IOError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::io

