#include "./UnsatisfiedLinkError.hpp"

namespace java::lang
{
	// Fields
	
	UnsatisfiedLinkError::UnsatisfiedLinkError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnsatisfiedLinkError::UnsatisfiedLinkError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsatisfiedLinkError",
			"()V"
		);
	}
	UnsatisfiedLinkError::UnsatisfiedLinkError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsatisfiedLinkError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UnsatisfiedLinkError::UnsatisfiedLinkError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsatisfiedLinkError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

