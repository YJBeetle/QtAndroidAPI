#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SSLException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	SSLException::SSLException(JString arg0)
		: java::io::IOException(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SSLException::SSLException(JThrowable arg0)
		: java::io::IOException(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SSLException::SSLException(JString arg0, JThrowable arg1)
		: java::io::IOException(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

