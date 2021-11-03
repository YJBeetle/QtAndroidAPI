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
		AtomicLongFieldUpdater(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::concurrent::atomic::AtomicLongFieldUpdater newUpdater(JClass arg0, JString arg1);
		jlong accumulateAndGet(JObject arg0, jlong arg1, JObject arg2);
		jlong addAndGet(JObject arg0, jlong arg1);
		jboolean compareAndSet(JObject arg0, jlong arg1, jlong arg2);
		jlong decrementAndGet(JObject arg0);
		jlong get(JObject arg0);
		jlong getAndAccumulate(JObject arg0, jlong arg1, JObject arg2);
		jlong getAndAdd(JObject arg0, jlong arg1);
		jlong getAndDecrement(JObject arg0);
		jlong getAndIncrement(JObject arg0);
		jlong getAndSet(JObject arg0, jlong arg1);
		jlong getAndUpdate(JObject arg0, JObject arg1);
		jlong incrementAndGet(JObject arg0);
		void lazySet(JObject arg0, jlong arg1);
		void set(JObject arg0, jlong arg1);
		jlong updateAndGet(JObject arg0, JObject arg1);
		jboolean weakCompareAndSet(JObject arg0, jlong arg1, jlong arg2);
	};
} // namespace java::util::concurrent::atomic

