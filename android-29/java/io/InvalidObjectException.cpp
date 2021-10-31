#include "./InvalidObjectException.hpp"

namespace java::io
{
	// Fields
	
	InvalidObjectException::InvalidObjectException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvalidObjectException::InvalidObjectException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidObjectException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::io

