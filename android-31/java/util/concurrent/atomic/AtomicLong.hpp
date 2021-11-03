#pragma once

#include "../../../../JObject.hpp"
#include "../../../lang/Number.hpp"


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
		jlong accumulateAndGet(jlong arg0, JObject arg1);
		jlong addAndGet(jlong arg0);
		jlong compareAndExchange(jlong arg0, jlong arg1);
		jlong compareAndExchangeAcquire(jlong arg0, jlong arg1);
		jlong compareAndExchangeRelease(jlong arg0, jlong arg1);
		jboolean compareAndSet(jlong arg0, jlong arg1);
		jlong decrementAndGet();
		jdouble doubleValue();
		jfloat floatValue();
		jlong get();
		jlong getAcquire();
		jlong getAndAccumulate(jlong arg0, JObject arg1);
		jlong getAndAdd(jlong arg0);
		jlong getAndDecrement();
		jlong getAndIncrement();
		jlong getAndSet(jlong arg0);
		jlong getAndUpdate(JObject arg0);
		jlong getOpaque();
		jlong getPlain();
		jlong incrementAndGet();
		jint intValue();
		void lazySet(jlong arg0);
		jlong longValue();
		void set(jlong arg0);
		void setOpaque(jlong arg0);
		void setPlain(jlong arg0);
		void setRelease(jlong arg0);
		jstring toString();
		jlong updateAndGet(JObject arg0);
		jboolean weakCompareAndSet(jlong arg0, jlong arg1);
		jboolean weakCompareAndSetAcquire(jlong arg0, jlong arg1);
		jboolean weakCompareAndSetPlain(jlong arg0, jlong arg1);
		jboolean weakCompareAndSetRelease(jlong arg0, jlong arg1);
		jboolean weakCompareAndSetVolatile(jlong arg0, jlong arg1);
	};
} // namespace java::util::concurrent::atomic

