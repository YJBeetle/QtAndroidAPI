#include "./StreamCorruptedException.hpp"

namespace java::io
{
	// Fields
	
	StreamCorruptedException::StreamCorruptedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StreamCorruptedException::StreamCorruptedException()
	{
		__thiz = QAndroidJniObject(
			"java.io.StreamCorruptedException",
			"()V"
		);
	}
	StreamCorruptedException::StreamCorruptedException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StreamCorruptedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::io

