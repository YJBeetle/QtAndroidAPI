#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicMarkableReference : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicMarkableReference(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AtomicMarkableReference(QJniObject obj);
		
		// Constructors
		AtomicMarkableReference(jobject arg0, jboolean arg1);
		
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

