#include "./ConnectException.hpp"

namespace java::net
{
	// Fields
	
	ConnectException::ConnectException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConnectException::ConnectException()
	{
		__thiz = QAndroidJniObject(
			"java.net.ConnectException",
			"()V"
		);
	}
	ConnectException::ConnectException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ConnectException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ConnectException::ConnectException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ConnectException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::net

