#include "../../JString.hpp"
#include "./CharConversionException.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	CharConversionException::CharConversionException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	CharConversionException::CharConversionException()
		: java::io::IOException(
			"java.io.CharConversionException",
			"()V"
		) {}
	CharConversionException::CharConversionException(JString arg0)
		: java::io::IOException(
			"java.io.CharConversionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

