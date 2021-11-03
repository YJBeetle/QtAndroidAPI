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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicIntegerFieldUpdater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicIntegerFieldUpdater(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::concurrent::atomic::AtomicIntegerFieldUpdater newUpdater(JClass arg0, JString arg1);
		jint accumulateAndGet(JObject arg0, jint arg1, JObject arg2);
		jint addAndGet(JObject arg0, jint arg1);
		jboolean compareAndSet(JObject arg0, jint arg1, jint arg2);
		jint decrementAndGet(JObject arg0);
		jint get(JObject arg0);
		jint getAndAccumulate(JObject arg0, jint arg1, JObject arg2);
		jint getAndAdd(JObject arg0, jint arg1);
		jint getAndDecrement(JObject arg0);
		jint getAndIncrement(JObject arg0);
		jint getAndSet(JObject arg0, jint arg1);
		jint getAndUpdate(JObject arg0, JObject arg1);
		jint incrementAndGet(JObject arg0);
		void lazySet(JObject arg0, jint arg1);
		void set(JObject arg0, jint arg1);
		jint updateAndGet(JObject arg0, JObject arg1);
		jboolean weakCompareAndSet(JObject arg0, jint arg1, jint arg2);
	};
} // namespace java::util::concurrent::atomic

