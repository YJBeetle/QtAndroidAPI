#include "./RuntimeException.hpp"

namespace java::lang
{
	// Fields
	
	RuntimeException::RuntimeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RuntimeException::RuntimeException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"()V"
		);
	}
	RuntimeException::RuntimeException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	RuntimeException::RuntimeException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	RuntimeException::RuntimeException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	RuntimeException::RuntimeException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	RuntimeException::RuntimeException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

