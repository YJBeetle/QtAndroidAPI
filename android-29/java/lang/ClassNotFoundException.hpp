#pragma once

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
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
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
		jthrowable getException();
	};
} // namespace __jni_impl::java::lang

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void ClassNotFoundException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassNotFoundException",
			"()V"
		);
	}
	void ClassNotFoundException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ClassNotFoundException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ClassNotFoundException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void ClassNotFoundException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jthrowable ClassNotFoundException::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ClassNotFoundException : public __jni_impl::java::lang::ClassNotFoundException
	{
	public:
		ClassNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
		ClassNotFoundException()
		{
			__constructor();
		}
		ClassNotFoundException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ClassNotFoundException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang

