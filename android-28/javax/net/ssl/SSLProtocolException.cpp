#include "../../../JString.hpp"
#include "./SSLProtocolException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	SSLProtocolException::SSLProtocolException(JString arg0)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLProtocolException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

