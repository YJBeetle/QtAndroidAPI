#pragma once

#ifndef JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION
#define JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"
#include "RuntimeException.hpp"
#include "IllegalArgumentException.hpp"


namespace __jni_impl::java::lang
{
	class IllegalThreadStateException : public __jni_impl::java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void IllegalThreadStateException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalThreadStateException",
			"()V"
		);
	}
	void IllegalThreadStateException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalThreadStateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IllegalThreadStateException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalThreadStateException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class IllegalThreadStateException : public __jni_impl::java::lang::IllegalThreadStateException
	{
	public:
		IllegalThreadStateException(QAndroidJniObject obj) { __thiz = obj; }
		IllegalThreadStateException()
		{
			__constructor();
		}
		IllegalThreadStateException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ILLEGALTHREADSTATEEXCEPTION

