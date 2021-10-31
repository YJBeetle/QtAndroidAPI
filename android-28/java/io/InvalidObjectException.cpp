#include "./InvalidObjectException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	InvalidObjectException::InvalidObjectException(QJniObject obj) : java::io::ObjectStreamException(obj) {}
	
	// Constructors
	InvalidObjectException::InvalidObjectException(jstring arg0)
		: java::io::ObjectStreamException(
			"java.io.InvalidObjectException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

