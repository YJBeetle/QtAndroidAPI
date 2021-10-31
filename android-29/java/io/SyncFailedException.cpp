#include "./SyncFailedException.hpp"

namespace java::io
{
	// Fields
	
	SyncFailedException::SyncFailedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SyncFailedException::SyncFailedException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.SyncFailedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::io

