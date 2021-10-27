#include "./BindException.hpp"

namespace java::net
{
	// Fields
	
	BindException::BindException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BindException::BindException()
	{
		__thiz = QAndroidJniObject(
			"java.net.BindException",
			"()V"
		);
	}
	BindException::BindException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.BindException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	BindException::BindException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.BindException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::net

