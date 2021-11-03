#include "../../JString.hpp"
#include "./InvalidObjectException.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidObjectException::InvalidObjectException(QAndroidJniObject obj) : java::io::ObjectStreamException(obj) {}
	
	// Constructors
	InvalidObjectException::InvalidObjectException(JString arg0)
		: java::io::ObjectStreamException(
			"java.io.InvalidObjectException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

