#include "./NotActiveException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	NotActiveException::NotActiveException(QJniObject obj) : java::io::ObjectStreamException(obj) {}
	
	// Constructors
	NotActiveException::NotActiveException()
		: java::io::ObjectStreamException(
			"java.io.NotActiveException",
			"()V"
		) {}
	NotActiveException::NotActiveException(jstring arg0)
		: java::io::ObjectStreamException(
			"java.io.NotActiveException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

