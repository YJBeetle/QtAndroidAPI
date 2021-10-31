#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicReferenceFieldUpdater : public __JniBaseClass
	{
	public:
		// Fields
		
		AtomicReferenceFieldUpdater(QAndroidJniObject obj);
		// Constructors
		AtomicReferenceFieldUpdater() = default;
		
		// Methods
		static QAndroidJniObject newUpdater(jclass arg0, jclass arg1, jstring arg2);
		jobject accumulateAndGet(jobject arg0, jobject arg1, __JniBaseClass arg2);
		jboolean compareAndSet(jobject arg0, jobject arg1, jobject arg2);
		jobject get(jobject arg0);
		jobject getAndAccumulate(jobject arg0, jobject arg1, __JniBaseClass arg2);
		jobject getAndSet(jobject arg0, jobject arg1);
		jobject getAndUpdate(jobject arg0, __JniBaseClass arg1);
		void lazySet(jobject arg0, jobject arg1);
		void set(jobject arg0, jobject arg1);
		jobject updateAndGet(jobject arg0, __JniBaseClass arg1);
		jboolean weakCompareAndSet(jobject arg0, jobject arg1, jobject arg2);
	};
} // namespace java::util::concurrent::atomic

