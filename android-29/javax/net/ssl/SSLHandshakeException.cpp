#include "../../../JString.hpp"
#include "./SSLHandshakeException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	SSLHandshakeException::SSLHandshakeException(QJniObject obj) : javax::net::ssl::SSLException(obj) {}
	
	// Constructors
	SSLHandshakeException::SSLHandshakeException(JString arg0)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLHandshakeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

