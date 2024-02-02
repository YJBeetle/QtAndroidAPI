#pragma once

#include "../../../../JObject.hpp"

class JLongArray;
class JString;
namespace java::lang::invoke
{
	class VarHandle;
}

namespace java::util::concurrent::atomic
{
	class AtomicLongArray : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicLongArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicLongArray(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AtomicLongArray(JLongArray arg0);
		AtomicLongArray(jint arg0);
		
		// Methods
		jlong accumulateAndGet(jint arg0, jlong arg1, JObject arg2) const;
		jlong addAndGet(jint arg0, jlong arg1) const;
		jlong compareAndExchange(jint arg0, jlong arg1, jlong arg2) const;
		jlong compareAndExchangeAcquire(jint arg0, jlong arg1, jlong arg2) const;
		jlong compareAndExchangeRelease(jint arg0, jlong arg1, jlong arg2) const;
		jboolean compareAndSet(jint arg0, jlong arg1, jlong arg2) const;
		jlong decrementAndGet(jint arg0) const;
		jlong get(jint arg0) const;
		jlong getAcquire(jint arg0) const;
		jlong getAndAccumulate(jint arg0, jlong arg1, JObject arg2) const;
		jlong getAndAdd(jint arg0, jlong arg1) const;
		jlong getAndDecrement(jint arg0) const;
		jlong getAndIncrement(jint arg0) const;
		jlong getAndSet(jint arg0, jlong arg1) const;
		jlong getAndUpdate(jint arg0, JObject arg1) const;
		jlong getOpaque(jint arg0) const;
		jlong getPlain(jint arg0) const;
		jlong incrementAndGet(jint arg0) const;
		void lazySet(jint arg0, jlong arg1) const;
		jint length() const;
		void set(jint arg0, jlong arg1) const;
		void setOpaque(jint arg0, jlong arg1) const;
		void setPlain(jint arg0, jlong arg1) const;
		void setRelease(jint arg0, jlong arg1) const;
		JString toString() const;
		jlong updateAndGet(jint arg0, JObject arg1) const;
		jboolean weakCompareAndSet(jint arg0, jlong arg1, jlong arg2) const;
		jboolean weakCompareAndSetAcquire(jint arg0, jlong arg1, jlong arg2) const;
		jboolean weakCompareAndSetPlain(jint arg0, jlong arg1, jlong arg2) const;
		jboolean weakCompareAndSetRelease(jint arg0, jlong arg1, jlong arg2) const;
		jboolean weakCompareAndSetVolatile(jint arg0, jlong arg1, jlong arg2) const;
	};
} // namespace java::util::concurrent::atomic

