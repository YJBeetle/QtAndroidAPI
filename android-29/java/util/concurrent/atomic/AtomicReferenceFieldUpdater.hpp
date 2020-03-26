#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER
#define JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicReferenceFieldUpdater : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject get(jobject arg0);
		void set(jobject arg0, jobject arg1);
		jboolean compareAndSet(jobject arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSet(jobject arg0, jobject arg1, jobject arg2);
		jobject getAndSet(jobject arg0, jobject arg1);
		void lazySet(jobject arg0, jobject arg1);
		jobject getAndUpdate(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject updateAndGet(jobject arg0, __jni_impl::__JniBaseClass arg1);
		jobject getAndAccumulate(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		jobject accumulateAndGet(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject newUpdater(jclass arg0, jclass arg1, jstring arg2);
	};
} // namespace __jni_impl::java::util::concurrent::atomic


namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void AtomicReferenceFieldUpdater::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicReferenceFieldUpdater",
			"(V)V");
	}
	
	// Methods
	jobject AtomicReferenceFieldUpdater::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void AtomicReferenceFieldUpdater::set(jobject arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean AtomicReferenceFieldUpdater::compareAndSet(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicReferenceFieldUpdater::weakCompareAndSet(jobject arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject AtomicReferenceFieldUpdater::getAndSet(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void AtomicReferenceFieldUpdater::lazySet(jobject arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jobject AtomicReferenceFieldUpdater::getAndUpdate(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getAndUpdate",
			"(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject AtomicReferenceFieldUpdater::updateAndGet(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"updateAndGet",
			"(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject AtomicReferenceFieldUpdater::getAndAccumulate(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"getAndAccumulate",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	jobject AtomicReferenceFieldUpdater::accumulateAndGet(jobject arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"accumulateAndGet",
			"(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject AtomicReferenceFieldUpdater::newUpdater(jclass arg0, jclass arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.atomic.AtomicReferenceFieldUpdater",
			"newUpdater",
			"(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater;",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class AtomicReferenceFieldUpdater : public __jni_impl::java::util::concurrent::atomic::AtomicReferenceFieldUpdater
	{
	public:
		AtomicReferenceFieldUpdater(QAndroidJniObject obj) { __thiz = obj; }
		AtomicReferenceFieldUpdater()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEFIELDUPDATER

