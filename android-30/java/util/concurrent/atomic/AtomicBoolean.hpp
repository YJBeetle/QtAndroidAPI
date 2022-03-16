#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace java::util::concurrent::atomic
{
	class AtomicBoolean : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicBoolean(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicBoolean(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AtomicBoolean();
		AtomicBoolean(jboolean arg0);
		
		// Methods
		jboolean compareAndExchange(jboolean arg0, jboolean arg1) const;
		jboolean compareAndExchangeAcquire(jboolean arg0, jboolean arg1) const;
		jboolean compareAndExchangeRelease(jboolean arg0, jboolean arg1) const;
		jboolean compareAndSet(jboolean arg0, jboolean arg1) const;
		jboolean get() const;
		jboolean getAcquire() const;
		jboolean getAndSet(jboolean arg0) const;
		jboolean getOpaque() const;
		jboolean getPlain() const;
		void lazySet(jboolean arg0) const;
		void set(jboolean arg0) const;
		void setOpaque(jboolean arg0) const;
		void setPlain(jboolean arg0) const;
		void setRelease(jboolean arg0) const;
		JString toString() const;
		jboolean weakCompareAndSet(jboolean arg0, jboolean arg1) const;
		jboolean weakCompareAndSetAcquire(jboolean arg0, jboolean arg1) const;
		jboolean weakCompareAndSetPlain(jboolean arg0, jboolean arg1) const;
		jboolean weakCompareAndSetRelease(jboolean arg0, jboolean arg1) const;
		jboolean weakCompareAndSetVolatile(jboolean arg0, jboolean arg1) const;
	};
} // namespace java::util::concurrent::atomic

