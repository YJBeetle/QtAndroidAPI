#include "../../JString.hpp"
#include "./UnsupportedEncodingException.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	UnsupportedEncodingException::UnsupportedEncodingException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	UnsupportedEncodingException::UnsupportedEncodingException()
		: java::io::IOException(
			"java.io.UnsupportedEncodingException",
			"()V"
		) {}
	UnsupportedEncodingException::UnsupportedEncodingException(JString arg0)
		: java::io::IOException(
			"java.io.UnsupportedEncodingException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

