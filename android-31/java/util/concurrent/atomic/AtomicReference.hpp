#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;

namespace java::util::concurrent::atomic
{
	class AtomicReference : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicReference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicReference(QAndroidJniObject obj);
		
		// Constructors
		AtomicReference();
		AtomicReference(JObject arg0);
		
		// Methods
		JObject accumulateAndGet(JObject arg0, JObject arg1) const;
		JObject compareAndExchange(JObject arg0, JObject arg1) const;
		JObject compareAndExchangeAcquire(JObject arg0, JObject arg1) const;
		JObject compareAndExchangeRelease(JObject arg0, JObject arg1) const;
		jboolean compareAndSet(JObject arg0, JObject arg1) const;
		JObject get() const;
		JObject getAcquire() const;
		JObject getAndAccumulate(JObject arg0, JObject arg1) const;
		JObject getAndSet(JObject arg0) const;
		JObject getAndUpdate(JObject arg0) const;
		JObject getOpaque() const;
		JObject getPlain() const;
		void lazySet(JObject arg0) const;
		void set(JObject arg0) const;
		void setOpaque(JObject arg0) const;
		void setPlain(JObject arg0) const;
		void setRelease(JObject arg0) const;
		JString toString() const;
		JObject updateAndGet(JObject arg0) const;
		jboolean weakCompareAndSet(JObject arg0, JObject arg1) const;
		jboolean weakCompareAndSetAcquire(JObject arg0, JObject arg1) const;
		jboolean weakCompareAndSetPlain(JObject arg0, JObject arg1) const;
		jboolean weakCompareAndSetRelease(JObject arg0, JObject arg1) const;
		jboolean weakCompareAndSetVolatile(JObject arg0, JObject arg1) const;
	};
} // namespace java::util::concurrent::atomic

