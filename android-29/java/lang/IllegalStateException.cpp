#include "./IllegalStateException.hpp"

namespace java::lang
{
	// Fields
	
	IllegalStateException::IllegalStateException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalStateException::IllegalStateException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalStateException",
			"()V"
		);
	}
	IllegalStateException::IllegalStateException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IllegalStateException::IllegalStateException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	IllegalStateException::IllegalStateException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalStateException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	IllegalStateException::IllegalStateException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	IllegalStateException::IllegalStateException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

