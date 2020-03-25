#pragma once

#ifndef JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION
#define JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace __jni_impl::java::util
{
	class ConcurrentModificationException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void ConcurrentModificationException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void ConcurrentModificationException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void ConcurrentModificationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ConcurrentModificationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.ConcurrentModificationException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::util

namespace java::util
{
	class ConcurrentModificationException : public __jni_impl::java::util::ConcurrentModificationException
	{
	public:
		ConcurrentModificationException(QAndroidJniObject obj) { __thiz = obj; }
		ConcurrentModificationException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ConcurrentModificationException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		ConcurrentModificationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ConcurrentModificationException()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION

