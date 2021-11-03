#pragma once

#include "../../../../JObject.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicLongArray : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicLongArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicLongArray(QAndroidJniObject obj);
		
		// Constructors
		AtomicLongArray(jlongArray arg0);
		AtomicLongArray(jint arg0);
		
		// Methods
		jlong accumulateAndGet(jint arg0, jlong arg1, JObject arg2);
		jlong addAndGet(jint arg0, jlong arg1);
		jlong compareAndExchange(jint arg0, jlong arg1, jlong arg2);
		jlong compareAndExchangeAcquire(jint arg0, jlong arg1, jlong arg2);
		jlong compareAndExchangeRelease(jint arg0, jlong arg1, jlong arg2);
		jboolean compareAndSet(jint arg0, jlong arg1, jlong arg2);
		jlong decrementAndGet(jint arg0);
		jlong get(jint arg0);
		jlong getAcquire(jint arg0);
		jlong getAndAccumulate(jint arg0, jlong arg1, JObject arg2);
		jlong getAndAdd(jint arg0, jlong arg1);
		jlong getAndDecrement(jint arg0);
		jlong getAndIncrement(jint arg0);
		jlong getAndSet(jint arg0, jlong arg1);
		jlong getAndUpdate(jint arg0, JObject arg1);
		jlong getOpaque(jint arg0);
		jlong getPlain(jint arg0);
		jlong incrementAndGet(jint arg0);
		void lazySet(jint arg0, jlong arg1);
		jint length();
		void set(jint arg0, jlong arg1);
		void setOpaque(jint arg0, jlong arg1);
		void setPlain(jint arg0, jlong arg1);
		void setRelease(jint arg0, jlong arg1);
		jstring toString();
		jlong updateAndGet(jint arg0, JObject arg1);
		jboolean weakCompareAndSet(jint arg0, jlong arg1, jlong arg2);
		jboolean weakCompareAndSetAcquire(jint arg0, jlong arg1, jlong arg2);
		jboolean weakCompareAndSetPlain(jint arg0, jlong arg1, jlong arg2);
		jboolean weakCompareAndSetRelease(jint arg0, jlong arg1, jlong arg2);
		jboolean weakCompareAndSetVolatile(jint arg0, jlong arg1, jlong arg2);
	};
} // namespace java::util::concurrent::atomic

