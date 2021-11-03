#include "../../JString.hpp"
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
	UTFDataFormatException::UTFDataFormatException(JString arg0)
		: java::io::IOException(
			"java.io.UTFDataFormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

