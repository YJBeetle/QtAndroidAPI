#include "./FileNotFoundException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	FileNotFoundException::FileNotFoundException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	FileNotFoundException::FileNotFoundException()
		: java::io::IOException(
			"java.io.FileNotFoundException",
			"()V"
		) {}
	FileNotFoundException::FileNotFoundException(jstring arg0)
		: java::io::IOException(
			"java.io.FileNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

