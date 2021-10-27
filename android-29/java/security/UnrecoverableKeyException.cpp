#include "./UnrecoverableKeyException.hpp"

namespace java::security
{
	// Fields
	
	UnrecoverableKeyException::UnrecoverableKeyException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnrecoverableKeyException::UnrecoverableKeyException()
	{
		__thiz = QAndroidJniObject(
			"java.security.UnrecoverableKeyException",
			"()V"
		);
	}
	UnrecoverableKeyException::UnrecoverableKeyException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.UnrecoverableKeyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UnrecoverableKeyException::UnrecoverableKeyException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.UnrecoverableKeyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::security

