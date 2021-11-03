#include "../../JString.hpp"
#include "./InvalidObjectException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	InvalidObjectException::InvalidObjectException(QJniObject obj) : java::io::ObjectStreamException(obj) {}
	
	// Constructors
	InvalidObjectException::InvalidObjectException(JString arg0)
		: java::io::ObjectStreamException(
			"java.io.InvalidObjectException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

