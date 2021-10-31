#include "./InvalidObjectException.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidObjectException::InvalidObjectException(QAndroidJniObject obj) : java::io::ObjectStreamException(obj) {}
	
	// Constructors
	InvalidObjectException::InvalidObjectException(jstring arg0)
		: java::io::ObjectStreamException(
			"java.io.InvalidObjectException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

