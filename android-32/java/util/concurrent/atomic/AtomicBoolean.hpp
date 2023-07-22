#pragma once

#include "../../../../JString.hpp"
#include "./AtomicBoolean.def.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	// Constructors
	inline AtomicBoolean::AtomicBoolean()
		: JObject(
			"java.util.concurrent.atomic.AtomicBoolean",
			"()V"
		) {}
	inline AtomicBoolean::AtomicBoolean(jboolean arg0)
		: JObject(
			"java.util.concurrent.atomic.AtomicBoolean",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	inline jboolean AtomicBoolean::compareAndExchange(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"compareAndExchange",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicBoolean::compareAndExchangeAcquire(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"compareAndExchangeAcquire",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicBoolean::compareAndExchangeRelease(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"compareAndExchangeRelease",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicBoolean::compareAndSet(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"compareAndSet",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicBoolean::get() const
	{
		return callMethod<jboolean>(
			"get",
			"()Z"
		);
	}
	inline jboolean AtomicBoolean::getAcquire() const
	{
		return callMethod<jboolean>(
			"getAcquire",
			"()Z"
		);
	}
	inline jboolean AtomicBoolean::getAndSet(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"getAndSet",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean AtomicBoolean::getOpaque() const
	{
		return callMethod<jboolean>(
			"getOpaque",
			"()Z"
		);
	}
	inline jboolean AtomicBoolean::getPlain() const
	{
		return callMethod<jboolean>(
			"getPlain",
			"()Z"
		);
	}
	inline void AtomicBoolean::lazySet(jboolean arg0) const
	{
		callMethod<void>(
			"lazySet",
			"(Z)V",
			arg0
		);
	}
	inline void AtomicBoolean::set(jboolean arg0) const
	{
		callMethod<void>(
			"set",
			"(Z)V",
			arg0
		);
	}
	inline void AtomicBoolean::setOpaque(jboolean arg0) const
	{
		callMethod<void>(
			"setOpaque",
			"(Z)V",
			arg0
		);
	}
	inline void AtomicBoolean::setPlain(jboolean arg0) const
	{
		callMethod<void>(
			"setPlain",
			"(Z)V",
			arg0
		);
	}
	inline void AtomicBoolean::setRelease(jboolean arg0) const
	{
		callMethod<void>(
			"setRelease",
			"(Z)V",
			arg0
		);
	}
	inline JString AtomicBoolean::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean AtomicBoolean::weakCompareAndSet(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSet",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicBoolean::weakCompareAndSetAcquire(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetAcquire",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicBoolean::weakCompareAndSetPlain(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetPlain",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicBoolean::weakCompareAndSetRelease(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetRelease",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AtomicBoolean::weakCompareAndSetVolatile(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"weakCompareAndSetVolatile",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
} // namespace java::util::concurrent::atomic

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::concurrent::atomic;
#endif
