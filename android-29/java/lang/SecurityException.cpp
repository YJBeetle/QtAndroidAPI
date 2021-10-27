#include "./SecurityException.hpp"

namespace java::lang
{
	// Fields
	
	SecurityException::SecurityException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SecurityException::SecurityException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"()V"
		);
	}
	SecurityException::SecurityException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SecurityException::SecurityException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SecurityException::SecurityException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	SecurityException::SecurityException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	SecurityException::SecurityException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

