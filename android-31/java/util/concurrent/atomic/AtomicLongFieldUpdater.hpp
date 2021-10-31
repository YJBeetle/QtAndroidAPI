#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}

namespace java::util::concurrent::atomic
{
	class AtomicLongFieldUpdater : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicLongFieldUpdater(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AtomicLongFieldUpdater(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::concurrent::atomic::AtomicLongFieldUpdater newUpdater(jclass arg0, jstring arg1);
		jlong accumulateAndGet(jobject arg0, jlong arg1, __JniBaseClass arg2);
		jlong addAndGet(jobject arg0, jlong arg1);
		jboolean compareAndSet(jobject arg0, jlong arg1, jlong arg2);
		jlong decrementAndGet(jobject arg0);
		jlong get(jobject arg0);
		jlong getAndAccumulate(jobject arg0, jlong arg1, __JniBaseClass arg2);
		jlong getAndAdd(jobject arg0, jlong arg1);
		jlong getAndDecrement(jobject arg0);
		jlong getAndIncrement(jobject arg0);
		jlong getAndSet(jobject arg0, jlong arg1);
		jlong getAndUpdate(jobject arg0, __JniBaseClass arg1);
		jlong incrementAndGet(jobject arg0);
		void lazySet(jobject arg0, jlong arg1);
		void set(jobject arg0, jlong arg1);
		jlong updateAndGet(jobject arg0, __JniBaseClass arg1);
		jboolean weakCompareAndSet(jobject arg0, jlong arg1, jlong arg2);
	};
} // namespace java::util::concurrent::atomic

