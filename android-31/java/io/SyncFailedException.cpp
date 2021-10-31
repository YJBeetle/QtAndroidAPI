#include "./SyncFailedException.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	SyncFailedException::SyncFailedException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	SyncFailedException::SyncFailedException(jstring arg0)
		: java::io::IOException(
			"java.io.SyncFailedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

