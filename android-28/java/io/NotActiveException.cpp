#include "../../JString.hpp"
#include "./NotActiveException.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	NotActiveException::NotActiveException()
		: java::io::ObjectStreamException(
			"java.io.NotActiveException",
			"()V"
		) {}
	NotActiveException::NotActiveException(JString arg0)
		: java::io::ObjectStreamException(
			"java.io.NotActiveException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

