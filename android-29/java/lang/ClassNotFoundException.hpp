#pragma once

#ifndef JAVA_LANG_CLASSNOTFOUNDEXCEPTION
#define JAVA_LANG_CLASSNOTFOUNDEXCEPTION

#include "ReflectiveOperationException.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::lang
{
	class ClassNotFoundException : public __jni_impl::java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
		QAndroidJniObject getException();
	};
} // namespace __jni_impl::java::lang

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void ClassNotFoundException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void ClassNotFoundException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ClassNotFoundException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassNotFoundException",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ClassNotFoundException::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;");
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ClassNotFoundException : public __jni_impl::java::lang::ClassNotFoundException
	{
	public:
		ClassNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
		ClassNotFoundException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ClassNotFoundException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ClassNotFoundException()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_CLASSNOTFOUNDEXCEPTION

