#include "./StreamCorruptedException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	StreamCorruptedException::StreamCorruptedException(QJniObject obj) : java::io::ObjectStreamException(obj) {}
	
	// Constructors
	StreamCorruptedException::StreamCorruptedException()
		: java::io::ObjectStreamException(
			"java.io.StreamCorruptedException",
			"()V"
		) {}
	StreamCorruptedException::StreamCorruptedException(jstring arg0)
		: java::io::ObjectStreamException(
			"java.io.StreamCorruptedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

