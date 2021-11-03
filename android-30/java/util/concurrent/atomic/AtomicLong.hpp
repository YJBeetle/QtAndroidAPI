#pragma once

#include "../../../lang/Number.hpp"

class JString;

namespace java::util::concurrent::atomic
{
	class AtomicLong : public java::lang::Number
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicLong(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		AtomicLong(QJniObject obj);
		
		// Constructors
		AtomicLong();
		AtomicLong(jlong arg0);
		
		// Methods
		jlong accumulateAndGet(jlong arg0, JObject arg1) const;
		jlong addAndGet(jlong arg0) const;
		jlong compareAndExchange(jlong arg0, jlong arg1) const;
		jlong compareAndExchangeAcquire(jlong arg0, jlong arg1) const;
		jlong compareAndExchangeRelease(jlong arg0, jlong arg1) const;
		jboolean compareAndSet(jlong arg0, jlong arg1) const;
		jlong decrementAndGet() const;
		jdouble doubleValue() const;
		jfloat floatValue() const;
		jlong get() const;
		jlong getAcquire() const;
		jlong getAndAccumulate(jlong arg0, JObject arg1) const;
		jlong getAndAdd(jlong arg0) const;
		jlong getAndDecrement() const;
		jlong getAndIncrement() const;
		jlong getAndSet(jlong arg0) const;
		jlong getAndUpdate(JObject arg0) const;
		jlong getOpaque() const;
		jlong getPlain() const;
		jlong incrementAndGet() const;
		jint intValue() const;
		void lazySet(jlong arg0) const;
		jlong longValue() const;
		void set(jlong arg0) const;
		void setOpaque(jlong arg0) const;
		void setPlain(jlong arg0) const;
		void setRelease(jlong arg0) const;
		JString toString() const;
		jlong updateAndGet(JObject arg0) const;
		jboolean weakCompareAndSet(jlong arg0, jlong arg1) const;
		jboolean weakCompareAndSetAcquire(jlong arg0, jlong arg1) const;
		jboolean weakCompareAndSetPlain(jlong arg0, jlong arg1) const;
		jboolean weakCompareAndSetRelease(jlong arg0, jlong arg1) const;
		jboolean weakCompareAndSetVolatile(jlong arg0, jlong arg1) const;
	};
} // namespace java::util::concurrent::atomic

