#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER
#define JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicLongFieldUpdater : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newUpdater(jclass arg0, jstring arg1);
		static QAndroidJniObject newUpdater(jclass arg0, const QString &arg1);
		jlong accumulateAndGet(jobject arg0, jlong arg1, __jni_impl::__JniBaseClass arg2);
		jlong addAndGet(jobject arg0, jlong arg1);
		jboolean compareAndSet(jobject arg0, jlong arg1, jlong arg2);
		jlong decrementAndGet(jobject arg0);
		jlong get(jobject arg0);
		jlong getAndAccumulate(jobject arg0, jlong arg1, __jni_impl::__JniBaseClass arg2);
		jlong getAndAdd(jobject arg0, jlong arg1);
		jlong getAndDecrement(jobject arg0);
		jlong getAndIncrement(jobject arg0);
		jlong getAndSet(jobject arg0, jlong arg1);
		jlong getAndUpdate(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jlong incrementAndGet(jobject arg0);
		void lazySet(jobject arg0, jlong arg1);
		void set(jobject arg0, jlong arg1);
		jlong updateAndGet(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jboolean weakCompareAndSet(jobject arg0, jlong arg1, jlong arg2);
	};
} // namespace __jni_impl::java::util::concurrent::atomic

#include "../../../lang/ClassLoader.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void AtomicLongFieldUpdater::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicLongFieldUpdater",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AtomicLongFieldUpdater::newUpdater(jclass arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicLongFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject AtomicLongFieldUpdater::newUpdater(jclass arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicLongFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jlong AtomicLongFieldUpdater::accumulateAndGet(jobject arg0, jlong arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jlong>(
			"accumulateAndGet",
			"(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong AtomicLongFieldUpdater::addAndGet(jobject arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"addAndGet",
			"(Ljava/lang/Object;J)J",
			arg0,
			arg1
		);
	}
	jboolean AtomicLongFieldUpdater::compareAndSet(jobject arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;JJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jlong AtomicLongFieldUpdater::decrementAndGet(jobject arg0)
	{
		return __thiz.callMethod<jlong>(
			"decrementAndGet",
			"(Ljava/lang/Object;)J",
			arg0
		);
	}
	jlong AtomicLongFieldUpdater::get(jobject arg0)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(Ljava/lang/Object;)J",
			arg0
		);
	}
	jlong AtomicLongFieldUpdater::getAndAccumulate(jobject arg0, jlong arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jlong>(
			"getAndAccumulate",
			"(Ljava/lang/Object;JLjava/util/function/LongBinaryOperator;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong AtomicLongFieldUpdater::getAndAdd(jobject arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getAndAdd",
			"(Ljava/lang/Object;J)J",
			arg0,
			arg1
		);
	}
	jlong AtomicLongFieldUpdater::getAndDecrement(jobject arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAndDecrement",
			"(Ljava/lang/Object;)J",
			arg0
		);
	}
	jlong AtomicLongFieldUpdater::getAndIncrement(jobject arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAndIncrement",
			"(Ljava/lang/Object;)J",
			arg0
		);
	}
	jlong AtomicLongFieldUpdater::getAndSet(jobject arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getAndSet",
			"(Ljava/lang/Object;J)J",
			arg0,
			arg1
		);
	}
	jlong AtomicLongFieldUpdater::getAndUpdate(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"getAndUpdate",
			"(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong AtomicLongFieldUpdater::incrementAndGet(jobject arg0)
	{
		return __thiz.callMethod<jlong>(
			"incrementAndGet",
			"(Ljava/lang/Object;)J",
			arg0
		);
	}
	void AtomicLongFieldUpdater::lazySet(jobject arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1
		);
	}
	void AtomicLongFieldUpdater::set(jobject arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;J)V",
			arg0,
			arg1
		);
	}
	jlong AtomicLongFieldUpdater::updateAndGet(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"updateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/LongUnaryOperator;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AtomicLongFieldUpdater::weakCompareAndSet(jobject arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;JJ)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class AtomicLongFieldUpdater : public __jni_impl::java::util::concurrent::atomic::AtomicLongFieldUpdater
	{
	public:
		AtomicLongFieldUpdater(QAndroidJniObject obj) { __thiz = obj; }
		AtomicLongFieldUpdater()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER

