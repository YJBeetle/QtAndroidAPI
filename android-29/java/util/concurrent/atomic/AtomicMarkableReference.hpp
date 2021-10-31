#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicMarkableReference : public __JniBaseClass
	{
	public:
		// Fields
		
		AtomicMarkableReference(QAndroidJniObject obj);
		// Constructors
		AtomicMarkableReference(jobject arg0, jboolean arg1);
		AtomicMarkableReference() = default;
		
		// Methods
		jboolean attemptMark(jobject arg0, jboolean arg1);
		jboolean compareAndSet(jobject arg0, jobject arg1, jboolean arg2, jboolean arg3);
		jobject get(jbooleanArray arg0);
		jobject getReference();
		jboolean isMarked();
		void set(jobject arg0, jboolean arg1);
		jboolean weakCompareAndSet(jobject arg0, jobject arg1, jboolean arg2, jboolean arg3);
	};
} // namespace java::util::concurrent::atomic

