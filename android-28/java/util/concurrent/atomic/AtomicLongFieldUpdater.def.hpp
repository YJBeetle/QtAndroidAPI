#pragma once

#include "../../../../JObject.hpp"

class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;

namespace java::util::concurrent::atomic
{
	class AtomicLongFieldUpdater : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicLongFieldUpdater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicLongFieldUpdater(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::concurrent::atomic::AtomicLongFieldUpdater newUpdater(JClass arg0, JString arg1);
		jlong accumulateAndGet(JObject arg0, jlong arg1, JObject arg2) const;
		jlong addAndGet(JObject arg0, jlong arg1) const;
		jboolean compareAndSet(JObject arg0, jlong arg1, jlong arg2) const;
		jlong decrementAndGet(JObject arg0) const;
		jlong get(JObject arg0) const;
		jlong getAndAccumulate(JObject arg0, jlong arg1, JObject arg2) const;
		jlong getAndAdd(JObject arg0, jlong arg1) const;
		jlong getAndDecrement(JObject arg0) const;
		jlong getAndIncrement(JObject arg0) const;
		jlong getAndSet(JObject arg0, jlong arg1) const;
		jlong getAndUpdate(JObject arg0, JObject arg1) const;
		jlong incrementAndGet(JObject arg0) const;
		void lazySet(JObject arg0, jlong arg1) const;
		void set(JObject arg0, jlong arg1) const;
		jlong updateAndGet(JObject arg0, JObject arg1) const;
		jboolean weakCompareAndSet(JObject arg0, jlong arg1, jlong arg2) const;
	};
} // namespace java::util::concurrent::atomic

