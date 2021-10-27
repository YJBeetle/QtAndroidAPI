#include "./SocketTimeoutException.hpp"

namespace java::net
{
	// Fields
	
	SocketTimeoutException::SocketTimeoutException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SocketTimeoutException::SocketTimeoutException()
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketTimeoutException",
			"()V"
		);
	}
	SocketTimeoutException::SocketTimeoutException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketTimeoutException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SocketTimeoutException::SocketTimeoutException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketTimeoutException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::net

