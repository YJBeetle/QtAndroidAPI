#include "../../../JString.hpp"
#include "./SSLKeyException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	SSLKeyException::SSLKeyException(JString arg0)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLKeyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

