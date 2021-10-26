#pragma once

#ifndef JAVA_LANG_REFLECTIVEOPERATIONEXCEPTION
#define JAVA_LANG_REFLECTIVEOPERATIONEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"


namespace __jni_impl::java::lang
{
	class ReflectiveOperationException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void ReflectiveOperationException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void ReflectiveOperationException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void ReflectiveOperationException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void ReflectiveOperationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ReflectiveOperationException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ReflectiveOperationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ReflectiveOperationException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ReflectiveOperationException : public __jni_impl::java::lang::ReflectiveOperationException
	{
	public:
		ReflectiveOperationException(QAndroidJniObject obj) { __thiz = obj; }
		ReflectiveOperationException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		ReflectiveOperationException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ReflectiveOperationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ReflectiveOperationException()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_REFLECTIVEOPERATIONEXCEPTION

