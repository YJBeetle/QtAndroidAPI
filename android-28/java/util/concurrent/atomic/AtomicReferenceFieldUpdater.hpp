#pragma once

#include "../../../../JObject.hpp"

class JClass;
class JObject;
class JString;

namespace java::util::concurrent::atomic
{
	class AtomicReferenceFieldUpdater : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicReferenceFieldUpdater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicReferenceFieldUpdater(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::concurrent::atomic::AtomicReferenceFieldUpdater newUpdater(JClass arg0, JClass arg1, JString arg2);
		JObject accumulateAndGet(JObject arg0, JObject arg1, JObject arg2);
		jboolean compareAndSet(JObject arg0, JObject arg1, JObject arg2);
		JObject get(JObject arg0);
		JObject getAndAccumulate(JObject arg0, JObject arg1, JObject arg2);
		JObject getAndSet(JObject arg0, JObject arg1);
		JObject getAndUpdate(JObject arg0, JObject arg1);
		void lazySet(JObject arg0, JObject arg1);
		void set(JObject arg0, JObject arg1);
		JObject updateAndGet(JObject arg0, JObject arg1);
		jboolean weakCompareAndSet(JObject arg0, JObject arg1, JObject arg2);
	};
} // namespace java::util::concurrent::atomic

