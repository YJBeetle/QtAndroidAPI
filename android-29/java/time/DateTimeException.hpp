#pragma once

#ifndef JAVA_TIME_DATETIMEEXCEPTION
#define JAVA_TIME_DATETIMEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace __jni_impl::java::time
{
	class DateTimeException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::time


namespace __jni_impl::java::time
{
	// Fields
	
	// Constructors
	void DateTimeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.DateTimeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DateTimeException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.DateTimeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DateTimeException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.DateTimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void DateTimeException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.DateTimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::time

namespace java::time
{
	class DateTimeException : public __jni_impl::java::time::DateTimeException
	{
	public:
		DateTimeException(QAndroidJniObject obj) { __thiz = obj; }
		DateTimeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		DateTimeException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::time

#endif // JAVA_TIME_DATETIMEEXCEPTION

