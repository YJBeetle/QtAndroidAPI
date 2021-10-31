#include "./EOFException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	EOFException::EOFException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	EOFException::EOFException()
		: java::io::IOException(
			"java.io.EOFException",
			"()V"
		) {}
	EOFException::EOFException(jstring arg0)
		: java::io::IOException(
			"java.io.EOFException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

