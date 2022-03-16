#include "../../JString.hpp"
#include "./StreamCorruptedException.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	StreamCorruptedException::StreamCorruptedException()
		: java::io::ObjectStreamException(
			"java.io.StreamCorruptedException",
			"()V"
		) {}
	StreamCorruptedException::StreamCorruptedException(JString arg0)
		: java::io::ObjectStreamException(
			"java.io.StreamCorruptedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

