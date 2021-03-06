#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERFIELDUPDATER
#define JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERFIELDUPDATER

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicIntegerFieldUpdater : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint get(jobject arg0);
		void set(jobject arg0, jint arg1);
		jboolean compareAndSet(jobject arg0, jint arg1, jint arg2);
		jboolean weakCompareAndSet(jobject arg0, jint arg1, jint arg2);
		jint getAndSet(jobject arg0, jint arg1);
		jint getAndAdd(jobject arg0, jint arg1);
		void lazySet(jobject arg0, jint arg1);
		jint getAndIncrement(jobject arg0);
		jint getAndDecrement(jobject arg0);
		jint incrementAndGet(jobject arg0);
		jint decrementAndGet(jobject arg0);
		jint addAndGet(jobject arg0, jint arg1);
		jint getAndUpdate(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jint updateAndGet(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jint getAndAccumulate(jobject arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		jint accumulateAndGet(jobject arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject newUpdater(jclass arg0, jstring arg1);
	};
} // namespace __jni_impl::java::util::concurrent::atomic


namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void AtomicIntegerFieldUpdater::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicIntegerFieldUpdater",
			"(V)V");
	}
	
	// Methods
	jint AtomicIntegerFieldUpdater::get(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	void AtomicIntegerFieldUpdater::set(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	jboolean AtomicIntegerFieldUpdater::compareAndSet(jobject arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;II)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicIntegerFieldUpdater::weakCompareAndSet(jobject arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;II)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jint AtomicIntegerFieldUpdater::getAndSet(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndSet",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerFieldUpdater::getAndAdd(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndAdd",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	void AtomicIntegerFieldUpdater::lazySet(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerFieldUpdater::getAndIncrement(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndIncrement",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint AtomicIntegerFieldUpdater::getAndDecrement(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getAndDecrement",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint AtomicIntegerFieldUpdater::incrementAndGet(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"incrementAndGet",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint AtomicIntegerFieldUpdater::decrementAndGet(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"decrementAndGet",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint AtomicIntegerFieldUpdater::addAndGet(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"addAndGet",
			"(Ljava/lang/Object;I)I",
			arg0,
			arg1
		);
	}
	jint AtomicIntegerFieldUpdater::getAndUpdate(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"getAndUpdate",
			"(Ljava/lang/Object;Ljava/util/function/IntUnaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint AtomicIntegerFieldUpdater::updateAndGet(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"updateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/IntUnaryOperator;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint AtomicIntegerFieldUpdater::getAndAccumulate(jobject arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jint>(
			"getAndAccumulate",
			"(Ljava/lang/Object;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint AtomicIntegerFieldUpdater::accumulateAndGet(jobject arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jint>(
			"accumulateAndGet",
			"(Ljava/lang/Object;ILjava/util/function/IntBinaryOperator;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject AtomicIntegerFieldUpdater::newUpdater(jclass arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicIntegerFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicIntegerFieldUpdater;",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class AtomicIntegerFieldUpdater : public __jni_impl::java::util::concurrent::atomic::AtomicIntegerFieldUpdater
	{
	public:
		AtomicIntegerFieldUpdater(QAndroidJniObject obj) { __thiz = obj; }
		AtomicIntegerFieldUpdater()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERFIELDUPDATER

