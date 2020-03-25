#pragma once

#ifndef JAVA_UTIL_CONCURRENT_CANCELLATIONEXCEPTION
#define JAVA_UTIL_CONCURRENT_CANCELLATIONEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace __jni_impl::java::util::concurrent
{
	class CancellationException : public __jni_impl::java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util::concurrent


namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void CancellationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CancellationException",
			"()V");
	}
	void CancellationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CancellationException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class CancellationException : public __jni_impl::java::util::concurrent::CancellationException
	{
	public:
		CancellationException(QAndroidJniObject obj) { __thiz = obj; }
		CancellationException()
		{
			__constructor();
		}
		CancellationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_CANCELLATIONEXCEPTION

