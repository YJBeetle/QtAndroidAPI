#include "./SSLPermission.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLPermission::SSLPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
	
	// Constructors
	SSLPermission::SSLPermission(jstring arg0)
		: java::security::BasicPermission(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SSLPermission::SSLPermission(jstring arg0, jstring arg1)
		: java::security::BasicPermission(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace javax::net::ssl

