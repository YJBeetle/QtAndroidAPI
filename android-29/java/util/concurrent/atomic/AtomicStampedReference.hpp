#pragma once

#include "../../../../JObject.hpp"


namespace java::util::concurrent::atomic
{
	class AtomicStampedReference : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AtomicStampedReference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AtomicStampedReference(QJniObject obj);
		
		// Constructors
		AtomicStampedReference(jobject arg0, jint arg1);
		
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

