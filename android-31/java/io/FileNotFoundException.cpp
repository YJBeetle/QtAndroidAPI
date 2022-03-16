#include "../../JString.hpp"
#include "./FileNotFoundException.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	FileNotFoundException::FileNotFoundException()
		: java::io::IOException(
			"java.io.FileNotFoundException",
			"()V"
		) {}
	FileNotFoundException::FileNotFoundException(JString arg0)
		: java::io::IOException(
			"java.io.FileNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

