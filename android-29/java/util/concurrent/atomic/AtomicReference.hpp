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
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicReference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicReference(QJniObject obj);
		
		// Constructors
		AtomicReference();
		AtomicReference(JObject arg0);
		
		// Methods
		JObject accumulateAndGet(JObject arg0, JObject arg1);
		JObject compareAndExchange(JObject arg0, JObject arg1);
		JObject compareAndExchangeAcquire(JObject arg0, JObject arg1);
		JObject compareAndExchangeRelease(JObject arg0, JObject arg1);
		jboolean compareAndSet(JObject arg0, JObject arg1);
		JObject get();
		JObject getAcquire();
		JObject getAndAccumulate(JObject arg0, JObject arg1);
		JObject getAndSet(JObject arg0);
		JObject getAndUpdate(JObject arg0);
		JObject getOpaque();
		JObject getPlain();
		void lazySet(JObject arg0);
		void set(JObject arg0);
		void setOpaque(JObject arg0);
		void setPlain(JObject arg0);
		void setRelease(JObject arg0);
		JString toString();
		JObject updateAndGet(JObject arg0);
		jboolean weakCompareAndSet(JObject arg0, JObject arg1);
		jboolean weakCompareAndSetAcquire(JObject arg0, JObject arg1);
		jboolean weakCompareAndSetPlain(JObject arg0, JObject arg1);
		jboolean weakCompareAndSetRelease(JObject arg0, JObject arg1);
		jboolean weakCompareAndSetVolatile(JObject arg0, JObject arg1);
	};
} // namespace java::util::concurrent::atomic

