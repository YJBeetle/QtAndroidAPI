#include "./UnsupportedOperationException.hpp"

namespace java::lang
{
	// Fields
	
	UnsupportedOperationException::UnsupportedOperationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnsupportedOperationException::UnsupportedOperationException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"()V"
		);
	}
	UnsupportedOperationException::UnsupportedOperationException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UnsupportedOperationException::UnsupportedOperationException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	UnsupportedOperationException::UnsupportedOperationException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	UnsupportedOperationException::UnsupportedOperationException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	UnsupportedOperationException::UnsupportedOperationException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

