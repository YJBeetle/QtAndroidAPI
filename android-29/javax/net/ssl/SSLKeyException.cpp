#include "./SSLKeyException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLKeyException::SSLKeyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLKeyException::SSLKeyException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLKeyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::net::ssl

