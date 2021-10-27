#include "./SSLProtocolException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLProtocolException::SSLProtocolException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLProtocolException::SSLProtocolException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLProtocolException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SSLProtocolException::SSLProtocolException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLProtocolException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace javax::net::ssl

