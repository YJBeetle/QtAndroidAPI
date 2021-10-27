#include "./SSLKeyException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLKeyException::SSLKeyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLKeyException::SSLKeyException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLKeyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SSLKeyException::SSLKeyException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLKeyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace javax::net::ssl

