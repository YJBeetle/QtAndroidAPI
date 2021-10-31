#include "./CharConversionException.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	CharConversionException::CharConversionException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	CharConversionException::CharConversionException()
		: java::io::IOException(
			"java.io.CharConversionException",
			"()V"
		) {}
	CharConversionException::CharConversionException(jstring arg0)
		: java::io::IOException(
			"java.io.CharConversionException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

