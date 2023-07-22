#pragma once

#include "../../../../JObject.hpp"

class JObjectArray;
namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
namespace java::lang::invoke
{
	class VarHandle;
}
namespace java::lang::reflect
{
	class Field;
}

namespace java::util::concurrent::atomic
{
	class AtomicReferenceArray : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicReferenceArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicReferenceArray(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AtomicReferenceArray(JObjectArray arg0);
		AtomicReferenceArray(jint arg0);
		
		// Methods
		JObject accumulateAndGet(jint arg0, JObject arg1, JObject arg2) const;
		JObject compareAndExchange(jint arg0, JObject arg1, JObject arg2) const;
		JObject compareAndExchangeAcquire(jint arg0, JObject arg1, JObject arg2) const;
		JObject compareAndExchangeRelease(jint arg0, JObject arg1, JObject arg2) const;
		jboolean compareAndSet(jint arg0, JObject arg1, JObject arg2) const;
		JObject get(jint arg0) const;
		JObject getAcquire(jint arg0) const;
		JObject getAndAccumulate(jint arg0, JObject arg1, JObject arg2) const;
		JObject getAndSet(jint arg0, JObject arg1) const;
		JObject getAndUpdate(jint arg0, JObject arg1) const;
		JObject getOpaque(jint arg0) const;
		JObject getPlain(jint arg0) const;
		void lazySet(jint arg0, JObject arg1) const;
		jint length() const;
		void set(jint arg0, JObject arg1) const;
		void setOpaque(jint arg0, JObject arg1) const;
		void setPlain(jint arg0, JObject arg1) const;
		void setRelease(jint arg0, JObject arg1) const;
		JString toString() const;
		JObject updateAndGet(jint arg0, JObject arg1) const;
		jboolean weakCompareAndSet(jint arg0, JObject arg1, JObject arg2) const;
		jboolean weakCompareAndSetAcquire(jint arg0, JObject arg1, JObject arg2) const;
		jboolean weakCompareAndSetPlain(jint arg0, JObject arg1, JObject arg2) const;
		jboolean weakCompareAndSetRelease(jint arg0, JObject arg1, JObject arg2) const;
		jboolean weakCompareAndSetVolatile(jint arg0, JObject arg1, JObject arg2) const;
	};
} // namespace java::util::concurrent::atomic

