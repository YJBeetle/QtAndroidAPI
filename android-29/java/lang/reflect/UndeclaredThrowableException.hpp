#pragma once

#ifndef JAVA_LANG_REFLECT_UNDECLAREDTHROWABLEEXCEPTION
#define JAVA_LANG_REFLECT_UNDECLAREDTHROWABLEEXCEPTION

#include "../RuntimeException.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::lang::reflect
{
	class UndeclaredThrowableException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jthrowable arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject getUndeclaredThrowable();
	};
} // namespace __jni_impl::java::lang::reflect

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void UndeclaredThrowableException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void UndeclaredThrowableException::__constructor(jthrowable arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject UndeclaredThrowableException::getUndeclaredThrowable()
	{
		return __thiz.callObjectMethod(
			"getUndeclaredThrowable",
			"()Ljava/lang/Throwable;");
	}
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class UndeclaredThrowableException : public __jni_impl::java::lang::reflect::UndeclaredThrowableException
	{
	public:
		UndeclaredThrowableException(QAndroidJniObject obj) { __thiz = obj; }
		UndeclaredThrowableException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		UndeclaredThrowableException(jthrowable arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang::reflect

#endif // JAVA_LANG_REFLECT_UNDECLAREDTHROWABLEEXCEPTION

