#include "../../JString.hpp"
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
	StreamCorruptedException::StreamCorruptedException(JString arg0)
		: java::io::ObjectStreamException(
			"java.io.StreamCorruptedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

