#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicStampedReference : public __JniBaseClass
	{
	public:
		// Fields
		
		AtomicStampedReference(QAndroidJniObject obj);
		// Constructors
		AtomicStampedReference(jobject arg0, jint arg1);
		AtomicStampedReference() = default;
		
		// Methods
		jboolean attemptStamp(jobject arg0, jint arg1);
		jboolean compareAndSet(jobject arg0, jobject arg1, jint arg2, jint arg3);
		jobject get(jintArray arg0);
		jobject getReference();
		jint getStamp();
		void set(jobject arg0, jint arg1);
		jboolean weakCompareAndSet(jobject arg0, jobject arg1, jint arg2, jint arg3);
	};
} // namespace java::util::concurrent::atomic

