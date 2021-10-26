#pragma once

#ifndef JAVA_UTIL_TOOMANYLISTENERSEXCEPTION
#define JAVA_UTIL_TOOMANYLISTENERSEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace __jni_impl::java::util
{
	class TooManyListenersException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void TooManyListenersException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.TooManyListenersException",
			"()V"
		);
	}
	void TooManyListenersException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.TooManyListenersException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TooManyListenersException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.TooManyListenersException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::util

namespace java::util
{
	class TooManyListenersException : public __jni_impl::java::util::TooManyListenersException
	{
	public:
		TooManyListenersException(QAndroidJniObject obj) { __thiz = obj; }
		TooManyListenersException()
		{
			__constructor();
		}
		TooManyListenersException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_TOOMANYLISTENERSEXCEPTION

