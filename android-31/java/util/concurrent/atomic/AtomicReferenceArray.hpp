#pragma once

#include "../../../../JObject.hpp"

class JObjectArray;
namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicReferenceArray(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicReferenceArray(QJniObject obj);
		
		// Constructors
		AtomicReferenceArray(JObjectArray arg0);
		AtomicReferenceArray(jint arg0);
		
		// Methods
		JObject accumulateAndGet(jint arg0, JObject arg1, JObject arg2);
		JObject compareAndExchange(jint arg0, JObject arg1, JObject arg2);
		JObject compareAndExchangeAcquire(jint arg0, JObject arg1, JObject arg2);
		JObject compareAndExchangeRelease(jint arg0, JObject arg1, JObject arg2);
		jboolean compareAndSet(jint arg0, JObject arg1, JObject arg2);
		JObject get(jint arg0);
		JObject getAcquire(jint arg0);
		JObject getAndAccumulate(jint arg0, JObject arg1, JObject arg2);
		JObject getAndSet(jint arg0, JObject arg1);
		JObject getAndUpdate(jint arg0, JObject arg1);
		JObject getOpaque(jint arg0);
		JObject getPlain(jint arg0);
		void lazySet(jint arg0, JObject arg1);
		jint length();
		void set(jint arg0, JObject arg1);
		void setOpaque(jint arg0, JObject arg1);
		void setPlain(jint arg0, JObject arg1);
		void setRelease(jint arg0, JObject arg1);
		JString toString();
		JObject updateAndGet(jint arg0, JObject arg1);
		jboolean weakCompareAndSet(jint arg0, JObject arg1, JObject arg2);
		jboolean weakCompareAndSetAcquire(jint arg0, JObject arg1, JObject arg2);
		jboolean weakCompareAndSetPlain(jint arg0, JObject arg1, JObject arg2);
		jboolean weakCompareAndSetRelease(jint arg0, JObject arg1, JObject arg2);
		jboolean weakCompareAndSetVolatile(jint arg0, JObject arg1, JObject arg2);
	};
} // namespace java::util::concurrent::atomic

