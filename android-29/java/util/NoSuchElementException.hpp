#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace __jni_impl::java::util
{
	class NoSuchElementException : public __jni_impl::java::lang::RuntimeException
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
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void NoSuchElementException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"()V"
		);
	}
	void NoSuchElementException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NoSuchElementException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void NoSuchElementException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void NoSuchElementException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void NoSuchElementException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::util

namespace java::util
{
	class NoSuchElementException : public __jni_impl::java::util::NoSuchElementException
	{
	public:
		NoSuchElementException(QAndroidJniObject obj) { __thiz = obj; }
		NoSuchElementException()
		{
			__constructor();
		}
		NoSuchElementException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		NoSuchElementException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		NoSuchElementException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

