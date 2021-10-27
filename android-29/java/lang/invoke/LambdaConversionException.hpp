#pragma once

#ifndef JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION
#define JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"


namespace __jni_impl::java::lang::invoke
{
	class LambdaConversionException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		void __constructor(jstring arg0, jthrowable arg1, jboolean arg2, jboolean arg3);
		void __constructor(const QString &arg0, jthrowable arg1, jboolean arg2, jboolean arg3);
		
		// Methods
	};
} // namespace __jni_impl::java::lang::invoke


namespace __jni_impl::java::lang::invoke
{
	// Fields
	
	// Constructors
	void LambdaConversionException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"()V"
		);
	}
	void LambdaConversionException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LambdaConversionException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LambdaConversionException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void LambdaConversionException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void LambdaConversionException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.LambdaConversionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void LambdaConversionException::__constructor(jstring arg0, jthrowable arg1, jboolean arg2, jboolean arg3)
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
	void LambdaConversionException::__constructor(const QString &arg0, jthrowable arg1, jboolean arg2, jboolean arg3)
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
} // namespace __jni_impl::java::lang::invoke

namespace java::lang::invoke
{
	class LambdaConversionException : public __jni_impl::java::lang::invoke::LambdaConversionException
	{
	public:
		LambdaConversionException(QAndroidJniObject obj) { __thiz = obj; }
		LambdaConversionException()
		{
			__constructor();
		}
		LambdaConversionException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		LambdaConversionException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		LambdaConversionException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		LambdaConversionException(jstring arg0, jthrowable arg1, jboolean arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::lang::invoke

#endif // JAVA_LANG_INVOKE_LAMBDACONVERSIONEXCEPTION

