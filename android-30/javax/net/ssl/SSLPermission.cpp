#include "../../../JString.hpp"
#include "./SSLPermission.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	SSLPermission::SSLPermission(JString arg0)
		: java::security::BasicPermission(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SSLPermission::SSLPermission(JString arg0, JString arg1)
		: java::security::BasicPermission(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

