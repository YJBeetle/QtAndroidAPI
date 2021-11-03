#include "../../JString.hpp"
#include "./SyncFailedException.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	SyncFailedException::SyncFailedException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	SyncFailedException::SyncFailedException(JString arg0)
		: java::io::IOException(
			"java.io.SyncFailedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

