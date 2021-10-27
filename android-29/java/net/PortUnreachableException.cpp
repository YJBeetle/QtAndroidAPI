#include "./PortUnreachableException.hpp"

namespace java::net
{
	// Fields
	
	PortUnreachableException::PortUnreachableException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PortUnreachableException::PortUnreachableException()
	{
		__thiz = QAndroidJniObject(
			"java.net.PortUnreachableException",
			"()V"
		);
	}
	PortUnreachableException::PortUnreachableException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.PortUnreachableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	PortUnreachableException::PortUnreachableException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.PortUnreachableException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::net

