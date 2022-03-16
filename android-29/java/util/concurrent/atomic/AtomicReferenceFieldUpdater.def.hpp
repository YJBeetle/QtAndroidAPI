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
		AtomicReferenceFieldUpdater(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::concurrent::atomic::AtomicReferenceFieldUpdater newUpdater(JClass arg0, JClass arg1, JString arg2);
		JObject accumulateAndGet(JObject arg0, JObject arg1, JObject arg2) const;
		jboolean compareAndSet(JObject arg0, JObject arg1, JObject arg2) const;
		JObject get(JObject arg0) const;
		JObject getAndAccumulate(JObject arg0, JObject arg1, JObject arg2) const;
		JObject getAndSet(JObject arg0, JObject arg1) const;
		JObject getAndUpdate(JObject arg0, JObject arg1) const;
		void lazySet(JObject arg0, JObject arg1) const;
		void set(JObject arg0, JObject arg1) const;
		JObject updateAndGet(JObject arg0, JObject arg1) const;
		jboolean weakCompareAndSet(JObject arg0, JObject arg1, JObject arg2) const;
	};
} // namespace java::util::concurrent::atomic

