#pragma once

#ifndef JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_DISCARDPOLICY
#define JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_DISCARDPOLICY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class ThreadPoolExecutor;
}

namespace __jni_impl::java::util::concurrent
{
	class ThreadPoolExecutor_DiscardPolicy : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void rejectedExecution(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::concurrent::ThreadPoolExecutor arg1);
	};
} // namespace __jni_impl::java::util::concurrent

#include "ThreadPoolExecutor.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void ThreadPoolExecutor_DiscardPolicy::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ThreadPoolExecutor$DiscardPolicy",
			"()V");
	}
	
	// Methods
	void ThreadPoolExecutor_DiscardPolicy::rejectedExecution(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::concurrent::ThreadPoolExecutor arg1)
	{
		__thiz.callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class ThreadPoolExecutor_DiscardPolicy : public __jni_impl::java::util::concurrent::ThreadPoolExecutor_DiscardPolicy
	{
	public:
		ThreadPoolExecutor_DiscardPolicy(QAndroidJniObject obj) { __thiz = obj; }
		ThreadPoolExecutor_DiscardPolicy()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_THREADPOOLEXECUTOR_DISCARDPOLICY

