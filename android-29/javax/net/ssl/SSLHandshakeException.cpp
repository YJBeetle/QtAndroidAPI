#include "./SSLHandshakeException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLHandshakeException::SSLHandshakeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLHandshakeException::SSLHandshakeException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLHandshakeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::net::ssl

