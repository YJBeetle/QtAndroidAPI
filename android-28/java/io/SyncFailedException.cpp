#include "../../JString.hpp"
#include "./SyncFailedException.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	SyncFailedException::SyncFailedException(JString arg0)
		: java::io::IOException(
			"java.io.SyncFailedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

