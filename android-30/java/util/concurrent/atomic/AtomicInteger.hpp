#pragma once

#include "../../../lang/Number.hpp"

class JString;

namespace java::util::concurrent::atomic
{
	class AtomicInteger : public java::lang::Number
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicInteger(const char *className, const char *sig, Ts...agv) : java::lang::Number(className, sig, std::forward<Ts>(agv)...) {}
		AtomicInteger(QJniObject obj);
		
		// Constructors
		AtomicInteger();
		AtomicInteger(jint arg0);
		
		// Methods
		jint accumulateAndGet(jint arg0, JObject arg1) const;
		jint addAndGet(jint arg0) const;
		jint compareAndExchange(jint arg0, jint arg1) const;
		jint compareAndExchangeAcquire(jint arg0, jint arg1) const;
		jint compareAndExchangeRelease(jint arg0, jint arg1) const;
		jboolean compareAndSet(jint arg0, jint arg1) const;
		jint decrementAndGet() const;
		jdouble doubleValue() const;
		jfloat floatValue() const;
		jint get() const;
		jint getAcquire() const;
		jint getAndAccumulate(jint arg0, JObject arg1) const;
		jint getAndAdd(jint arg0) const;
		jint getAndDecrement() const;
		jint getAndIncrement() const;
		jint getAndSet(jint arg0) const;
		jint getAndUpdate(JObject arg0) const;
		jint getOpaque() const;
		jint getPlain() const;
		jint incrementAndGet() const;
		jint intValue() const;
		void lazySet(jint arg0) const;
		jlong longValue() const;
		void set(jint arg0) const;
		void setOpaque(jint arg0) const;
		void setPlain(jint arg0) const;
		void setRelease(jint arg0) const;
		JString toString() const;
		jint updateAndGet(JObject arg0) const;
		jboolean weakCompareAndSet(jint arg0, jint arg1) const;
		jboolean weakCompareAndSetAcquire(jint arg0, jint arg1) const;
		jboolean weakCompareAndSetPlain(jint arg0, jint arg1) const;
		jboolean weakCompareAndSetRelease(jint arg0, jint arg1) const;
		jboolean weakCompareAndSetVolatile(jint arg0, jint arg1) const;
	};
} // namespace java::util::concurrent::atomic

