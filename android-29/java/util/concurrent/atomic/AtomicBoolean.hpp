#pragma once

#ifndef JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICBOOLEAN
#define JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICBOOLEAN

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicBoolean : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jboolean arg0);
		void __constructor();
		
		// Methods
		jboolean get();
		QAndroidJniObject toString();
		void set(jboolean arg0);
		jboolean getOpaque();
		void setOpaque(jboolean arg0);
		jboolean getAcquire();
		void setRelease(jboolean arg0);
		jboolean compareAndSet(jboolean arg0, jboolean arg1);
		jboolean compareAndExchange(jboolean arg0, jboolean arg1);
		jboolean compareAndExchangeAcquire(jboolean arg0, jboolean arg1);
		jboolean compareAndExchangeRelease(jboolean arg0, jboolean arg1);
		jboolean weakCompareAndSetPlain(jboolean arg0, jboolean arg1);
		jboolean weakCompareAndSet(jboolean arg0, jboolean arg1);
		jboolean weakCompareAndSetAcquire(jboolean arg0, jboolean arg1);
		jboolean weakCompareAndSetRelease(jboolean arg0, jboolean arg1);
		jboolean getAndSet(jboolean arg0);
		void lazySet(jboolean arg0);
		jboolean weakCompareAndSetVolatile(jboolean arg0, jboolean arg1);
		jboolean getPlain();
		void setPlain(jboolean arg0);
	};
} // namespace __jni_impl::java::util::concurrent::atomic


namespace __jni_impl::java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	void AtomicBoolean::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicBoolean",
			"(Z)V",
			arg0);
	}
	void AtomicBoolean::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicBoolean",
			"()V");
	}
	
	// Methods
	jboolean AtomicBoolean::get()
	{
		return __thiz.callMethod<jboolean>(
			"get",
			"()Z");
	}
	QAndroidJniObject AtomicBoolean::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void AtomicBoolean::set(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Z)V",
			arg0);
	}
	jboolean AtomicBoolean::getOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"getOpaque",
			"()Z");
	}
	void AtomicBoolean::setOpaque(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0);
	}
	jboolean AtomicBoolean::getAcquire()
	{
		return __thiz.callMethod<jboolean>(
			"getAcquire",
			"()Z");
	}
	void AtomicBoolean::setRelease(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRelease",
			"(Z)V",
			arg0);
	}
	jboolean AtomicBoolean::compareAndSet(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(ZZ)Z",
			arg0,
			arg1);
	}
	jboolean AtomicBoolean::compareAndExchange(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndExchange",
			"(ZZ)Z",
			arg0,
			arg1);
	}
	jboolean AtomicBoolean::compareAndExchangeAcquire(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndExchangeAcquire",
			"(ZZ)Z",
			arg0,
			arg1);
	}
	jboolean AtomicBoolean::compareAndExchangeRelease(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndExchangeRelease",
			"(ZZ)Z",
			arg0,
			arg1);
	}
	jboolean AtomicBoolean::weakCompareAndSetPlain(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(ZZ)Z",
			arg0,
			arg1);
	}
	jboolean AtomicBoolean::weakCompareAndSet(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(ZZ)Z",
			arg0,
			arg1);
	}
	jboolean AtomicBoolean::weakCompareAndSetAcquire(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(ZZ)Z",
			arg0,
			arg1);
	}
	jboolean AtomicBoolean::weakCompareAndSetRelease(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(ZZ)Z",
			arg0,
			arg1);
	}
	jboolean AtomicBoolean::getAndSet(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getAndSet",
			"(Z)Z",
			arg0);
	}
	void AtomicBoolean::lazySet(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"lazySet",
			"(Z)V",
			arg0);
	}
	jboolean AtomicBoolean::weakCompareAndSetVolatile(jboolean arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(ZZ)Z",
			arg0,
			arg1);
	}
	jboolean AtomicBoolean::getPlain()
	{
		return __thiz.callMethod<jboolean>(
			"getPlain",
			"()Z");
	}
	void AtomicBoolean::setPlain(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPlain",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::java::util::concurrent::atomic

namespace java::util::concurrent::atomic
{
	class AtomicBoolean : public __jni_impl::java::util::concurrent::atomic::AtomicBoolean
	{
	public:
		AtomicBoolean(QAndroidJniObject obj) { __thiz = obj; }
		AtomicBoolean(jboolean arg0)
		{
			__constructor(
				arg0);
		}
		AtomicBoolean()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent::atomic

#endif // JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICBOOLEAN

