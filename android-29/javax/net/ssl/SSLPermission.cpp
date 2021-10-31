#include "./SSLPermission.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLPermission::SSLPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLPermission::SSLPermission(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SSLPermission::SSLPermission(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace javax::net::ssl

