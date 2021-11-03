#include "../../../JString.hpp"
#include "./SSLProtocolException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	SSLProtocolException::SSLProtocolException(QJniObject obj) : javax::net::ssl::SSLException(obj) {}
	
	// Constructors
	SSLProtocolException::SSLProtocolException(JString arg0)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLProtocolException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

