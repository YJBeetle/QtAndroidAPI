#pragma once

#include "../../../../JObject.hpp"

class JClass;
class JObject;
class JString;

namespace java::util::concurrent::atomic
{
	class AtomicIntegerFieldUpdater : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicIntegerFieldUpdater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicIntegerFieldUpdater(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::concurrent::atomic::AtomicIntegerFieldUpdater newUpdater(JClass arg0, JString arg1);
		jint accumulateAndGet(JObject arg0, jint arg1, JObject arg2) const;
		jint addAndGet(JObject arg0, jint arg1) const;
		jboolean compareAndSet(JObject arg0, jint arg1, jint arg2) const;
		jint decrementAndGet(JObject arg0) const;
		jint get(JObject arg0) const;
		jint getAndAccumulate(JObject arg0, jint arg1, JObject arg2) const;
		jint getAndAdd(JObject arg0, jint arg1) const;
		jint getAndDecrement(JObject arg0) const;
		jint getAndIncrement(JObject arg0) const;
		jint getAndSet(JObject arg0, jint arg1) const;
		jint getAndUpdate(JObject arg0, JObject arg1) const;
		jint incrementAndGet(JObject arg0) const;
		void lazySet(JObject arg0, jint arg1) const;
		void set(JObject arg0, jint arg1) const;
		jint updateAndGet(JObject arg0, JObject arg1) const;
		jboolean weakCompareAndSet(JObject arg0, jint arg1, jint arg2) const;
	};
} // namespace java::util::concurrent::atomic

