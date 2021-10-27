#include "./SocketException.hpp"

namespace java::net
{
	// Fields
	
	SocketException::SocketException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SocketException::SocketException()
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketException",
			"()V"
		);
	}
	SocketException::SocketException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SocketException::SocketException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::net

