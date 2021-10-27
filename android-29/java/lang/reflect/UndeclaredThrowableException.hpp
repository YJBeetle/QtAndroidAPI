#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
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
		void __constructor(jthrowable arg0, const QString &arg1);
		
		// Methods
		jthrowable getUndeclaredThrowable();
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
			arg0
		);
	}
	void UndeclaredThrowableException::__constructor(jthrowable arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void UndeclaredThrowableException::__constructor(jthrowable arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jthrowable UndeclaredThrowableException::getUndeclaredThrowable()
	{
		return __thiz.callObjectMethod(
			"getUndeclaredThrowable",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
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

