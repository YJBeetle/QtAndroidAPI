#include "./UTFDataFormatException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	UTFDataFormatException::UTFDataFormatException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	UTFDataFormatException::UTFDataFormatException()
		: java::io::IOException(
			"java.io.UTFDataFormatException",
			"()V"
		) {}
	UTFDataFormatException::UTFDataFormatException(jstring arg0)
		: java::io::IOException(
			"java.io.UTFDataFormatException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

