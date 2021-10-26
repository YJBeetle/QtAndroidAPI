#pragma once

#ifndef JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION
#define JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../ReflectiveOperationException.hpp"


namespace __jni_impl::java::lang::reflect
{
	class InvocationTargetException : public __jni_impl::java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0, jstring arg1);
		void __constructor(jthrowable arg0, const QString &arg1);
		void __constructor(jthrowable arg0);
		
		// Methods
		jthrowable getCause();
		jthrowable getTargetException();
	};
} // namespace __jni_impl::java::lang::reflect


namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void InvocationTargetException::__constructor(jthrowable arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void InvocationTargetException::__constructor(jthrowable arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void InvocationTargetException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
	jthrowable InvocationTargetException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jthrowable InvocationTargetException::getTargetException()
	{
		return __thiz.callObjectMethod(
			"getTargetException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class InvocationTargetException : public __jni_impl::java::lang::reflect::InvocationTargetException
	{
	public:
		InvocationTargetException(QAndroidJniObject obj) { __thiz = obj; }
		InvocationTargetException(jthrowable arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InvocationTargetException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang::reflect

#endif // JAVA_LANG_REFLECT_INVOCATIONTARGETEXCEPTION

