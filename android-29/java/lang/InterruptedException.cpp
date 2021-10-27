#include "./InterruptedException.hpp"

namespace java::lang
{
	// Fields
	
	InterruptedException::InterruptedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InterruptedException::InterruptedException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.InterruptedException",
			"()V"
		);
	}
	InterruptedException::InterruptedException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InterruptedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InterruptedException::InterruptedException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InterruptedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

