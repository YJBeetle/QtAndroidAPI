#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicIntegerFieldUpdater : public __JniBaseClass
	{
	public:
		// Fields
		
		AtomicIntegerFieldUpdater(QAndroidJniObject obj);
		// Constructors
		AtomicIntegerFieldUpdater() = default;
		
		// Methods
		static QAndroidJniObject newUpdater(jclass arg0, jstring arg1);
		static QAndroidJniObject newUpdater(jclass arg0, const QString &arg1);
		jint accumulateAndGet(jobject arg0, jint arg1, __JniBaseClass arg2);
		jint addAndGet(jobject arg0, jint arg1);
		jboolean compareAndSet(jobject arg0, jint arg1, jint arg2);
		jint decrementAndGet(jobject arg0);
		jint get(jobject arg0);
		jint getAndAccumulate(jobject arg0, jint arg1, __JniBaseClass arg2);
		jint getAndAdd(jobject arg0, jint arg1);
		jint getAndDecrement(jobject arg0);
		jint getAndIncrement(jobject arg0);
		jint getAndSet(jobject arg0, jint arg1);
		jint getAndUpdate(jobject arg0, __JniBaseClass arg1);
		jint incrementAndGet(jobject arg0);
		void lazySet(jobject arg0, jint arg1);
		void set(jobject arg0, jint arg1);
		jint updateAndGet(jobject arg0, __JniBaseClass arg1);
		jboolean weakCompareAndSet(jobject arg0, jint arg1, jint arg2);
	};
} // namespace java::util::concurrent::atomic

