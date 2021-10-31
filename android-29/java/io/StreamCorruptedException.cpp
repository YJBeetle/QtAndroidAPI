#include "./StreamCorruptedException.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	StreamCorruptedException::StreamCorruptedException(QAndroidJniObject obj) : java::io::ObjectStreamException(obj) {}
	
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

