#pragma once

#ifndef JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT
#define JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	class AbstractQueuedSynchronizer;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::java::util::concurrent::locks
{
	class AbstractQueuedSynchronizer_ConditionObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer arg0);
		
		// Methods
		void signal();
		jboolean await(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		void await();
		void awaitUninterruptibly();
		jlong awaitNanos(jlong arg0);
		jboolean awaitUntil(__jni_impl::java::util::Date arg0);
		void signalAll();
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "AbstractQueuedSynchronizer.hpp"
#include "../TimeUnit.hpp"
#include "../../Date.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void AbstractQueuedSynchronizer_ConditionObject::__constructor(__jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.AbstractQueuedSynchronizer$ConditionObject",
			"(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void AbstractQueuedSynchronizer_ConditionObject::signal()
	{
		__thiz.callMethod<void>(
			"signal",
			"()V"
		);
	}
	jboolean AbstractQueuedSynchronizer_ConditionObject::await(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AbstractQueuedSynchronizer_ConditionObject::await()
	{
		__thiz.callMethod<void>(
			"await",
			"()V"
		);
	}
	void AbstractQueuedSynchronizer_ConditionObject::awaitUninterruptibly()
	{
		__thiz.callMethod<void>(
			"awaitUninterruptibly",
			"()V"
		);
	}
	jlong AbstractQueuedSynchronizer_ConditionObject::awaitNanos(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"awaitNanos",
			"(J)J",
			arg0
		);
	}
	jboolean AbstractQueuedSynchronizer_ConditionObject::awaitUntil(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"awaitUntil",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	void AbstractQueuedSynchronizer_ConditionObject::signalAll()
	{
		__thiz.callMethod<void>(
			"signalAll",
			"()V"
		);
	}
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class AbstractQueuedSynchronizer_ConditionObject : public __jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject
	{
	public:
		AbstractQueuedSynchronizer_ConditionObject(QAndroidJniObject obj) { __thiz = obj; }
		AbstractQueuedSynchronizer_ConditionObject(__jni_impl::java::util::concurrent::locks::AbstractQueuedSynchronizer arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent::locks

#endif // JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT

