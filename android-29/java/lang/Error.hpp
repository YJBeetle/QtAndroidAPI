#pragma once

#ifndef JAVA_LANG_ERROR
#define JAVA_LANG_ERROR

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class Error : public __JniBaseClass
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
	void Error::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Error",
			"()V"
		);
	}
	void Error::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Error",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Error::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Error",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Error::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Error",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void Error::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Error",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void Error::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Error",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Error : public __jni_impl::java::lang::Error
	{
	public:
		Error(QAndroidJniObject obj) { __thiz = obj; }
		Error()
		{
			__constructor();
		}
		Error(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Error(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		Error(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_ERROR

