#pragma once

#include "../../../../JObject.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicIntegerArray : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicIntegerArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicIntegerArray(QAndroidJniObject obj);
		
		// Constructors
		AtomicIntegerArray(jintArray arg0);
		AtomicIntegerArray(jint arg0);
		
		// Methods
		jint accumulateAndGet(jint arg0, jint arg1, JObject arg2);
		jint addAndGet(jint arg0, jint arg1);
		jint compareAndExchange(jint arg0, jint arg1, jint arg2);
		jint compareAndExchangeAcquire(jint arg0, jint arg1, jint arg2);
		jint compareAndExchangeRelease(jint arg0, jint arg1, jint arg2);
		jboolean compareAndSet(jint arg0, jint arg1, jint arg2);
		jint decrementAndGet(jint arg0);
		jint get(jint arg0);
		jint getAcquire(jint arg0);
		jint getAndAccumulate(jint arg0, jint arg1, JObject arg2);
		jint getAndAdd(jint arg0, jint arg1);
		jint getAndDecrement(jint arg0);
		jint getAndIncrement(jint arg0);
		jint getAndSet(jint arg0, jint arg1);
		jint getAndUpdate(jint arg0, JObject arg1);
		jint getOpaque(jint arg0);
		jint getPlain(jint arg0);
		jint incrementAndGet(jint arg0);
		void lazySet(jint arg0, jint arg1);
		jint length();
		void set(jint arg0, jint arg1);
		void setOpaque(jint arg0, jint arg1);
		void setPlain(jint arg0, jint arg1);
		void setRelease(jint arg0, jint arg1);
		jstring toString();
		jint updateAndGet(jint arg0, JObject arg1);
		jboolean weakCompareAndSet(jint arg0, jint arg1, jint arg2);
		jboolean weakCompareAndSetAcquire(jint arg0, jint arg1, jint arg2);
		jboolean weakCompareAndSetPlain(jint arg0, jint arg1, jint arg2);
		jboolean weakCompareAndSetRelease(jint arg0, jint arg1, jint arg2);
		jboolean weakCompareAndSetVolatile(jint arg0, jint arg1, jint arg2);
	};
} // namespace java::util::concurrent::atomic

