#include "./SSLException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLException::SSLException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLException::SSLException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SSLException::SSLException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SSLException::SSLException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SSLException::SSLException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SSLException::SSLException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace javax::net::ssl

