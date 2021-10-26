#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ABSTRACTEXECUTORSERVICE
#define JAVA_UTIL_CONCURRENT_ABSTRACTEXECUTORSERVICE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::java::util::concurrent
{
	class AbstractExecutorService : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject invokeAll(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject invokeAll(__jni_impl::__JniBaseClass arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		jobject invokeAny(__jni_impl::__JniBaseClass arg0);
		jobject invokeAny(__jni_impl::__JniBaseClass arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		QAndroidJniObject submit(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject submit(__jni_impl::__JniBaseClass arg0, jobject arg1);
	};
} // namespace __jni_impl::java::util::concurrent

#include "TimeUnit.hpp"
#include "../ArrayList.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void AbstractExecutorService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.AbstractExecutorService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AbstractExecutorService::invokeAll(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractExecutorService::invokeAll(__jni_impl::__JniBaseClass arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jobject AbstractExecutorService::invokeAny(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject AbstractExecutorService::invokeAny(__jni_impl::__JniBaseClass arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject AbstractExecutorService::submit(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractExecutorService::submit(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class AbstractExecutorService : public __jni_impl::java::util::concurrent::AbstractExecutorService
	{
	public:
		AbstractExecutorService(QAndroidJniObject obj) { __thiz = obj; }
		AbstractExecutorService()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_ABSTRACTEXECUTORSERVICE

