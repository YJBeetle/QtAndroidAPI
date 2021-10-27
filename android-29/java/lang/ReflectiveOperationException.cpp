#include "./ReflectiveOperationException.hpp"

namespace java::lang
{
	// Fields
	
	ReflectiveOperationException::ReflectiveOperationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReflectiveOperationException::ReflectiveOperationException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"()V"
		);
	}
	ReflectiveOperationException::ReflectiveOperationException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ReflectiveOperationException::ReflectiveOperationException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	ReflectiveOperationException::ReflectiveOperationException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	ReflectiveOperationException::ReflectiveOperationException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	ReflectiveOperationException::ReflectiveOperationException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

