#pragma once

#include "../../../../JObject.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicBoolean : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicBoolean(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicBoolean(QJniObject obj);
		
		// Constructors
		AtomicBoolean();
		AtomicBoolean(jboolean arg0);
		
		// Methods
		jboolean compareAndExchange(jboolean arg0, jboolean arg1);
		jboolean compareAndExchangeAcquire(jboolean arg0, jboolean arg1);
		jboolean compareAndExchangeRelease(jboolean arg0, jboolean arg1);
		jboolean compareAndSet(jboolean arg0, jboolean arg1);
		jboolean get();
		jboolean getAcquire();
		jboolean getAndSet(jboolean arg0);
		jboolean getOpaque();
		jboolean getPlain();
		void lazySet(jboolean arg0);
		void set(jboolean arg0);
		void setOpaque(jboolean arg0);
		void setPlain(jboolean arg0);
		void setRelease(jboolean arg0);
		jstring toString();
		jboolean weakCompareAndSet(jboolean arg0, jboolean arg1);
		jboolean weakCompareAndSetAcquire(jboolean arg0, jboolean arg1);
		jboolean weakCompareAndSetPlain(jboolean arg0, jboolean arg1);
		jboolean weakCompareAndSetRelease(jboolean arg0, jboolean arg1);
		jboolean weakCompareAndSetVolatile(jboolean arg0, jboolean arg1);
	};
} // namespace java::util::concurrent::atomic

