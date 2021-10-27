#include "./LambdaConversionException.hpp"

namespace java::lang::invoke
{
	// Fields
	
	LambdaConversionException::LambdaConversionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LambdaConversionException::LambdaConversionException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"()V"
		);
	}
	LambdaConversionException::LambdaConversionException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	LambdaConversionException::LambdaConversionException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	LambdaConversionException::LambdaConversionException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	LambdaConversionException::LambdaConversionException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	LambdaConversionException::LambdaConversionException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	LambdaConversionException::LambdaConversionException(jstring &arg0, jthrowable &arg1, jboolean &arg2, jboolean &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	LambdaConversionException::LambdaConversionException(const QString &arg0, jthrowable &arg1, jboolean &arg2, jboolean &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::lang::invoke

