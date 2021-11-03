#include "../../../JString.hpp"
#include "./SSLKeyException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	SSLKeyException::SSLKeyException(QJniObject obj) : javax::net::ssl::SSLException(obj) {}
	
	// Constructors
	SSLKeyException::SSLKeyException(JString arg0)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLKeyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

