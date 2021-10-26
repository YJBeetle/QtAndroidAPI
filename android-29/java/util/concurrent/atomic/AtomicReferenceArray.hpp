#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY
#define JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::lang::reflect
{
	class Field;
}

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicReferenceArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jobjectArray arg0);
		
		// Methods
		jobject get(jint arg0);
		jint length();
		jstring toString();
		void set(jint arg0, jobject arg1);
		jobject getOpaque(jint arg0);
		void setOpaque(jint arg0, jobject arg1);
		jobject getAcquire(jint arg0);
		void setRelease(jint arg0, jobject arg1);
		jboolean compareAndSet(jint arg0, jobject arg1, jobject arg2);
		jobject compareAndExchange(jint arg0, jobject arg1, jobject arg2);
		jobject compareAndExchangeAcquire(jint arg0, jobject arg1, jobject arg2);
		jobject compareAndExchangeRelease(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSetPlain(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSet(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSetAcquire(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSetRelease(jint arg0, jobject arg1, jobject arg2);
		jobject getAndSet(jint arg0, jobject arg1);
		void lazySet(jint arg0, jobject arg1);
		jboolean weakCompareAndSetVolatile(jint arg0, jobject arg1, jobject arg2);
		jobject getAndUpdate(jint arg0, __jni_impl::__JniBaseClass arg1);
		jobject updateAndGet(jint arg0, __jni_impl::__JniBaseClass arg1);
		jobject getAndAccumulate(jint arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		jobject accumulateAndGet(jint arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		jobject getPlain(jint arg0);
		void setPlain(jint arg0, jobject arg1);
	};
} // namespace __jni_impl::java::util::concurrent::atomic

#include "../../../io/ObjectInputStream.hpp"
#include "../../../lang/reflect/Field.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void AtomicReferenceArray::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicReferenceArray",
			"(I)V",
			arg0
		);
	}
	void AtomicReferenceArray::__constructor(jobjectArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicReferenceArray",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	
	// Methods
	jobject AtomicReferenceArray::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint AtomicReferenceArray::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring AtomicReferenceArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AtomicReferenceArray::set(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jobject AtomicReferenceArray::getOpaque(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getOpaque",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void AtomicReferenceArray::setOpaque(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jobject AtomicReferenceArray::getAcquire(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAcquire",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void AtomicReferenceArray::setRelease(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setRelease",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean AtomicReferenceArray::compareAndSet(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject AtomicReferenceArray::compareAndExchange(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"compareAndExchange",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobject>();
	}
	jobject AtomicReferenceArray::compareAndExchangeAcquire(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"compareAndExchangeAcquire",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobject>();
	}
	jobject AtomicReferenceArray::compareAndExchangeRelease(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"compareAndExchangeRelease",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobject>();
	}
	jboolean AtomicReferenceArray::weakCompareAndSetPlain(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSet(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetAcquire(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetRelease(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject AtomicReferenceArray::getAndSet(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getAndSet",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	void AtomicReferenceArray::lazySet(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetVolatile(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jobject AtomicReferenceArray::getAndUpdate(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getAndUpdate",
			"(ILjava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject AtomicReferenceArray::updateAndGet(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"updateAndGet",
			"(ILjava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject AtomicReferenceArray::getAndAccumulate(jint arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"getAndAccumulate",
			"(ILjava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	jobject AtomicReferenceArray::accumulateAndGet(jint arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"accumulateAndGet",
			"(ILjava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
	jobject AtomicReferenceArray::getPlain(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPlain",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void AtomicReferenceArray::setPlain(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setPlain",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class AtomicReferenceArray : public __jni_impl::java::util::concurrent::atomic::AtomicReferenceArray
	{
	public:
		AtomicReferenceArray(QAndroidJniObject obj) { __thiz = obj; }
		AtomicReferenceArray(jint arg0)
		{
			__constructor(
				arg0);
		}
		AtomicReferenceArray(jobjectArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICREFERENCEARRAY

