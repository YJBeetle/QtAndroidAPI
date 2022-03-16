#include "../../JString.hpp"
#include "./InterruptedIOException.hpp"

namespace java::io
{
	// Fields
	jint InterruptedIOException::bytesTransferred()
	{
		return getField<jint>(
			"bytesTransferred"
		);
	}
	
	// Constructors
	InterruptedIOException::InterruptedIOException()
		: java::io::IOException(
			"java.io.InterruptedIOException",
			"()V"
		) {}
	InterruptedIOException::InterruptedIOException(JString arg0)
		: java::io::IOException(
			"java.io.InterruptedIOException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

