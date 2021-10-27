#pragma once

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"


namespace __jni_impl::java::lang
{
	class UnsupportedOperationException : public __jni_impl::java::lang::RuntimeException
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
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void UnsupportedOperationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"()V"
		);
	}
	void UnsupportedOperationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UnsupportedOperationException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void UnsupportedOperationException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void UnsupportedOperationException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void UnsupportedOperationException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class UnsupportedOperationException : public __jni_impl::java::lang::UnsupportedOperationException
	{
	public:
		UnsupportedOperationException(QAndroidJniObject obj) { __thiz = obj; }
		UnsupportedOperationException()
		{
			__constructor();
		}
		UnsupportedOperationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		UnsupportedOperationException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		UnsupportedOperationException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang

