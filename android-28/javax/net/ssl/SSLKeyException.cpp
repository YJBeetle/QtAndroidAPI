#include "./SSLKeyException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	SSLKeyException::SSLKeyException(QJniObject obj) : javax::net::ssl::SSLException(obj) {}
	
	// Constructors
	SSLKeyException::SSLKeyException(jstring arg0)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLKeyException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::net::ssl

