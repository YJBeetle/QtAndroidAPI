#pragma once

#include "../../../../JObject.hpp"

class JIntArray;
class JString;

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
		AtomicIntegerArray(JIntArray arg0);
		AtomicIntegerArray(jint arg0);
		
		// Methods
		jint accumulateAndGet(jint arg0, jint arg1, JObject arg2) const;
		jint addAndGet(jint arg0, jint arg1) const;
		jint compareAndExchange(jint arg0, jint arg1, jint arg2) const;
		jint compareAndExchangeAcquire(jint arg0, jint arg1, jint arg2) const;
		jint compareAndExchangeRelease(jint arg0, jint arg1, jint arg2) const;
		jboolean compareAndSet(jint arg0, jint arg1, jint arg2) const;
		jint decrementAndGet(jint arg0) const;
		jint get(jint arg0) const;
		jint getAcquire(jint arg0) const;
		jint getAndAccumulate(jint arg0, jint arg1, JObject arg2) const;
		jint getAndAdd(jint arg0, jint arg1) const;
		jint getAndDecrement(jint arg0) const;
		jint getAndIncrement(jint arg0) const;
		jint getAndSet(jint arg0, jint arg1) const;
		jint getAndUpdate(jint arg0, JObject arg1) const;
		jint getOpaque(jint arg0) const;
		jint getPlain(jint arg0) const;
		jint incrementAndGet(jint arg0) const;
		void lazySet(jint arg0, jint arg1) const;
		jint length() const;
		void set(jint arg0, jint arg1) const;
		void setOpaque(jint arg0, jint arg1) const;
		void setPlain(jint arg0, jint arg1) const;
		void setRelease(jint arg0, jint arg1) const;
		JString toString() const;
		jint updateAndGet(jint arg0, JObject arg1) const;
		jboolean weakCompareAndSet(jint arg0, jint arg1, jint arg2) const;
		jboolean weakCompareAndSetAcquire(jint arg0, jint arg1, jint arg2) const;
		jboolean weakCompareAndSetPlain(jint arg0, jint arg1, jint arg2) const;
		jboolean weakCompareAndSetRelease(jint arg0, jint arg1, jint arg2) const;
		jboolean weakCompareAndSetVolatile(jint arg0, jint arg1, jint arg2) const;
	};
} // namespace java::util::concurrent::atomic

