#include "./SSLException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLException::SSLException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	SSLException::SSLException(jstring arg0)
		: java::io::IOException(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SSLException::SSLException(jthrowable arg0)
		: java::io::IOException(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	SSLException::SSLException(jstring arg0, jthrowable arg1)
		: java::io::IOException(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace javax::net::ssl

