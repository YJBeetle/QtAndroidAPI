#pragma once

#include "../../../../JObject.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicReferenceFieldUpdater : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicReferenceFieldUpdater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicReferenceFieldUpdater(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::concurrent::atomic::AtomicReferenceFieldUpdater newUpdater(jclass arg0, jclass arg1, jstring arg2);
		jobject accumulateAndGet(jobject arg0, jobject arg1, JObject arg2);
		jboolean compareAndSet(jobject arg0, jobject arg1, jobject arg2);
		jobject get(jobject arg0);
		jobject getAndAccumulate(jobject arg0, jobject arg1, JObject arg2);
		jobject getAndSet(jobject arg0, jobject arg1);
		jobject getAndUpdate(jobject arg0, JObject arg1);
		void lazySet(jobject arg0, jobject arg1);
		void set(jobject arg0, jobject arg1);
		jobject updateAndGet(jobject arg0, JObject arg1);
		jboolean weakCompareAndSet(jobject arg0, jobject arg1, jobject arg2);
	};
} // namespace java::util::concurrent::atomic

