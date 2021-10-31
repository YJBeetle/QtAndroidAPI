#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class LruCache : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LruCache(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LruCache(QAndroidJniObject obj);
		
		// Constructors
		LruCache(jint arg0);
		
		// Methods
		jint createCount();
		void evictAll();
		jint evictionCount();
		jobject get(jobject arg0);
		jint hitCount();
		jint maxSize();
		jint missCount();
		jobject put(jobject arg0, jobject arg1);
		jint putCount();
		jobject remove(jobject arg0);
		void resize(jint arg0);
		jint size();
		__JniBaseClass snapshot();
		jstring toString();
		void trimToSize(jint arg0);
	};
} // namespace android::util

