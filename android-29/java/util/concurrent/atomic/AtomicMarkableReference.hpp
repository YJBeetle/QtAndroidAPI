#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE
#define JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicMarkableReference : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jobject arg0, jboolean arg1);
		
		// Methods
		jboolean attemptMark(jobject arg0, jboolean arg1);
		jboolean compareAndSet(jobject arg0, jobject arg1, jboolean arg2, jboolean arg3);
		jobject get(jbooleanArray arg0);
		jobject getReference();
		jboolean isMarked();
		void set(jobject arg0, jboolean arg1);
		jboolean weakCompareAndSet(jobject arg0, jobject arg1, jboolean arg2, jboolean arg3);
	};
} // namespace __jni_impl::java::util::concurrent::atomic


namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void AtomicMarkableReference::__constructor(jobject arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicMarkableReference",
			"(Ljava/lang/Object;Z)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean AtomicMarkableReference::attemptMark(jobject arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"attemptMark",
			"(Ljava/lang/Object;Z)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicMarkableReference::compareAndSet(jobject arg0, jobject arg1, jboolean arg2, jboolean arg3)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jobject AtomicMarkableReference::get(jbooleanArray arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"([Z)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AtomicMarkableReference::getReference()
	{
		return __thiz.callObjectMethod(
			"getReference",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean AtomicMarkableReference::isMarked()
	{
		return __thiz.callMethod<jboolean>(
			"isMarked",
			"()Z"
		);
	}
	void AtomicMarkableReference::set(jobject arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Z)V",
			arg0,
			arg1
		);
	}
	jboolean AtomicMarkableReference::weakCompareAndSet(jobject arg0, jobject arg1, jboolean arg2, jboolean arg3)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;ZZ)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class AtomicMarkableReference : public __jni_impl::java::util::concurrent::atomic::AtomicMarkableReference
	{
	public:
		AtomicMarkableReference(QAndroidJniObject obj) { __thiz = obj; }
		AtomicMarkableReference(jobject arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICMARKABLEREFERENCE

