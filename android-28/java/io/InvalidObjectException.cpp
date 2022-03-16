#include "../../JString.hpp"
#include "./InvalidObjectException.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	InvalidObjectException::InvalidObjectException(JString arg0)
		: java::io::ObjectStreamException(
			"java.io.InvalidObjectException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

