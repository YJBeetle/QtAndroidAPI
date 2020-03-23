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
		QAndroidJniObject get(jint arg0);
		jint length();
		QAndroidJniObject toString();
		void set(jint arg0, jobject arg1);
		QAndroidJniObject getOpaque(jint arg0);
		void setOpaque(jint arg0, jobject arg1);
		QAndroidJniObject getAcquire(jint arg0);
		void setRelease(jint arg0, jobject arg1);
		jboolean compareAndSet(jint arg0, jobject arg1, jobject arg2);
		QAndroidJniObject compareAndExchange(jint arg0, jobject arg1, jobject arg2);
		QAndroidJniObject compareAndExchangeAcquire(jint arg0, jobject arg1, jobject arg2);
		QAndroidJniObject compareAndExchangeRelease(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSetPlain(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSet(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSetAcquire(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSetRelease(jint arg0, jobject arg1, jobject arg2);
		QAndroidJniObject getAndSet(jint arg0, jobject arg1);
		void lazySet(jint arg0, jobject arg1);
		jboolean weakCompareAndSetVolatile(jint arg0, jobject arg1, jobject arg2);
		QAndroidJniObject getAndUpdate(jint arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject updateAndGet(jint arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getAndAccumulate(jint arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject accumulateAndGet(jint arg0, jobject arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject getPlain(jint arg0);
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
			arg0);
	}
	void AtomicReferenceArray::__constructor(jobjectArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicReferenceArray",
			"([Ljava/lang/Object;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject AtomicReferenceArray::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	jint AtomicReferenceArray::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I");
	}
	QAndroidJniObject AtomicReferenceArray::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void AtomicReferenceArray::set(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject AtomicReferenceArray::getOpaque(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getOpaque",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	void AtomicReferenceArray::setOpaque(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject AtomicReferenceArray::getAcquire(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAcquire",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	void AtomicReferenceArray::setRelease(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setRelease",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1);
	}
	jboolean AtomicReferenceArray::compareAndSet(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject AtomicReferenceArray::compareAndExchange(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"compareAndExchange",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject AtomicReferenceArray::compareAndExchangeAcquire(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"compareAndExchangeAcquire",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject AtomicReferenceArray::compareAndExchangeRelease(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"compareAndExchangeRelease",
			"(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetPlain(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2);
	}
	jboolean AtomicReferenceArray::weakCompareAndSet(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetAcquire(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetRelease(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject AtomicReferenceArray::getAndSet(jint arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"getAndSet",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	void AtomicReferenceArray::lazySet(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1);
	}
	jboolean AtomicReferenceArray::weakCompareAndSetVolatile(jint arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(ILjava/lang/Object;Ljava/lang/Object;)Z",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject AtomicReferenceArray::getAndUpdate(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"getAndUpdate",
			"(ILjava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject AtomicReferenceArray::updateAndGet(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"updateAndGet",
			"(ILjava/util/function/UnaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject AtomicReferenceArray::getAndAccumulate(jint arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"getAndAccumulate",
			"(ILjava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject AtomicReferenceArray::accumulateAndGet(jint arg0, jobject arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"accumulateAndGet",
			"(ILjava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject AtomicReferenceArray::getPlain(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getPlain",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	void AtomicReferenceArray::setPlain(jint arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setPlain",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1);
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

