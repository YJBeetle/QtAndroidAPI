#include "./ProtocolException.hpp"

namespace java::net
{
	// Fields
	
	ProtocolException::ProtocolException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ProtocolException::ProtocolException()
	{
		__thiz = QAndroidJniObject(
			"java.net.ProtocolException",
			"()V"
		);
	}
	ProtocolException::ProtocolException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ProtocolException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ProtocolException::ProtocolException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ProtocolException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::net

