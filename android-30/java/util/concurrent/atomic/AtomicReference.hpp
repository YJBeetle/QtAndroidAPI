#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicReference : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AtomicReference(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AtomicReference(QAndroidJniObject obj);
		
		// Constructors
		AtomicReference();
		AtomicReference(jobject arg0);
		
		// Methods
		jobject accumulateAndGet(jobject arg0, __JniBaseClass arg1);
		jobject compareAndExchange(jobject arg0, jobject arg1);
		jobject compareAndExchangeAcquire(jobject arg0, jobject arg1);
		jobject compareAndExchangeRelease(jobject arg0, jobject arg1);
		jboolean compareAndSet(jobject arg0, jobject arg1);
		jobject get();
		jobject getAcquire();
		jobject getAndAccumulate(jobject arg0, __JniBaseClass arg1);
		jobject getAndSet(jobject arg0);
		jobject getAndUpdate(__JniBaseClass arg0);
		jobject getOpaque();
		jobject getPlain();
		void lazySet(jobject arg0);
		void set(jobject arg0);
		void setOpaque(jobject arg0);
		void setPlain(jobject arg0);
		void setRelease(jobject arg0);
		jstring toString();
		jobject updateAndGet(__JniBaseClass arg0);
		jboolean weakCompareAndSet(jobject arg0, jobject arg1);
		jboolean weakCompareAndSetAcquire(jobject arg0, jobject arg1);
		jboolean weakCompareAndSetPlain(jobject arg0, jobject arg1);
		jboolean weakCompareAndSetRelease(jobject arg0, jobject arg1);
		jboolean weakCompareAndSetVolatile(jobject arg0, jobject arg1);
	};
} // namespace java::util::concurrent::atomic

