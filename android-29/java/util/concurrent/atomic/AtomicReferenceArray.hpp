#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::lang::reflect
{
	class Field;
}

namespace java::util::concurrent::atomic
{
	class AtomicReferenceArray : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicReferenceArray(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AtomicReferenceArray(QJniObject obj);
		
		// Constructors
		AtomicReferenceArray(jobjectArray arg0);
		AtomicReferenceArray(jint arg0);
		
		// Methods
		jobject accumulateAndGet(jint arg0, jobject arg1, __JniBaseClass arg2);
		jobject compareAndExchange(jint arg0, jobject arg1, jobject arg2);
		jobject compareAndExchangeAcquire(jint arg0, jobject arg1, jobject arg2);
		jobject compareAndExchangeRelease(jint arg0, jobject arg1, jobject arg2);
		jboolean compareAndSet(jint arg0, jobject arg1, jobject arg2);
		jobject get(jint arg0);
		jobject getAcquire(jint arg0);
		jobject getAndAccumulate(jint arg0, jobject arg1, __JniBaseClass arg2);
		jobject getAndSet(jint arg0, jobject arg1);
		jobject getAndUpdate(jint arg0, __JniBaseClass arg1);
		jobject getOpaque(jint arg0);
		jobject getPlain(jint arg0);
		void lazySet(jint arg0, jobject arg1);
		jint length();
		void set(jint arg0, jobject arg1);
		void setOpaque(jint arg0, jobject arg1);
		void setPlain(jint arg0, jobject arg1);
		void setRelease(jint arg0, jobject arg1);
		jstring toString();
		jobject updateAndGet(jint arg0, __JniBaseClass arg1);
		jboolean weakCompareAndSet(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSetAcquire(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSetPlain(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSetRelease(jint arg0, jobject arg1, jobject arg2);
		jboolean weakCompareAndSetVolatile(jint arg0, jobject arg1, jobject arg2);
	};
} // namespace java::util::concurrent::atomic

